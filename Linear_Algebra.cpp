#include <iostream>

using namespace std;

// Function to calculate determinant of 2x2 matrix
double determinant(double a, double b, double c, double d) {
    return (a * d - b * c);
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    cout << "This program solves a system of two linear equations." << endl;
    cout << "The equations are of the form: a1*x + b1*y = c1 and a2*x + b2*y = c2." << endl;
    cout << "Enter coefficients a1, b1, c1 for first equation: ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients a2, b2, c2 for second equation: ";
    cin >> a2 >> b2 >> c2;

    double D = determinant(a1, b1, a2, b2);
    double Dx = determinant(c1, b1, c2, b2);
    double Dy = determinant(a1, c1, a2, c2);

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Solution: x = " << x << ", y = " << y << endl;
    } else {
        cout << "No unique solution exists." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

// Function to calculate determinant of 2x2 matrix
double determinant(double a, double b, double c, double d) {
    return (a * d - b * c);
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    cout << "This program solves a system of two linear equations." << endl;
    cout << "The equations are of the form: a1*x + b1*y = c1 and a2*x + b2*y = c2." << endl;
    cout << "Enter coefficients a1, b1, c1 for first equation: ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients a2, b2, c2 for second equation: ";
    cin >> a2 >> b2 >> c2;

    double D = determinant(a1, b1, a2, b2);
    double Dx = determinant(c1, b1, c2, b2);
    double Dy = determinant(a1, c1, a2, c2);

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Solution: x = " << x << ", y = " << y << endl;
    } else {
        cout << "No unique solution exists." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

// Function to calculate determinant of 2x2 matrix
double determinant(double a, double b, double c, double d) {
    return (a * d - b * c);
}

int main() {
    double a1, b1, c1, a2, b2, c2;
    cout << "This program solves a system of two linear equations." << endl;
    cout << "The equations are of the form: a1*x + b1*y = c1 and a2*x + b2*y = c2." << endl;
    cout << "Enter coefficients a1, b1, c1 for first equation: ";
    cin >> a1 >> b1 >> c1;
    cout << "Enter coefficients a2, b2, c2 for second equation: ";
    cin >> a2 >> b2 >> c2;

    double D = determinant(a1, b1, a2, b2);
    double Dx = determinant(c1, b1, c2, b2);
    double Dy = determinant(a1, c1, a2, c2);

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;
        cout << "Solution: x = " << x << ", y = " << y << endl;
    } else {
        cout << "No unique solution exists." << endl;
    }

    return 0;
}
