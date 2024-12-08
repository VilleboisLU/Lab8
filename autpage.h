#ifndef AUTPAGE_H
#define AUTPAGE_H

#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class AutPage
{
private:
    WebDriver *gc;
public:
    AutPage(WebDriver *, QVector<QString> *);
private:
    void fillingEmail(QString);
    void fillingPassword(QString);
    void submitForm();

};

#endif // REGPAGE_H
