#pragma once

#include <exception>

class Bad_range : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "EXCEPTION: bad_range";
    }
};


class Bad_length : public std::exception
{
public:
    virtual const char* what() const noexcept override
    {
        return "EXCEPTION: bad_length";
    }
};