#include<stdio.h>
struct distance
{
    float feet;
    float inches;

}dist1,dist2,sum;
void addDistance(struct distance dist1,struct distance dist2);
int main()
{
    printf("Enter distance 1 in feet and inches:");
    scanf("%f %f",&dist1.feet,&dist1.inches);
    printf("Enter distance 2 in feet and inches:");
    scanf("%f %f",&dist2.feet,&dist2.inches);
    addDistance(dist1,dist2);
    return 0;

}
void addDistance(struct distance dist1,struct distance dist2)
{
    sum.feet=dist1.feet+dist2.feet;
    sum.inches=dist1.inches+dist2.inches;
    while(sum.inches>=12)
    {
        sum.inches=sum.inches-12;
        sum.feet=sum.feet+1;
    }
    printf("The sum of distances is %f feet %f inches",sum.feet,sum.inches);

}