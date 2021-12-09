#include <stdio.h>
typedef struct vect
{
    int x1, x2, y1, y2;
} v[2];
int main()
{
    struct vect v[2];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the x and y cordinate of the vector\n");
        scanf("%d %d %d %d", &v[i].x1, &v[i].x2, &v[i].y1, &v[i].y2);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("% d  %d\n", v[i].x1, v[i].y1);
        printf("% d  %d\n", v[i].x2, v[i].y2);
        printf("-------------------------------\n");
    }

    return 0;
}