#include <stdio.h>
int convert(float f);
int main(int argc, char *argv[])
{
float Mon, Tue, Wed, Thu, Fri, ave;
scanf("%f %f %f %f %f\n", &Mon, &Tue, &Wed, &Thu, &Fri);
Mon = convert(Mon);
Tue = convert(Tue);
Wed = convert(Wed);
Thu = convert(Thu);
Fri = convert(Fri);
ave = (Mon+Tue+Wed+Thu+Fri) / 5;
printf("Celsius on Mon: %0.2f\nCelsius on Tue: %0.2f\nCelsius on Wed: %0.2f\nCelsius on Thu: %0.2f\nCelsius on Fri: %0.2f\nAverage: %0.2f\n",Mon, Tue, Wed, Thu, Fri, ave);
return 0;
}

int convert(float f)
{
float celc;
celc = (f - 32) / 1.8;
return celc;
} 
