#include <cstdio>
#include <algorithm>
using namespace std;

int china[101];
int japan[101];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) && n) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &china[i]);
        for(int i = 0; i < n; ++i)
            scanf("%d", &japan[i]);
        sort(china, china+n);
        sort(japan, japan+n);
        int score1 = 0, score2 = 0;
        for(int i = 0; i < n; ++i) {
            if(china[i] > japan[i])
                score1 += 2;
            else if(china[i] < japan[i])
                score2 += 2;
            else
                ++score1, ++score2;
        }
        printf("%d vs %d\n", score1, score2);
    }
    return 0;
}
