#include "stack.h"

int main()
{
    struct stack_t box = {};

    printf("Please input amount of elements \n");
    scanf("%ld", &box.capacity);

    stack_init(&box, box.capacity);
    int elem = 0;
    while (elem < box.capacity)
    {
        stack_push (&box, elem);
        elem++;
    }
    stack_push(&box, 30);

    int x = stack_pop (&box);
    int y = stack_pop (&box);
    int z = stack_pop (&box);
    int e = stack_pop (&box);
    printf("%d %d %d %d \n", x, y, z, e);

    processor (&box, elem);

    stack_dump(&box, __FILE__, __FUNCTION__, __LINE__, 1);
    stack_delete(&box);
    return 0;
}



