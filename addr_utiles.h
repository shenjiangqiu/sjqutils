#ifndef ADDR_UTILES_HPP
#define ADDR_UTILES_HPP
#include <stdint.h>
constexpr unsigned get_log(unsigned num_partion)
{
    if (num_partion == 2)
    {
        return 1;
    }
    else if (num_partion == 4)
    {
        return 2;
    }
    else if (num_partion == 8)
    {
        return 3;
    }
    else if (num_partion == 16)
    {
        return 4;
    }
    else if (num_partion == 32)
    {
        return 5;
    }
    else
    {
        return 6;
    }
}
constexpr unsigned get_partition_id_by_addr(uint64_t addr, unsigned num_partition)
{
    return (addr >> 6) & (num_partition - 1);
}

#endif