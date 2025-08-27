#include<stdio.h>
 int main(){
    float maths,english, hindi, physics, chemistry,av;
    printf("Enter marks of Maths:");
    scanf("%f" , &maths);
    printf("Enter marks of english:");
    scanf("%f", &english);
    printf("Enter value of hindi:");
    scanf("%f" , &hindi);
    printf("Enter value of physics:");
    scanf ("%f",&physics);
    printf( "Enter marks of Chemidtry:");
    scanf("%f", &chemistry);
    av= (maths + english + hindi + physics + chemistry)/5;
    printf("The average value of five subject is: %f" , av);
    return 0;
 }