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
    int T, m, n;
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &m, &n);
        gcd(m, n) == 1 ? printf("NO\n") : printf("YES\n");
    }
    return 0;
}
