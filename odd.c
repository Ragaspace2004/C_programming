# include<stdio.h>
int find_odd(int k) {
    int a, count = 0;

    while (1) {
        scanf("%d", &a);
        if (a == -1) {
            break;
        }

        if (a % 2 != 0) {
            count++;
            if (count == k) {
                return a;
            }
        }
    }

    return -1;
}

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", find_odd(k));
    return 0;
}
