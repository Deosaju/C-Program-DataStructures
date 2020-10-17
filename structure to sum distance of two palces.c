//
#include<stdio.h>
struct distance
{
    int kilometer,meter;
};

int main()
{
    int sum=0;
    struct distance place_1;
    printf("enter the distance of first place :");
    scanf("%d",&place_1.kilometer);
    struct distance place_2;
    printf("enter the distance of second place :");
    scanf("%d",&place_2.kilometer);
    sum = place_1.kilometer + place_1.kilometer;
    printf("total distance = %d",sum);
}