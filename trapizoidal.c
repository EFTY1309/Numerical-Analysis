#include<stdio.h>


double f(double x)
{
    return x*x+1;
}
int main(void)
{
 double a=0.0,b=2.0;
 int  n=10;
 double h=(b-a)/n;
 double sum=0;

 double x[n+1],fx[n+1];

 for(int i=0;i<=n;i++)
 {
     x[i]=a+i*h;
     fx[i]=f(x[i]);
 }

 for(int i=1;i<n;i++)
 {
    sum=sum+2*fx[i];
 }
 sum=sum+fx[0]+fx[n];
 sum=sum*(h/2);

 printf("Integration result is: %lf",sum);

}
