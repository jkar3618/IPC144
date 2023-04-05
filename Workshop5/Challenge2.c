//
//  Week #5
//  Topics:   Iteration
//  Exercise: Challenge 2 (Nesting Logic)
//

// VISUAL STUDIO ONLY: suppress security warning about scanf (and other) input functions
#define _CRT_SECURE_NO_WARNINGS

// SYSTEM Library Includes
#include <stdio.h>

int main(void)
{
    // Variables for Student data:
    int studentID;
    int birthYear;
    int birthMonth;
    float gradePercent;

    // Variables for logic and data input
    const int maxGrades = 3;
    float gradeInput;
    int studentCount = 0, moreStudents, gradeCount;
    int i;  // Note: 'i' is typically used in iterating (for loop counter)
    int validGrade; // control variable for grade input validation routine

    // Display Title
    printf("Student Information System\n"
        "--------------------------\n\n");

    // Starter Pseudo Code....

    // START MAIN LOOP (BEGINS MULTIPLE STUDENT DATA INPUT)
    do 
    {
        // Show current student record head/title
        printf("Enter student-%d's information....\n", studentCount + 1);
        // Prompt for student ID input

        // Prompt for student Birth YEAR input

        // Prompt for student Birth MONTH (VALIDATE: between 1-12) ; LOOP!

        // Display GRADE input rules

        // Prompt for GRADE inputs (LOOP)

            // Get GRADE input (VALIDATE: between 0.0 - 100.0) ; LOOP!
            // Note: exit loop if negative grade is entered OR max:3 have been entered

        // Calculate summary (average)

        // Display the summary: average grade, and letter equivalent

        // 	A+	90.0 - 100.0
        // 	A	80.0 - 89.9
        // 	B+	75.0 - 79.9
        // 	B	70.0 - 74.9
        // 	C+	65.0 - 69.9
        // 	C	60.0 - 64.9
        // 	D+	55.0 - 59.9
        // 	D	50.0 - 54.9
        // 	F	<50.0

        // NOTE: increase student record counter!

        // Prompt to enter another student record (Validate 1 or 0: LOOP!)
        // NOTE: Repeat Student data input if more requested otherwise, stop
    } while (moreStudents);

    // After input loop; DISPLAY # of student records entered.

    return 0;
}