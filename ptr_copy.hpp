#ifndef PTR_COPY_HPP
#define PTR_COPY_HPP
#include <memory>
template <typename T>
std::unique_ptr<T> copy_unit_ptr(const std::unique_ptr<T> &origin)
{
    return std::unique_ptr<T>(new T(*origin));
}

#endif