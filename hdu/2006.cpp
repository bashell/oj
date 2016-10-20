#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        int res = 1, num;
        for(int i = 0; i < n; ++i) {
            scanf("%d", &num);
            if(num & 1)
                res *= num;
        }
        printf("%d\n", res);
    }
    return 0;
}
