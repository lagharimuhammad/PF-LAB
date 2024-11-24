#include <stdio.h>
#include <math.h>

// Struct to represent a 2D point
typedef struct Point {
    float x, y;
} Point;

// Calculate the distance between two points
float distance(Point p1, Point p2) 
{
    return sqrt( pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}

// Check if a point is inside a rectangle
int check(Point p, Point p3, Point p4) 
{
    return ((p.x >= p3.x) && (p.x <= p4.x)) && ((p.y >= p3.y) && (p.y <= p4.y));
}

int main() {
    Point p1, p2, p3, p4;

    // Input points and rectangle corners
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Enter bottom-left corner of rectangle (x y): ");
    scanf("%f %f", &p3.x, &p3.y);

    printf("Enter top-right corner of rectangle (x y): ");
    scanf("%f %f", &p4.x, &p4.y);

    // Calculate and display distance
    printf("\nDistance between points: %.2f\n", distance(p1, p2));

    // Check and display rectangle containment
    printf("Point 1 is %sinside the rectangle.\n",
           check(p1, p3, p4) ? "" : "not ");
    printf("Point 2 is %sinside the rectangle.\n",
           check(p2, p3, p4) ? "" : "not ");

    return 0;
}
