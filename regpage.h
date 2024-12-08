#ifndef REGPAGE_H
#define REGPAGE_H

#include "webdriverxx.h"
#include <QObject>

using namespace webdriverxx;

class RegPage
{
private:
    WebDriver *gc;
public:
    RegPage(WebDriver *, QVector<QString> *);
private:
    void selectGender(QString);
    void fillingFirstName(QString);
    void fillingLastName(QString);
    void fillingEmail(QString);
    void fillingPassword(QString);
    void fillingPasswordConfirm(QString);
    void submitForm();

};

#endif // REGPAGE_H
