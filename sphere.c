#include<stdio.h>
  int main()
  { 
    float pi= 3.14, radius, volume;
    printf("ENter the Value of Radius:");
    scanf("%f" , &radius);
    volume = (4*radius*radius*radius*pi)/3;
    printf("Volume of sphere: %f" , volume);
    return 0;
  }