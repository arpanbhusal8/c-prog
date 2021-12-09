#include <stdio.h>
typedef struct vect
{
    int x, y;
} ab;
struct vect sumres(ab v)
{
    ab result;
    result.x = v[0].x + v[1].x;
    result.y = v[0].y + v[1].y;
    return result;
}

int main()
{
    ab v[2], sum;
    for (int i = 0; i < 2; i++)
    {
        printf("enter the x and y cordinate of the vector\n");
        scanf("%d %d", &v[i].x, &v[i].y);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("[% d  %d\n]", v[i].x, v[i].y);
        printf("-------------------------------\n");
    }
    sum = sumres(&v);
    return 0;
}
// this program is at fault will fix this later too much time consuming and brain power consumption//
