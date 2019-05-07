#include<stdio.h>
int main()
{
    long int h,a,s,i,b,gnt,max,cnt;
    while(scanf("%ld %ld",&h,&a)==2)
    {
        if(h==0 && a==0)
        {
            break;
        }
        if(h>a)
        {
            s=h;
            h=a;
            a=s;
        }
        i = h;
        gnt = max = 0;
        for( ; h<=a; h++)
        {
            b=h;
            cnt = 0;
            while(1)
            {
                if(b%2 == 0)
                {
                    b/=2;
                }
                else
                {
                    b= 3*b+1;
                }
                cnt++;
                if(b==1) break;
            }
            if(cnt>max)
            {
                max = cnt;
                gnt = h;
            }
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %lad values\n",i,a,gnt,max);
    }
    return  0;
}
