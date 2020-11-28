#include<stdio.h>
#include<conio.h>

int main()
{
 float weight;
 float height;
 float bmi;
 float h;
 clrscr();

 printf("Weight (in Kilograms) \n Height (in Meters)\n\n");

 printf("Your Weight:");
 scanf("%f",&weight);

 printf("Your Height:");
 scanf("%f",&height);

 h=height*height;

 bmi=weight/h;

 printf("BMI  is %.2f\n\n",bmi);

 if(bmi<=18.5)
 {
  printf("Underweight\nGain Weight\n\n");
 }
 if((bmi>=18.5) && (bmi<=24.9))
 {
  printf("Normal Weight\nMaintain Weight\n\n");
 }
 if((bmi>=25) && (bmi<=29.9))
 {
  printf("Overweight\n Loss Fat\n\n");
 }
 if(bmi>=30)
 {
  printf("Obesity\nConsult Doctor\n\n");
 }

 printf("Body Mass Index Categories\n");
 printf("\tUnderweight =<18.5\n");
 printf("\tNormal weight = 18.5-24.9\n");
 printf("\tOverweight = 25-29.9\n");
 printf("\tObesity = BMI of 30 or greater\n");


 getch();
 return 0;
}