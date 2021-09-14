#include <stdio.h>

int main()
{
    // Declaring the variable num
    int num;
    
    // Using printf function to display num

    printf("%d\n", num);

    // num is initialized and assigned 2500000
    num = 2500000;
    printf("%d", num);

    return 0;
}

/*

    In line 6 - 10, since the variable num is not explicitly initialized, it will get an unpredictable value, i.e., garbage value.
    This will arise, despite initialization happening on line 13. The reason is due to Sequential Program Execution. In C Programming,
    unless specified with decision instructions, program execution is sequential. Hence, on calling the "printf" function, the program is executed, even before the next sections.

    In the above "printf" statement, since "num" is not yet initialized, the displayed output is 4194432 [for my computer]. 
    This 4194432 is an unpredictable or garbage value. Therefore, when writing programs in C, ensuring there is initilization is essential.

    As shown above, upon executing the program, in the first printf (line10), the result is 4194432, as the unpredictable value. While in the 
    second "printf" execution (line14), which comes after initilizing num, we have 2500000 as the result.



*/