#include<stdio.h>
int Add(int x,int y)
{
    int z =0;
    z = x + y;
    return z;

}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =Add(a,b);
    printf("%d\n",sum);
    return 0;
}
/*#include<stdio.h>
int Add(int x,int y)
{
    return(x + y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =Add(a,b);
    printf("%d\n",sum);
    return 0;
}*/