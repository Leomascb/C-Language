#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score1, score2, score3, average_score;
    printf("Inform your first score: \n");
    scanf("%f", &score1);
    printf("Inform your second score: \n");
    scanf("%f", &score2);
    printf("Inform your third score: \n");
    scanf("%f", &score3);

    average_score = (score1 + score2 + score3)/3;

    if (average_score >= 7){
        printf("Your total score is %f .You are approved \n", &average_score);
    } else if (average_score < 7 && average_score >= 5){
        printf("Your total score is %f . You may take an additional test \n", &average_score);
    }else{
        printf("Your total score is %f . You are not approved \n", &average_score);
    }
    return 0;
}
