#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    double x1, y1, x2, y2;
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) == 4) {
        double dis = pow(x1-x2, 2) + pow(y1-y2, 2);
        printf("%.2lf\n", sqrt(dis));
    }
    return 0;
}
