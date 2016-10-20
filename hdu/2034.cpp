#include <cstdio>
#include <unordered_set>
#include <algorithm>
using namespace std;

const int maxn = 111;
int arr[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m;
    while(2 == scanf("%d%d", &n, &m) && !(n==0 && m==0)) {
        unordered_set<int> hash;
        bool found = false;
        int num;
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        for(int i = 0; i < m; ++i) {
            scanf("%d", &num);
            hash.insert(num);
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; ++i) {
            if(hash.find(arr[i]) == hash.end()) {
                printf("%d ", arr[i]);
                found = true;
            }
        }
        if(!found)
            printf("NULL");
        printf("\n");
    }
    return 0;
}
