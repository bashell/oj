#include <cstdio>
using namespace std;

int underpass[3];

int main()
{
    //freopen("in.txt", "r", stdin);
    while(3 == scanf("%d%d%d", &underpass[0], &underpass[1], &underpass[2])) {
        bool flag = true;
        for(int i = 0; i < 3; ++i) {
            if(underpass[i] <= 168) {
                printf("CRASH %d\n", underpass[i]);
                flag = false;
                break;
            }
        }
        if(flag)
            printf("NO CRACH\n");
    }
    return 0;
}
