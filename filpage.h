#ifndef FILPAGE_H
#define FILPAGE_H


#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class FilPage
{
private:
    WebDriver *gc;
public:
    FilPage(WebDriver *, int *);
private:
    void filterSort(int *);

};

#endif // FILPAGE_H
