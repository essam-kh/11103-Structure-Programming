#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float arithmetic, algebra, geometry, analysis;
    float total, min_grade;

    cout << "Enter Arithmetic grade: ";
    cin >> arithmetic;
    cout << "Enter Algebra grade: ";
    cin >> algebra;
    cout << "Enter Geometry grade: ";
    cin >> geometry;
    cout << "Enter Data Analysis grade: ";
    cin >> analysis;

    total = arithmetic + algebra + geometry + analysis;
    cout << "Total Grade: " << fixed << setprecision(2) << total << "\n";

    min_grade = arithmetic;
    
    if (algebra < min_grade) 
        min_grade = algebra;
    if (geometry < min_grade) 
        min_grade = geometry;
    if (analysis < min_grade) 
        min_grade = analysis;

    cout << "Lowest grade is: " << fixed << setprecision(2) << min_grade << " in ";

    if (min_grade == arithmetic) 
        cout<<"Arithmetic\n";
    else if (min_grade == algebra)
        cout<<"Algebra\n";
    else if (min_grade == geometry) 
        cout<<"Geometry\n";
    else 
        cout<<"Data Analysis\n";

    return 0;
}
