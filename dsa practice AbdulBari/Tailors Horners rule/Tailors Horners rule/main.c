
#include <stdio.h>

double e(int x, int n)
{
 static double s;
 if(n==0)
 return s;
 s=1+x*s/n;
 return e(x,n-1);

}

/*
 double e(int x, int n)
 {
  double s=1;
  int i;
  double num=1;
  double den=1;

  for(i=1;i<=n;i++)
  {
  num*=x;
  den*=i;
  s+=num/den;
  }
  return s;
 }
 
 */

int main(int argc, const char * argv[]) {
    
    printf("%lf \n",e(2,10));
    return 0;
}
