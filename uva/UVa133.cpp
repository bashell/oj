#include <cstdio>
#include <vector>
using namespace std;

void solve(vector<int> &ivec, int N, int k, int m) {
    int index1 = 0, index2 = N-1, left = N;
    bool first_print = true;
    for(;;)  {
        for(int i = 0; i < k-1; ) {
            index1 = (index1 + 1 + N) % N;
            if(ivec[index1] != 0) ++i;
        }
        for(int i = 0; i < m-1; ) {
            index2 = (index2 -1 + N) % N;
            if(ivec[index2] != 0) ++i;
        }
        if(!first_print) printf(",");
        if(ivec[index1] != ivec[index2]) {
            left -= 2;
            printf("%3d%3d", ivec[index1], ivec[index2]);
        } else {
            left -= 1;
            printf("%3d", ivec[index1]);
        }
        if(left == 0) break;
        ivec[index1] = ivec[index2] = 0;
        index1 = (index1 + 1 + N) % N;
        index2 = (index2 -1 + N) % N;
        while(ivec[index1] == 0) index1 = (index1 + 1 + N) % N;
        while(ivec[index2] == 0) index2 = (index2 -1 + N) % N;
        first_print = false;
    }
    printf("\n");
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int N, k, m;
    while(3 == scanf("%d%d%d", &N, &k, &m) && N) {
        vector<int> ivec(N, 0);
        for(int i = 0; i < N; ++i)
            ivec[i] = i+1;
        solve(ivec, N, k, m);
    }
    return 0;
}
