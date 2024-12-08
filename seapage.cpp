#include "seapage.h"

SeaPage::SeaPage(WebDriver *drive, QString param)
{
    gc = drive;
    this->search(param);
}

void SeaPage::search(QString text)
{
    gc->FindElement(ById("#small-searchterms")).Click();
    Element input = gc->FindElement(ById("#small-searchterms"));
    input.SendKeys(text.toStdString());
    gc->FindElement(ByCss(".button-1.search-box-button")).Click();
}
