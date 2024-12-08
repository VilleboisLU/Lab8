#include "edipage.h"

EdiPage::EdiPage(WebDriver *drive, int *i)
{
    gc = drive;
    this->editCart(i);
}

void EdiPage::editCart(int *i)
{
    gc->FindElements(ByCss(".cart-item-row input[type='checkbox']")).at(*i).Click();
}
