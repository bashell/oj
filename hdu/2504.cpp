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
    int n, a, b;
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i) {
            scanf("%d %d", &a, &b);
            int c;
            for(c = 2*b; c < 1e6; c+=b) {
                if(gcd(a, c) == b)
                    break;
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
