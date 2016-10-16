#include <cstdio>
#include <iostream>
using namespace std;

const int maxn = 100001;
int arr[maxn];

int main()
{
    //freopen("in.txt", "r", stdin);
    int T, n;
    scanf("%d", &T);
    for(int round = 0; round < T; ++round) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        int thisSum, maxSum, x, beg_index, end_index;
        thisSum = x = beg_index = end_index = 0;
        maxSum = arr[0];
        for(int i = 0; i < n; ++i) {
            thisSum += arr[i];
            if(thisSum > maxSum) {
                maxSum = thisSum;
                beg_index = x;
                end_index = i;
            }
            if(thisSum < 0) {
                thisSum = 0;
                x = i+1;
            }
        }
        if(round > 0)
            printf("\n");
        printf("Case %d:\n%d %d %d\n", round+1, maxSum, beg_index+1, end_index+1);
    }
    return 0;
}

