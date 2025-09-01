#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    /*
    int x = 3;
    int y = 4;
    Number z = x + y;

    printf("%d", z);
    */

    /*
    String name = "Zion";
    printf("%s", name);*/

    Initials user1 = "IZ";
    Initials user2 = "CS";
    Initials user3 = "ST";
    Initials user4 = "PM";


    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}