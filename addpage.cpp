#include "addpage.h"

AddPage::AddPage(WebDriver *drive)
{
    gc = drive;
    this->addItemsInCart();
}

void AddPage::addItemsInCart()
{
    gc->FindElements(ByCss(".button-2.product-box-add-to-cart-button")).at(0).Click();
}
