#include <cstdio>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int ch, flag = 1;
    while((ch = getchar()) != EOF) {
        if(ch == '"') {
            printf("%s", flag ? "``" : "''");
            flag = !flag;
        } else {
            printf("%c", ch);
        }
    }
    return 0;
}

