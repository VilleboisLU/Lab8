#ifndef NAVPAGE_H
#define NAVPAGE_H

#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class NavPage
{
private:
    WebDriver *gc;
public:
    NavPage(WebDriver *, int *);
private:
    void navigation(int *);

};

#endif // REGPAGE_H
