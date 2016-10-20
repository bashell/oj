#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int m;
    for(scanf("%d", &m); m > 0; --m) {
        int n, temp;
        int sum = 0;
        for(scanf("%d", &n); n > 0; --n)
            if(scanf("%d", &temp) == 1)
                sum += temp;
        printf("%d\n", sum);
    }
    return 0;
}
