#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
int multi_between_negative(int* array, int count)
{
    int i;
    
    int multiply = 1;
    int first_negative = index_first_negative(array, count);
    int last_negative = index_last_negative(array, count);
    for ( i = first_negative; i < last_negative; i++)
    {
        multiply *= array[i];
    }
    return multiply;
}