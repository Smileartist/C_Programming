#include <stdio.h>
int main (){
    int n;
    printf (" Enter the number :");
    scanf("%d", &n);
    printf("the table is :\n");
    for(int i=1;i<=10;i++){
        // product = n * i;
        printf(" %d\n", n*i);
    }   
    return 0;
}