#include <stdio.h>

struct Address {
    char village[50];
    int pincode;
};

struct Member {
    int id;
    char name[50];
    float share_capital;
    struct Address address;
};

int main() {
    int N;

    scanf("%d", &N);

    if (N <= 0 || N > 200) {
        printf("INVALID COUNT");
        return 0;
    }

    struct Member members[200];

    float totalShare = 0.0;
    int highestIndex = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f %s %d",
              &members[i].id,
              members[i].name,
              &members[i].share_capital,
              members[i].address.village,
              &members[i].address.pincode);

        totalShare += members[i].share_capital;

        if (members[i].share_capital > members[highestIndex].share_capital) {
            highestIndex = i;
        }
    }

    printf("MEMBER LEDGER\n");

    for (int i = 0; i < N; i++) {
        printf("%d %s %s %d %.2f\n",
               members[i].id,
               members[i].name,
               members[i].address.village,
               members[i].address.pincode,
               members[i].share_capital);
    }

    printf("Total share capital (Rs): %.2f\n", totalShare);

    printf("Highest holder: %d %s %s %d %.2f",
           members[highestIndex].id,
           members[highestIndex].name,
           members[highestIndex].address.village,
           members[highestIndex].address.pincode,
           members[highestIndex].share_capital);

    return 0;
}