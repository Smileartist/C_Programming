#include<stdio.h>
#include<math.h>
int areaofcircle(int r);
int areaofrect(int l , int b);
int areaofsquare( int side);
int main(){
    int r,l,b,side;
    char input;
    printf(" c for circle\n r for rectangle\n s for square\n ");
    printf("enter input : \n");
    
    scanf("%c", &input);
    if (input == 'c')
    {   
        printf("enter radius :");
        scanf("%d", &r);
        areaofcircle(r);
    }else if (input=='r')
    {   
        printf("enter length :");
        scanf("%d", &l);
        printf("enter breadth :");
        scanf("%d", &b);
        areaofrect(l,b);
    }else if (input=='s')
    {
        printf("enter side :");
        scanf("%d", &side);
        areaofsquare(side);
    }else{
        printf("inalid input");
    }
    return 0;
}
int areaofcircle( int r ){
    float area = 3.14*pow(("%f",r),2);
    printf("the area of cirlcle is : %f untsq\n", area);
}
int areaofrect( int l ,int b ){
    int area = l * b;
    printf("the area of reactangle is : %d untsq\n", area);
}
int areaofsquare(int side){
    int area = pow(("%d",side),2);
    printf("the area of square is : %d untsq\n", area);
}