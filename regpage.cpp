#include "regpage.h"

RegPage::RegPage(WebDriver *drive, QVector<QString> *params)
{
    gc = drive;
    this->selectGender(params->at(0));
    this->fillingFirstName(params->at(1));
    this->fillingLastName(params->at(2));
    this->fillingEmail(params->at(3));
    this->fillingPassword(params->at(4));
    this->fillingPasswordConfirm(params->at(5));
    this->submitForm();
}

void RegPage::selectGender(QString gend)
{
    Element select;
    if (gend == "male")
    {
        gc->FindElement(ById("gender-male")).Click();
    }
    else if (gend == "female")
    {
        gc->FindElement(ById("gender-male")).Click();
    }
}

void RegPage::fillingFirstName(QString fname)
{
    gc->FindElement(ById("FirstName")).Clear().SendKeys(fname.toStdString());
}

void RegPage::fillingLastName(QString lname)
{
    gc->FindElement(ById("LastName")).Clear().SendKeys(lname.toStdString());
}

void RegPage::fillingEmail(QString email)
{
    gc->FindElement(ById("Email")).Clear().SendKeys(email.toStdString());
}

void RegPage::fillingPassword(QString pswd)
{
    gc->FindElement(ById("Password")).Clear().SendKeys(pswd.toStdString());
}

void RegPage::fillingPasswordConfirm(QString pswdc)
{
    gc->FindElement(ById("ConfirmPassword")).Clear().SendKeys(pswdc.toStdString());
}

void RegPage::submitForm()
{
    gc->FindElement(ById("register-button")).Click();
}
