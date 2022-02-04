#include "index_first_negative.h"
#include "index_last_negative.h"
int index_last_negative(int* array, int count)
{   
    int first_negative = index_first_negative(array, count);
    int i;
    for ( i = count - 1; i >= first_negative; i--)
    {
        if (array[i] < 0)
        {
            return i;
            break;
        }
    }
}