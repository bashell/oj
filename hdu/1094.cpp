#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) == 1) {
        int temp, sum = 0;
        for(; n > 0; --n)
            if(scanf("%d", &temp) == 1)
                sum += temp;
        printf("%d\n", sum);
    }
    return 0;
}
