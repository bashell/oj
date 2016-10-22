#include <cstdio>
#include <cstring>
using namespace std;

char arr[5][5];
char ch;
int space_x, space_y;

void myswap(char *x, char *y) {
    char tmp = *x;
    *x = *y;
    *y = tmp;
}

void judge() {
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
            if(arr[i][j] == ' ')
                space_x = i, space_y = j;
}

void solve() {
    int round = 0, kase = 0;
    for(;;) {
        memset(arr, 0, sizeof(arr));
        if((ch = getchar()) == 'Z') break;
        arr[0][0] = ch;
        for(int j = 1; j < 5; ++j) {
            ch = getchar();
            arr[0][j] = ch;
        }
        getchar();
        for(int i = 1; i < 5; ++i) {
            for(int j = 0; j < 5; ++j) {
                ch = getchar();
                arr[i][j] = ch;
            }
            getchar();
        }
        judge();  // update x and y of space
        bool flag = true;
        while((ch = getchar()) != '0') {
            switch(ch) {
            case 'A':
                if(space_x == 0) {
                    flag = false; break;
                }
                myswap(&arr[space_x][space_y], &arr[space_x-1][space_y]);
                --space_x;
                break;
            case 'B':
                if(space_x == 4) {
                    flag = false; break;
                }
                myswap(&arr[space_x][space_y], &arr[space_x+1][space_y]);
                ++space_x;
                break;
            case 'L':
                if(space_y == 0) {
                    flag = false; break;
                }
                myswap(&arr[space_x][space_y], &arr[space_x][space_y-1]);
                --space_y;
                break;
            case 'R':
                if(space_y == 4) {
                    flag = false; break;
                }
                myswap(&arr[space_x][space_y], &arr[space_x][space_y+1]);
                ++space_y;
            }
        }
        getchar();

        if(kase++) printf("\n");
        if(!flag) {
            printf("Puzzle #%d:\nThis puzzle has no final configuration.\n", ++round);
        } else {
            printf("Puzzle #%d:\n", ++round);
            for(int i = 0; i < 5; ++i) {
                printf("%c", arr[i][0]);
                for(int j = 1; j < 5; ++j)
                    printf(" %c", arr[i][j]);
                printf("\n");
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    solve();
    return 0;
}

