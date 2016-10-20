#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int k, a;
    while(~scanf("%d", &k)) {
        for(a = 1; a <= 65; ++a) {
            if((18 + k*a)%65 == 0) {
                printf("%d\n", a);
                break;
            }
        }
        if(a > 65)
            printf("no\n");
    }
    return 0;
}
