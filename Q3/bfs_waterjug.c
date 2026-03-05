//BFS Implementation (Water Jug Problem)

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int x, y;
} State;

State queue[MAX];
int front = 0, rear = 0;

void enqueue(State s){
    queue[rear++] = s;
}

State dequeue(){
    return queue[front++];
}

int isEmpty(){
    return front == rear;
}

int visited[10][10];

void BFS(int jug1, int jug2, int target){

    State start = {0,0};
    enqueue(start);
    visited[0][0] = 1;

    while(!isEmpty()){
        State cur = dequeue();

        printf("(%d , %d)\n", cur.x, cur.y);

        if(cur.x == target || cur.y == target){
            printf("Target reached\n");
            return;
        }

        State nextStates[6] = {
            {jug1, cur.y},
            {cur.x, jug2},
            {0, cur.y},
            {cur.x, 0},
            {cur.x - (jug2-cur.y < cur.x ? jug2-cur.y : cur.x),
             cur.y + (jug2-cur.y < cur.x ? jug2-cur.y : cur.x)},
            {cur.x + (jug1-cur.x < cur.y ? jug1-cur.x : cur.y),
             cur.y - (jug1-cur.x < cur.y ? jug1-cur.x : cur.y)}
        };

        for(int i=0;i<6;i++){
            int nx = nextStates[i].x;
            int ny = nextStates[i].y;

            if(nx>=0 && ny>=0 && nx<=jug1 && ny<=jug2 && !visited[nx][ny]){
                visited[nx][ny] = 1;
                enqueue(nextStates[i]);
            }
        }
    }
}

int main(){

    int jug1 = 4, jug2 = 3, target = 2;

    printf("BFS Solution:\n");
    BFS(jug1,jug2,target);

    return 0;
}


/* OUTPUT
BFS Solution:
(0 , 0)
(4 , 0)
(0 , 3)
(4 , 3)
(1 , 3)
(3 , 0)
(1 , 0)
(3 , 3)
(0 , 1)
(4 , 2)
Target reached */
