/*Read two input each representing the distances between two points in
   the  Euclidean space, store these in structure variables and add the
   two   distance values.*/
#include <stdio.h>
struct Point
{
    int dist1;
    int dist2;
} p1, p2, p3;
int main()
{
    printf("Ayisha Jumaila_Roll no:22\n\n");
    printf("Enter the first point(point-1,point-2)  : ");
    scanf("%d,%d", &p1.dist1, &p1.dist2);
    printf("Enter the second point(point-1,point-2) : ");
    scanf("%d,%d", &p2.dist1, &p2.dist2);
    p3.dist1 = p1.dist1 + p2.dist1;
    p3.dist2 = p1.dist2 + p2.dist2;
    printf("Point after addition of previous points : ");
    printf("(%d,%d)\n", p3.dist1, p3.dist2);
}