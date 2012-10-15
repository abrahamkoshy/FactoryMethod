#pragma once

class Product;

class Creator
{
public:
    virtual ~Creator();

    virtual Product* FactoryMethod() = 0;

    void AnOperation();

private:
    Product* product;
};

