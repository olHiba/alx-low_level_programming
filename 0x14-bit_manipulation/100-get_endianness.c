#include <stdio.h>

int get_endianness(void)
{
    unsigned int num = 1;
    char *endianCheck = (char *)&num;

    /* If the first byte (lowest address) contains the least significant byte, it's little endian.
     * Otherwise, it's big endian. */
    return (*endianCheck == 1) ? 1 : 0;
}

