#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
    return b==0?a:gcd(b,a%b);

}
struct st
{
    ll up;
    ll down;
} a,b;
st reduction(st result)
{
    if(result.down<0)
    {
        result.down=-result.down;
        result.up=-result.up;
    }
    if(result.up==0)
    {
        result.down=1;
    }
    else
    {
        int d=gcd(abs(result.up),abs(result.down));
        result.up/=d;
        result.down/=d;
    }
    return result;
}
st add(st f1,st f2)
{
    st result;
    result.up=f1.up*f2.down+f2.up*f1.down;
    result.down=f1.down*f2.down;
    return reduction(result);
}
st minu(st f1,st f2)
{
    st result;
    result.up=f1.up*f2.down-f2.up*f1.down;
    result.down=f1.down*f2.down;
    return reduction(result);
}
st multi(st f1,st f2)
{
    st result;
    result.up=f1.up*f2.up;
    result.down=f1.down*f2.down;
    return reduction(result);
}
st divide(st f1,st f2)
{
    st result;
    result.up=f1.up*f2.down;
    result.down=f1.down*f2.up;
    return reduction(result);
}
void show(st r)
{
    r=reduction(r);
    if(r.up<0)printf("(");
    if(r.down==1)printf("%lld",r.up);
    else if(abs(r.up)>r.down)
    {
        printf("%lld %lld/%lld",r.up/r.down,abs(r.up)%r.down,r.down);
    }
    else
    {
        printf("%lld/%lld",r.up,r.down);
    }
    if(r.up<0)
        printf(")");
}
int main()
{
    scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);
    show(a);
    printf(" + ");
    show(b);
    printf(" = ");
    show(add(a,b));
    printf("\n");

    show(a);
    printf(" - ");
    show(b);
    printf(" = ");
    show(minu(a,b));
    printf("\n");

    show(a);
    printf(" * ");
    show(b);
    printf(" = ");
    show(multi(a,b));
    printf("\n");

    show(a);
    printf(" / ");
    show(b);
    printf(" = ");
    if(b.up==0)printf("Inf");
    else
        show(divide(a,b));
    printf("\n");
    //printf("%d",b.up);
    return 0;
}