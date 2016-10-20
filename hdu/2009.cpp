#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m;
    while(2 == scanf("%d%d", &n, &m)) {
        double n_tmp = 1.0*n, res = 0.0;
        for(int i = 0; i < m; ++i) {
            res += n_tmp;
            n_tmp = sqrt(n_tmp);
        }
        printf("%.2f\n", res);
    }
    return 0;
}
