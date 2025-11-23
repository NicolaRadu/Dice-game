#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(NULL));
int x = rand() % 6 + 1;
int y = rand() % 6 + 1;

if(x == 6 && y == 5)
        printf("Dau cu zaru 6 5 n-am nevoie de servici\n");
else if(x == 6 && y == 6)
        printf("Dau cu zaru 6 6 ca mine nu se mai naste\n");
else
        printf("Dau cu zaru %d %d\n", x, y);

return 0;
}
