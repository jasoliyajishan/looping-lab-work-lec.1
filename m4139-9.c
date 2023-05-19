#include <stdio.h>

main()
 {
   int n,i=1,factorial;
    
    printf("enter a number");
    scanf("%d",&n);

    while(i<=n)
    {
        factorial*=i;
        i++;
    }
    printf("The Factorial of  is : %d",factorial);

}
