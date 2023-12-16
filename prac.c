# include <stdio.h>
int main (){
    // int n;
    // do
    // {
    //     printf("Enter no : ");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //      if(n%7 == 0){
    //         break;
    //     }
    // } while (1);
    // printf("thanks");

    // for (int i = 5; i <=50; i++)
    // {
    //     if  (i%2 ==0){
    //         continue;
    //     }
    //     printf("%d\n", i );
    // }

    // int n;
    // int product=1;
    // printf("Enter no : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     product = product * i;
    // }
    
    // printf("the factorial is : %d", product);
    
    // return 0;
    // int n;
    // printf("enter the no :");
    // scanf("%d", &n);
    // for (int i = 10; i>=1; i--)
    // {
    //     printf(" %d\n", n*i);
    // }
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("the sum is : %d", sum);
    
}