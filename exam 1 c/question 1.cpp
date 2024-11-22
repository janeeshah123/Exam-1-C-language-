#include<stdio.h>
  int main(){
    float score;
    char grade;
    
    printf("Enter your score : ");
    scanf("%f", &score);
    
    grade = (score >= 90)   ? 'A':
            (score >= 80)   ? 'B':
            (score >= 70)   ?  'C':
            (score >= 60)   ?'D': 
            (score >=50)    ?'F': 

    
    printf("Your grade is: %c\n", grade);
    
    switch (grade) {
        case 'A':
            printf("Excellent work! Keep it up.\n");
            break;
        case 'B':
            printf("Good job! You're doing well.\n");
            break;
        case 'C':
            printf("You passed, but there's room for improvement.\n");
            break;
        case 'D':
            printf("You passed, but need to work harder.\n");
            break;
        case 'F':
            printf("You failed. Try harder next time.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }
    if (grade=='A'|grade =='B'| grade == 'C'){
        printf("You are eligible for the next level.\n");
    }
	 else {
        printf("You are not eligible for the next level.\n");
    }
    return 0;
}