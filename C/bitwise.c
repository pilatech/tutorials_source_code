#include <stdio.h>

int main(void) {
        /* 
         * &, |, ^, ~, <<, >>>
         * integers & characters ==> numbers without the fractional part
         */

        int a = 10, b = 15, result;
        result = a & b;
        printf("Result of %d & %d ==> %d\n", a, b, result);


        return (0);
}
