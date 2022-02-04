    #include "index_first_negative.h"
    #include "index_last_negative.h"
    #include "multi_before_and_after_negative.h"
    int multi_before_and_after_negative(int* array, int count)
    {
        int i = 0;
        int multiply = 1;
        int first_negative = index_first_negative(array, count);
        int last_negative = index_last_negative(array, count);

        for (i = 0; i < first_negative; i++)
        {
            multiply *= array[i];
        }
        for (i = last_negative; i < count; i++)
        {
            multiply *= array[i];
        }
        return multiply;
    }