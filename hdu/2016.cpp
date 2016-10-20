#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 101;
int arr[maxn];

int find_min(int n) {
    int min_val = arr[0], min_index = 0;
    for(int i = 0; i < n; ++i) {
        if(min_val > arr[i]) {
            min_val = arr[i];
            min_index = i;
        }
    }
    return min_index;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n) {
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        int min_index = find_min(n);
        swap(arr[0], arr[min_index]);
        printf("%d", arr[0]);
        for(int i = 1; i < n; ++i)
            printf(" %d", arr[i]);
        printf("\n");
    }
    return 0;
}
