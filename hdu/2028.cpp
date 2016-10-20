#include <cstdio>
using namespace std;

unsigned gcd(unsigned a, unsigned b) {
    unsigned c = a%b;
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
    int n;
    while(1 == scanf("%d", &n)) {
        unsigned res, num;
        scanf("%u", &num);
        res = num, n--;
        while(n--) {
            scanf("%u", &num);
            res = res*num/gcd(res, num);
        }
        printf("%u\n", res);
    }
    return 0;
}
