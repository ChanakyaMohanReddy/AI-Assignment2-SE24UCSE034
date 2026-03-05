//DFS Implementation (Water Jug Problem)

#include <stdio.h>

int visited[5][4];
int found = 0;

void dfs(int x, int y)
{
    if (visited[x][y] || found)
        return;

    visited[x][y] = 1;

    printf("(%d , %d)\n", x, y);

    if (x == 2 || y == 2)
    {
        printf("Target reached\n");
        found = 1;
        return;
    }

    dfs(4, y); 

    dfs(x, 3); 

    dfs(0, y); 

    dfs(x, 0); 

    int pour = (x < (3 - y)) ? x : (3 - y);
    dfs(x - pour, y + pour);

    pour = (y < (4 - x)) ? y : (4 - x);
    dfs(x + pour, y - pour);
}

int main()
{
    dfs(0, 0);
    return 0;
}

/* OUTPUT:
(0 , 0)
(4 , 0)
(4 , 3)
(0 , 3)
(3 , 0)
(3 , 3)
(4 , 2)
Target reached
*/
