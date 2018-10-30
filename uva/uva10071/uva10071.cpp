#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int v, t;
    while(2 == scanf("%d%d", &v, &t)) {
        printf("%d\n", v*t*2);
    }
    return 0;
}

