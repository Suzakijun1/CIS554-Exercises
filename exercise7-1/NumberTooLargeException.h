// NumberTooLargeException.h
#ifndef NUMBERTOOLARGEXCEPTION_H
#define NUMBERTOOLARGEXCEPTION_H

#include <stdexcept>

class NumberTooLargeException : public std::runtime_error
{
public:
    NumberTooLargeException()
        : std::runtime_error("number is too large") {}
};

#endif
