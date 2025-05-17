#include<stdio.h>
int main()
{
float cel,fah;
printf("Enter tempreature in celsius:");
scanf("%d",cel);
fah=(cel*9/5)+32;
printf("%.2f cel=%.2f fah/n",cel,fah);
return 0;
}
