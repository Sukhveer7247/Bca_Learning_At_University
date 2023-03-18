//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.
#include <stdio.h>

#define MAX_STUDENTS 50

int main() {
    int scores[MAX_STUDENTS], max_score = 0, passed = 0, failed = 0;
    int n,i;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the score of student %d: ", i+1);
        scanf("%d", &scores[i]);

        if (scores[i] == -1) {
            scores[i] = 0;
        } else if (scores[i] > max_score) {
            max_score = scores[i];
        }

        if (scores[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
    }

    printf("The maximum score is: %d\n", max_score);
    printf("%d students passed the exam.\n", passed);
    printf("%d students failed the exam.\n", failed);

    return 0;
}