#include <cstdio>
#include <algorithm>
using namespace std;

int arr[3];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n)) {
        for(int i = 0; i < n; ++i) {
            scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
            sort(arr, arr+3);
            printf("Scenario #%d:\n", i+1);
            if(arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2])
                printf("yes\n\n");
            else
                printf("no\n\n");
        }
    }
    return 0;
}
