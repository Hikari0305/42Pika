#include <stdio.h>
 #include <stdint.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *array;

    if (size != 0 && count > SIZE_MAX / size) //size_t型のオーバーフロー対策
        return (NULL);
    array = (void *)malloc(count * size);
    if (!array)
        return(NULL);
    ft_bzero(array, count *size);
    return(array);
}