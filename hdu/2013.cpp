#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        int res = 1;
        for(int i = 1; i < n; ++i)
            res = (res+1)*2;
        printf("%d\n", res);
    }
    return 0;
}
