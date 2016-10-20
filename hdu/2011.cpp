#include <cstdio>
using namespace std;

double solve(int k) {
    int flag = 0;
    double res = 1.0, tmp;
    for(int i = 1; i < k; ++i) {
        tmp = 1.0/(i+1);
        if(flag)
            res += tmp;
        else
            res += -1*tmp;
        flag = !flag;
    }
    return res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int m;
    while(~scanf("%d", &m)) {
        int num;
        for(int i = 0; i < m; ++i) {
            scanf("%d", &num);
            printf("%.2f\n", solve(num));
        }
    }
    return 0;
}
