#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(scanf("%d %d", &m, &n) == 2 && !(m == 0 && n == 0))
        printf("%d\n", m + n);
    return 0;
}
