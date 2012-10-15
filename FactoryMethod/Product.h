#pragma once

class Product
{
public:
    virtual ~Product() {};

    virtual void SomeRandomOp() = 0;
};

