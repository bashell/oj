#include <cstdio>
#include <algorithm>
using namespace std;

struct point {
    double x;
    double y;
} p[3];

double cal(double a, double b, double c, double k, double e, double f, double x) {
    return a*x*x*x/3 - (a*b+k/2)*x*x + (a*b*b + c + e*k - f)*x;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        while(n--) {
            for(int i = 0; i < 3; ++i)
                scanf("%lf%lf", &p[i].x, &p[i].y);
            /*
             * y = a(x-b)^2 + c;  y = k(x-e) + f;
             */
            double b = p[0].x, c = p[0].y;
            double a = (p[1].y - c) / ((p[1].x - b)*(p[1].x - b));
            double k = (p[2].y - p[1].y) / (p[2].x - p[1].x);
            double e = p[1].x, f = p[1].y;
            double area = cal(a, b, c, k, e, f, p[2].x) - cal(a, b, c, k, e, f, p[1].x);
            area = area<0 ? -1*area : area;
            printf("%.2f\n", area);
        }
    }
    return 0;
}
