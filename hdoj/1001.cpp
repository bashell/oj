#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        long sum = 0;
        sum = n%2 == 0 ? (n+1)*(n/2) : n*((n+1)/2);
        printf("%ld\n\n", sum);
    }
    return 0;
}

