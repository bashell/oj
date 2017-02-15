#include <cstdio>
#include <cstring>
using namespace std;

const char *msg[] = {"You win.", "You chickened out.", "You lose."};
int hash_words[26];
char puzzle[1024];
char guess[1024];

void solve(const char *str1, const char *str2) {
    memset(hash_words, 0, sizeof(hash_words));
    int len1 = strlen(str1), len2 = strlen(str2), cnt = 0, left = 0;
    bool flag = true;
    for(int i = 0; i < len1; ++i)
        hash_words[str1[i]-'a'] = 1;
    for(int i = 0; i < 26; ++i)
        if(hash_words[i] == 1) ++left;
    for(int i = 0; i < len2; ++i) {
        if(hash_words[str2[i]-'a'] == 1) {  // guess right
            hash_words[str2[i]-'a'] = -1;
            if(--left == 0) break;
        } else if(hash_words[str2[i]-'a'] == 0) {  // guess wrong
            hash_words[str2[i]-'a'] = -2;
            ++cnt;
            if(cnt >= 7) {
                flag = false;
                break;
            }
        } else if(hash_words[str2[i]-'a'] == -1 ||
                  hash_words[str2[i]-'a'] == -2) {  // already guessed
            //continue;
        }
    }
    if(left == 0)
        printf("%s", msg[0]);
    else if(!flag)
        printf("%s", msg[2]);
    else
        printf("%s", msg[1]);
    printf("\n");
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int round;
    while(1 == scanf("%d", &round) && round != -1) {
        getchar();
        gets(puzzle);
        gets(guess);
        printf("Round %d\n", round);
        solve(puzzle, guess);
    }
    return 0;
}

