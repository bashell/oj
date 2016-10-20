#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 51;
int arr[maxn][maxn];
double score_avg[maxn], course_avg[maxn];
int n, m;

void init() {
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            scanf("%d", &arr[i][j]);
}

void solve() {
    double sum;
    for(int i = 0; i < n; ++i) {
        sum = 0.0;
        for(int j = 0; j < m; ++j)
            sum += arr[i][j];
        score_avg[i] = sum/m;
    }
    for(int j = 0; j < m; ++j) {
        sum = 0.0;
        for(int i = 0; i < n; ++i)
            sum += arr[i][j];
        course_avg[j] = sum/n;
    }
    int cnt = 0;
    bool flag;
    for(int i = 0; i < n; ++i) {
        flag = true;
        for(int j = 0; j < m; ++j)
            if(arr[i][j] < course_avg[j])
                flag = false;
        if(flag)
            ++cnt;
    }
    printf("%.2f", score_avg[0]);
    for(int i = 1; i < n; ++i)
        printf(" %.2f", score_avg[i]);
    printf("\n");

    printf("%.2f", course_avg[0]);
    for(int j = 1; j < m; ++j)
        printf(" %.2f", course_avg[j]);
    printf("\n");

    printf("%d\n", cnt);
}

int main()
{
    //freopen("in.txt", "r", stdin);
    while(2 == scanf("%d%d", &n, &m)) {
        init();
        solve();
        printf("\n");
    }
    return 0;
}
