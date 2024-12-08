#ifndef EDIPAGE_H
#define EDIPAGE_H


#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class EdiPage
{
private:
    WebDriver *gc;
public:
    EdiPage(WebDriver *, int *);
private:
    void editCart(int *);

};

#endif // EDIPAGE_H
