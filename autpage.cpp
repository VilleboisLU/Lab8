#include "autpage.h"

AutPage::AutPage(WebDriver *drive, QVector<QString> *params)
{
    gc = drive;
    this->fillingEmail(params->at(0));
    this->fillingPassword(params->at(1));
    this->submitForm();
}

void AutPage::fillingEmail(QString email)
{
    gc->FindElement(ById("Email")).Clear().SendKeys(email.toStdString());
}

void AutPage::fillingPassword(QString pswd)
{
    gc->FindElement(ById("Password")).Clear().SendKeys(pswd.toStdString());
}

void AutPage::submitForm()
{
    gc->FindElement(ByCss(".button-1.login-button")).Click();
}
