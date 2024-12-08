#ifndef ADDPAGE_H
#define ADDPAGE_H


#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class AddPage
{
private:
    WebDriver *gc;
public:
    AddPage(WebDriver *);
private:
    void addItemsInCart();

};

#endif // ADDPAGE_H
