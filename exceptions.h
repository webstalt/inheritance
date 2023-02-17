#pragma once

#include <exception>

class Bad_range : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "EXCEPTION: выход за пределы массива";
    }
};


class Bad_length : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "EXCEPTION: неправильная длина массива";
    }
};