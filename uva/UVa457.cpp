#include <cstdio>
#include <cstring>
using namespace std;

int DNA[10];
char ch[4] = {' ', '.', 'x', 'W'};
char culture_dish[40];

void init() {
    memset(culture_dish, ' ', sizeof(culture_dish));
    culture_dish[19] = '.';
    for(int i = 0; i < 10; ++i)
        scanf("%d", &DNA[i]);
}

void print() {
    for(int i = 0; i < 40; ++i)
        printf("%c", culture_dish[i]);
    printf("\n");
}

int cal_population(char input_char) {
    if(input_char == ' ') return 0;
    if(input_char == '.') return 1;
    if(input_char == 'x') return 2;
    if(input_char == 'W') return 3;
}

void change() {
    int arr[40] = {0};
    for(int i = 0; i < 40; ++i) {
        if(i == 0)
            arr[i] = cal_population(culture_dish[i]) + cal_population(culture_dish[i+1]);
        else if(i == 39)
            arr[i] = cal_population(culture_dish[i]) + cal_population(culture_dish[i-1]);
        else
            arr[i] = cal_population(culture_dish[i-1]) + cal_population(culture_dish[i]) +
                       cal_population(culture_dish[i+1]);
    }
    for(int i = 0; i < 40; ++i)
        culture_dish[i] = ch[DNA[arr[i]]];
}

void solve() {
    print();
    for(int i = 1; i < 50; ++i) {
        change();
        print();
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, kase = 0;
    scanf("%d", &n);
    while(n--) {
        init();
        if(kase++) printf("\n");
        solve();
    }
    return 0;
}

