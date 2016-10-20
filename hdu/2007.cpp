#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int m, n;
    while(2 == scanf("%d%d", &m, &n)) {
        int beg_num = m < n ? m : n;
        int end_num = m > n ? m : n;
        int squre_res = 0, cube_res = 0;
        for(int i = beg_num; i <= end_num; ++i) {
            if(i & 1)
                cube_res += pow(i, 3);
            else
                squre_res += pow(i, 2);
        }
        printf("%d %d\n", squre_res, cube_res);
    }
    return 0;
}
