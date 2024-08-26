#include <iostream>

int main() {
    int numSubjects;
    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    int totalCredits = 0;
    double totalWeightedGradePoints = 0.0;

    for (int i = 1; i <= numSubjects; i++) {
        int marksObtained, totalMarks;
        double credit;
        std::cout << "\nEnter the marks obtained for subject " << i << ": ";
        std::cin >> marksObtained;
        std::cout << "Enter the total marks for subject " << i << ": ";
        std::cin >> totalMarks;
        std::cout << "Enter the credit hours for subject " << i << ": ";
        std::cin >> credit;

        double gradePoint = (marksObtained * 10.0) / totalMarks;
        double weightedGradePoints = gradePoint * credit;

        totalWeightedGradePoints += weightedGradePoints;
        totalCredits += credit;
    }

    double cgpa = totalWeightedGradePoints / totalCredits;

    std::cout << "\nCGPA: " << cgpa << std::endl;

    return 0;
}
