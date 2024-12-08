#include "navpage.h"

NavPage::NavPage(WebDriver *drive, int *i)
{
    gc = drive;
    this->navigation(i);
}

void NavPage::navigation(int *i)
{
    gc->FindElements(ByCss(".listbox .list a")).at(*i).Click();
}

