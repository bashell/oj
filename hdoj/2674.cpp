#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 2010;
int a[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    a[0] = 1;
    for(int i = 1; i <= 2009; ++i)
        a[i] = (a[i-1]*i)%2009;
    int n;
    while(~scanf("%d", &n)) {
        if(n >= 2009)
            printf("%d\n", a[2009]);
        else
            printf("%d\n", a[n]);
    }
    return 0;
}
