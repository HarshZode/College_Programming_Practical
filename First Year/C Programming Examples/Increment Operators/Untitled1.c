#include <stdio.h>




 main()
{
    int b=20,c;
    printf("\n the value of b is %d",b);
    printf("\n the value of c is %d",c=--b);  // this says first decrease then assign b to c
    printf("\n the value of b is %d",b);
    printf("\n the value of c is %d",c=b--);  // this says first assign b to c then decrease

    printf("\n the value of b is %d",b);


}

