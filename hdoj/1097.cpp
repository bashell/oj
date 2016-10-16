#include <cstdio>
using namespace std;

void helper(int a, int b) {
    int res = 1;
    int base = a % 10;
    while(b) {
        if(b & 1)
            res = res * base % 10;
        base = base * base % 10;
        b >>= 1;
    }
    printf("%d\n", res%10);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b;
    while(scanf("%d%d", &a, &b) == 2) {
        helper(a, b);
    }
    return 0;
}

