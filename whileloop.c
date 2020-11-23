#include<stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    while(a < 10){// syntex with in () condition for code and increament and decreament a++/a--;.

        printf("%d\n", a);
        a++;
    }

    return 0;
}