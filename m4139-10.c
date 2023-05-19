#include <stdio.h>

main()
 {
   int n,i,factorial=1;
    
    printf("enter a number");
    scanf("%d",&n);

    while(n>=1)
    {
        factorial=factorial*n;
        n--;
    }
    printf("The Factorial of  is : %d",factorial);
return 0;
}
