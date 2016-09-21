#include<stdio.h>
int main()
{
    float X;
    float ans;
    printf("Give the value of X : ");
    scanf("%f",&X);
    ans=2*X+5*pow(X,2)+6*pow(X,3)+10;
    printf("The ans is: %f",ans);
    return 0;
}
