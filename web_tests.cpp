#include "web_tests.h"

Web_Tests::Web_Tests(QObject *parent):
    QObject(parent)
{
    const char* url = "localhost:4444";
    gc = new WebDriver(Start(Chrome(), url));
}

void Web_Tests::registrationPage()
{
    for(int i = 0; i < paramReg->size(); i++)
    {
        gc->Navigate("https://demowebshop.tricentis.com/register");
        QVector<QString> *parameters = new QVector<QString>(paramReg->at(i));
        RegPage reg(gc, parameters);
        QCOMPARE(gc->GetUrl(), resultReg->at(i).toStdString());
    }
}

void Web_Tests::authorizationPage()
{
    for(int i = 0; i < paramAut->size(); i++)
    {
        gc->Navigate("https://demowebshop.tricentis.com/login");
        QVector<QString> *parameters = new QVector<QString>(paramAut->at(i));
        AutPage reg(gc, parameters);
        QCOMPARE(gc->GetUrl(), resultAut->at(i).toStdString());
    }
}

void Web_Tests::navigationPage()
{
    for(int i = 0; i < 8; i++)
    {
        gc->Navigate("https://demowebshop.tricentis.com/");
        NavPage nav(gc, &i);
        QCOMPARE(gc->GetUrl() == "https://demowebshop.tricentis.com/", false);
     }
}

void Web_Tests::searchPage()
{
    for(int i = 0; i < paramSea->size(); i++)
    {
        gc->Navigate("https://demowebshop.tricentis.com/");
        SeaPage sea(gc, paramSea->at(i));
        QCOMPARE(gc->GetUrl() == "https://demowebshop.tricentis.com/", false);
     }
}

void Web_Tests::filterPage()
{
    for(int i = 0; i < 6; i++)
    {
        gc->Navigate("https://demowebshop.tricentis.com/desktops");
        FilPage fil(gc, &i);
     }
}

void Web_Tests::addItemsInCartPage()
{
    gc->Navigate("https://demowebshop.tricentis.com/notebooks");
    AddPage add(gc);
}

void Web_Tests::editCartPage()
{
    gc->Navigate("https://demowebshop.tricentis.com/cart");
    EdiPage edi(gc, 0);
    gc->FindElements(ByCss(".button-2.update-cart-button")).at(0).Click();
}
