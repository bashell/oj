#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    for(scanf("%d", &n); n > 0; --n) {
        int i, j;
        if(scanf("%d %d", &i, &j) == 2)
            printf("%d\n", i + j);
    }
    return 0;
}
