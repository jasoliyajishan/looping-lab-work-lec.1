#include <stdio.h>

int main()
 {
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);

    while (n >= i) {
    	if(n%2==0)
        printf("%d\n", n);
        n--;
    }

    return 0;
}
