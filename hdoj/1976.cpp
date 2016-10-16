#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    int a1, a2, b1, b2, c1, c2, x, y;
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d%d", &a1, &b1, &c1);
        scanf("%d%d%d", &a2, &b2, &c2);
        x = a1*100 + b1*10 + c1;
        y = a2*100 + b2*10 + c2;
        if(x > y)
            printf("First\n");
        else if(x == y)
            printf("Same\n");
        else
            printf("Second\n");
    }
    return 0;
}
