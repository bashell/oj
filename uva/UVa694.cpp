#include <cstdio>
using namespace std;

int solve(long a, long l) {
    int steps = 1;
    while(a != 1) {
        ++steps;
        if(a & 0x1) {
            a = 3*a + 1;
            if(a > l) {
                --steps;
                break;
            }
        } else {
            a /= 2;
        }
    }
    return steps;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int kase = 1;
    long A, L;
    while(2 == scanf("%ld%ld", &A, &L) && A != -1) {
        printf("Case %d: ", kase++);
        printf("A = %ld, limit = %ld, number of terms = %d\n", A, L, solve(A, L));
    }
    return 0;
}

