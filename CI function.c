#include<stdio.h>
#include<math.h>
float CI(float p,float r,int t,int n);
float main()
{
  float x,y,s;
  int z,q;
  printf("Enter the values of x,y,z,q");
  scanf("%f %f %d %d",&x,&y,&z,&q);
  s=CI(x,y,z,q);
  printf("The CI is %f",s);
  return 0;
}

float CI(float p,float r,int t,int n)
{
 float CI=p*pow(1+(r/100*n),n*t) ;
 return(CI);
}
