#include "stdafx.h"
#include "Creator.h"
#include "Product.h"

Creator::~Creator()
{
    if (product != NULL)
    {
        delete product;
    }
}

void Creator::AnOperation()
{
    //call the factory method to create a product
    product = FactoryMethod();

    if (product != NULL)
    {
        //perform some operation on the product
        product->SomeRandomOp();
    }
}

