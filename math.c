#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float e,f;
    e=(a+b+c)/2.0;
    f=e*(e-a)*(e-b)*(e-c);
    printf("%.2f\n",sqrt(f));
    return 0;    
}