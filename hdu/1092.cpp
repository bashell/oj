#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(scanf("%d", &n) == 1 && n) {
        int sum = 0;
        for( ; n > 0; --n) {
            scanf("%d", &m);
            sum += m;
        }
        printf("%d\n", sum);
    }
    return 0;
}
