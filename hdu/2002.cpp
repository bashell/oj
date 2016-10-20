#include <cstdio>
#include <cmath>
#define PI 3.1415927
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    double r;
    while(~scanf("%lf", &r)) {
        printf("%.3lf\n", 4*PI*r*r*r/3);
    }
    return 0;
}
