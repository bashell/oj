#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n) {
        int neg_num = 0, zero_num = 0, pos_num = 0;
        double input;
        for(int i = 0; i < n; ++i) {
            scanf("%lf", &input);
            if(fabs(input) < 1e-8)
                ++zero_num;
            else if(input < 0)
                ++neg_num;
            else
                ++pos_num;
        }
        printf("%d %d %d\n", neg_num, zero_num, pos_num);
    }
    return 0;
}
