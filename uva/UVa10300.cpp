#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, f, a, b, c;
    while(~scanf("%d", &n)) {
        while(n--) {
            scanf("%d", &f);
            int sum = 0;
            for(int i = 0; i < f; ++i) {
                scanf("%d%d%d", &a, &b, &c);
                sum += a*c;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}

