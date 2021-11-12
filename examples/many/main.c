#include <stdio.h>
#include <stdlib.h>
#include <defs.h>

int main()
{
    int c = add(1, 2);

    printf("H%dllo, w%drld!\n", c, 0);

    helper();
    return 0;
}
