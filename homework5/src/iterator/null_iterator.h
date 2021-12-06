#pragma once

#include "iterator.h"
#include <string>
#include "../shape.h"

class NullIterator: public Iterator{
public:
    ~NullIterator(){}

    NullIterator(){}

    void first() override{
        throw std::string("Null Iterator don't have first().");
    };

    Shape* currentItem() const override{
        throw std::string("Null Iterator don't have currentItem().");
    };

    void next() override{
        throw std::string("Null Iterator don't have next().");
    };

    bool isDone() const override{
        return true;
    };
};