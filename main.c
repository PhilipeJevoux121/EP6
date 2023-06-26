#include <stdio.h>
#include <string.h>

int main() {
    char name[100001];
    scanf("%s", name);

    int length = strlen(name);
    int bolado = 0;

    for (int i = 0; i < length - 4; i++) {
        if (name[i] == 'z' || name[i] == 'Z') {
            if ((name[i + 1] == 'e' || name[i + 1] == 'E') &&
                (name[i + 2] == 'l' || name[i + 2] == 'L') &&
                (name[i + 3] == 'd' || name[i + 3] == 'D') &&
                (name[i + 4] == 'a' || name[i + 4] == 'A')) {
                bolado = 1;
                break;
            }
        }
    }

    if (bolado)
        printf("Link Bolado\n");
    else
        printf("Link Tranquilo\n");

    return 0;
}