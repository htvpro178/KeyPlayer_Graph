#ifndef WEBCRAWLER_H
#define WEBCRAWLER_H

using namespace std;

#include <QNetworkReply>
#include <QUrl>

class QNetworkAccessManager;
class QNetworkRequest;



class WebCrawler_Parser : public QObject  {
    Q_OBJECT
public:
    WebCrawler_Parser(QString seed, int maxNodes, int maxLinksPerPage,
                      bool extLinks, bool intLinks);
    ~WebCrawler_Parser();
public slots:
    void parse(QNetworkReply *reply);
    void newLink(int s, QUrl target, bool enqueue_to_frontier);
signals:
    void signalCreateNode(QString url, int no);
    void signalCreateEdge (int source, int target);
    void startSpider();
    void finished (QString);
private:
    QByteArray ba;
    QMap <QUrl, int> knownUrls;
    QUrl  m_seed;
    int m_maxPages;
    int m_discoveredNodes;
    int m_maxLinksPerPage;
    bool m_extLinks, m_intLinks;
};


class  WebCrawler_Spider : public QObject  {
    Q_OBJECT
public:
    WebCrawler_Spider(QString seed, int maxNodes, int maxLinksPerPage
                      ,bool extLinks, bool intLinks);
    ~WebCrawler_Spider();
public slots:
    void get();
    void httpFinished(QNetworkReply *reply);

signals:
    void parse(QNetworkReply *reply);
    void finished (QString);
private:
    QNetworkAccessManager *http;
    QNetworkRequest *request;
    QNetworkReply *reply;
    QUrl currentUrl ;
    QString  m_seed;
    int m_maxPages;
    int m_visitedNodes;
    int m_maxLinksPerPage;
    bool m_extLinks, m_intLinks;

};

#endif
