// Kesosa Guobadia 5302732
#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

// main function to call all other functions
int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    // Running autograder
    return 0;
}

// Function to calculate distance
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate the perimeter
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2); // Perimeter of a circle

    // Output
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Difficulty level
    return 2.5;
}

// Function to calculate the area
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow((distance / 2), 2); // Area of a circle

    // Output
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Difficulty level
    return 2.0;
}

// Function to calculate the width
double calculateWidth() {
    double distance = calculateDistance(); // Diameter of a circle

    // Output
    printf("The width of the city encompassed by your request is %.2f\n", distance);

    // Difficulty level
    return 1.0;
}

// Function to calculate the height
double calculateHeight() {
    double distance = calculateDistance(); // Diameter of a circle

    // Output
    printf("The height of the city encompassed by your request is %.2f\n", distance);

    // Difficulty level
    return 1.0;
}
// Function to ask for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);  // Asking for input 
    return value;
}

