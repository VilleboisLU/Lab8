#ifndef SEAPAGE_H
#define SEAPAGE_H


#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class SeaPage
{
private:
    WebDriver *gc;
public:
    SeaPage(WebDriver *, QString);
private:
    void search(QString);
};

#endif // SEAPAGE_H
