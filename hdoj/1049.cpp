#include <cstdio>
using namespace std;

int n, u, d;

int main()
{
    //freopen("in.txt", "r", stdin);
    while(scanf("%d%d%d", &n, &u, &d) && n) {
        int time = 0, last_index = 0;
        for(;;) {
            last_index += u; ++time;
            if(last_index >= n)
                break;
            last_index -= d; ++time;
        }
        printf("%d\n", time);
    }
    return 0;
}
