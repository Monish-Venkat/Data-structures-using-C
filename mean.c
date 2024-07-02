#include <math.h> 
void main() 
{ 
     float a[50],sum=0,mean=0,variance=0,deviation=0;
     int n,i; 
     clrscr();
     printf("Enter the number of elements : "); 
     scanf("%d",&n);  
     printf("Enter the array elements :\n"); 
     for(i=0;i<n;i++) 
       scanf("%f",&a[i]);
     for(i=0;i<n;i++) 
        sum=sum+a[i];
        mean=sum/n;
        variance+=pow(a[i]-mean),2;
        variance=variance/n;
        deviation=sqrt(variance);
        printf("Sum = %f\n",sum);
        printf("Mean = %f\n",mean);
        printf("Variance = %f\n",variance);
        printf("Deviation = %f\n",deviation);
getch();
}