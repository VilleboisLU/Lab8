#include "filpage.h"

FilPage::FilPage(WebDriver *drive, int *i)
{
    gc = drive;
    this->filterSort(i);
}

void FilPage::filterSort(int *i)
{
    gc->FindElement(ByCss("#products-orderby")).FindElements(ByCss("#products-orderby option")).at(*i).Click();
}
