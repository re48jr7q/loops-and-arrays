#include <iostream>
#include <iterator> //std::size()

int main()
{
    constexpr int scores[]{ 85, 72, 81, 62, 52 };
    constexpr int numStudents{ static_cast<int>(std::size(scores)) };

    int totalScore{ 0 };

    
    for (int student{0}; student < numStudents; ++student)
    totalScore += scores[student];

    auto averageScore{ static_cast<double>(totalScore) / numStudents };

    std::cout << "The average score is: " << averageScore << '\n';

    return 0;
}

