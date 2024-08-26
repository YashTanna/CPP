#include <iostream>

int main() {
    int numSubjects;
    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    int totalCredits = 0;
    double totalWeightedGradePoints = 0.0;

    for (int i = 1; i <= numSubjects; i++) {
        double subjectPoint;
        doublea credit;
        std::cout << "\nEnter the subject point for subject " << i << ": ";
        std::cin >> subjectPoint;
        std::cout << "Enter the credit hours for subject " << i << ": ";
        std::cin >> credit;

        double weightedGradePoints = subjectPoint * credit;

        totalWeightedGradePoints += weightedGradePoints;
        totalCredits += credit;
    }

    double cgpa = totalWeightedGradePoints / totalCredits;

    std::cout << "\nCGPA: " << cgpa << std::endl;

    return 0;
}
