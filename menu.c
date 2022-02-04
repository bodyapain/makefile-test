#include <stdio.h>

#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_before_and_after_negative.h"
#include "multi_between_negative.h"

int main()
{
    int i;
    int preference=5;
    int result;
    int numbersArray[20];
    int count = 0;
    scanf("%d", &preference);
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &numbersArray[i]);
        count++;
        if (getchar() == '\n') break;
    }

    switch (preference) {
    case 0:


        result = index_first_negative(numbersArray, count);
        printf("%d\n", result);        
        
        break;
    case 1:

        result = index_last_negative(numbersArray, count);

        printf("%d\n", result);
        
        break;
    case 2:

        result = multi_between_negative(numbersArray, count);

        printf("%d\n", result);
        break;
    case 3:

        result = multi_before_and_after_negative(numbersArray, count);
        
        printf("%d\n", result);
        
        break;
    default:

        printf("%s\n", "Данные некорректны");
    }

}