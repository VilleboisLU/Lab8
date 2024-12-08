#ifndef WEB_TESTS_H
#define WEB_TESTS_H

#include <QtTest/QTest>
#include "regpage.h"
#include "autpage.h"
#include "navpage.h"
#include "seapage.h"
#include "filpage.h"
#include "addpage.h"
#include "edipage.h"


#include "webdriverxx.h"
using namespace webdriverxx;

class Web_Tests: public QObject
{
    Q_OBJECT
private:
    QVector<QVector<QString>> *paramReg = new QVector<QVector<QString>>(
    {{"male",   "Lev",  "Villebois", "VilleboisLU@gmail.com", "VilleboisLU", "VilleboisLU"},
     {"female", "Anna", "Villebois", "VilleboisAU@gmail.com", "VilleboisAU", "VilleboisAU"}});
    QVector<QString> *resultReg = new QVector<QString>(
    {"https://demowebshop.tricentis.com/registerresult/1",
     "https://demowebshop.tricentis.com/registerresult/1"});

    QVector<QVector<QString>> *paramAut = new QVector<QVector<QString>>(
    {{"VilleboisLU@gmail.com", "VilleboisLU"},
     {"VilleboisAU@gmail.com", ""},
     {"", "VilleboisLU"}});
    QVector<QString> *resultAut = new QVector<QString>(
    {"https://demowebshop.tricentis.com/",
     "https://demowebshop.tricentis.com/"});

    QVector<QString> *paramSea = new QVector<QString>(
    {"Laptop",
     "Gift Card"});
public:
    WebDriver *gc;
    explicit Web_Tests(QObject *parent = 0);

private slots:
    void registrationPage();
    void authorizationPage();
    void navigationPage();
    void searchPage();
    void filterPage();
    void addItemsInCartPage();
    void editCartPage();
};

#endif // WEB_TESTS_H
