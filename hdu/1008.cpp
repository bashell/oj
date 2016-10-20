#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n) && n) {
        vector<int> ivec(n, 0);
        for(int i = 0; i < n; ++i)
            scanf("%d", &ivec[i]);
        int time_cost = 5*n;
        int last_floor = 0;
        for(int i = 0; i < n; ++i) {
            int gap = ivec[i] - last_floor;
            last_floor = ivec[i];
            if(gap > 0)
                time_cost += 6*gap;
            else
                time_cost += (-4)*gap;
        }
        printf("%d\n", time_cost);
    }
    return 0;
}
