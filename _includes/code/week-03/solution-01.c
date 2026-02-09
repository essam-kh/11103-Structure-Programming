#include <stdio.h>

int main() {
    float arithmetic, algebra, geometry, analysis;
    float total, min_grade;

    printf("Enter Arithmetic grade: ");
    scanf("%f", &arithmetic);
    printf("Enter Algebra grade: ");
    scanf("%f", &algebra);
    printf("Enter Geometry grade: ");
    scanf("%f", &geometry);
    printf("Enter Data Analysis grade: ");
    scanf("%f", &analysis);

    total = arithmetic + algebra + geometry + analysis;
    printf("Total Grade: %.2f\n", total);

    min_grade = arithmetic;
    
    if (algebra < min_grade) min_grade = algebra;
    if (geometry < min_grade) min_grade = geometry;
    if (analysis < min_grade) min_grade = analysis;

    printf("Lowest grade is: %.2f in ", min_grade);

    if (min_grade == arithmetic) printf("Arithmetic\n");
    else if (min_grade == algebra) printf("Algebra\n");
    else if (min_grade == geometry) printf("Geometry\n");
    else printf("Data Analysis\n");

    return 0;
}
