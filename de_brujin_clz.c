#include "de_brujin_clz.h"

int debrujinClz(uint32_t x)
{
    uint32_t i = x;
    i = i | (i >> 16);
    i = i | (i >> 8);
    i = i | (i >> 4);
    i = i | (i >> 2);
    i = i | (i >> 1);
    i = ~i;
    return i;
}
