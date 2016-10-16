#include <cstdio>
using namespace std;

long long gcd(long long a, long long b) {
    long long c = a % b;
    while(c) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--) {
        int count;
        long long nlcm = 1, value;
        scanf("%d", &count);
        for(int i = 0; i < count; ++i) {
            scanf("%lld", &value);
            nlcm = nlcm * value / gcd(nlcm, value);
        }
        printf("%lld\n", nlcm);
    }
    return 0;
}
