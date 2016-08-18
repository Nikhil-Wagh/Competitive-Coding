#include<stdio.h>
main()
{
    int n,p,s;
    scanf("%d",&n);
    if(n<10)
    {s=0;}
    p=n-10;
    if(p>=2&&p<10)
    s=4;
    else if(p==10)
        s=15;
    else if(p==1||p==11)
    s=4;
        else s=0;
    printf("%d",s);

}
