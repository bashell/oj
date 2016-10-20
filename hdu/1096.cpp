#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while(n--) {
        int m, sum = 0;
        scanf("%d", &m);
        while(m--) {
            int a = 0;
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
        if(n != 0)
            printf("\n");
    }
    return 0;
}

