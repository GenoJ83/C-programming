#include <stdio.h>

/**
The physical opening of the Universities
*/
int main() {
    int studentsAcademicYear = 2021;
    //Welcome message from the Vice Chancellor.
    printf("Welcome to the Center of Excellence,\nUganda Christian University.\n");
    printf("We are delighted to have you coming for physical classes.\n");
    if (studentsAcademicYear >= 2021) {
        printf("Year 1s, please feel at home.\n");
    } else {
        printf("East or west home is best.\n");
    }
    for (int x = 0; x < 3; x++) {
        printf("Welcome!\t");
    }
    return 0;

    //pseudo code
    /*Start
Declare integer studentsAcademicYear
Set studentsAcademicYear to 2021

Print "Welcome to the Center of Excellence,\nUganda Christian University."
Print "We are delighted to have you coming for physical classes."

If studentsAcademicYear is greater than or equal to 2021 Then
    Print "Year 1s, please feel at home."
Else
    Print "East or west home is best."
End If

Loop x from 0 to 2
    Print "Welcome!\t"
End Loop

End*/

}
