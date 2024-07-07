#include <stdio.h>
#include <math.h>

int main() {
    double cx1, cy1, rad1, cx2, cy2, rad2;
    double distance;

    printf("Enter the coordinates and radius of the first circle (x1, y1, r1): ");
    scanf("%lf %lf %lf", &cx1, &cy1, &rad1);

    printf("Enter the coordinates and radius of the second circle (x2, y2, r2): ");
    scanf("%lf %lf %lf", &cx2, &cy2, &rad2);

    distance = sqrt(pow(cx2 - cx1, 2) + pow(cy2 - cy1, 2));

    if (distance == 0 && rad1 == rad2) {
        printf("-1 intersection\n");
    } else if (distance > rad1 + rad2 || distance < fabs(rad1 - rad2)) {
        printf("0 intersection\n");
    } else if (distance == rad1 + rad2 || distance == fabs(rad1 - rad2)) {
        printf("1 intersection\n");
    } else {
        printf("2 intersections\n");
    }

    return 0;
}
