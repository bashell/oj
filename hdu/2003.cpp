#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    double r;
    while(~scanf("%lf", &r)) {
        printf("%.2lf\n", fabs(r));
    }
    return 0;
}
