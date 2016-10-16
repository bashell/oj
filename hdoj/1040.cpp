#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 1111;
int arr[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    while(~scanf("%d", &T)) {
        for(int round = 0; round < T; ++round) {
            int num;
            scanf("%d", &num);
            for(int i = 0; i < num; ++i)
                scanf("%d", &arr[i]);
            sort(arr, arr+num);
            printf("%d", arr[0]);
            for(int i = 1; i < num; ++i)
                printf(" %d", arr[i]);
            printf("\n");
        }
    }
    return 0;
}

