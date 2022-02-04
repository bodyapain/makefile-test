#include "index_first_negative.h"
int index_first_negative(int* array, int count)
{   
    int i;
    for (i = 0; i < count; i++)
    {
        if (array[i] < 0)
        {
            return i;
           
        }
    }
}