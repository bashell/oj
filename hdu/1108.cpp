#include <cstdio>
using namespace std;

int gcd(int a, int b) {
    int c = a%b;
    while(c) {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b;
    while(scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", a*b/gcd(a,b));
    }
    return 0;
}
