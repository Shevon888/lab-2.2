#include <stdio.h>

typedef enum {
    OLEKSANDR,
    DMYTRO,
    OLENA,
    MAKSYM,
    IRYNA,
    TARAS,
    KATERYNA
} StudentName;

typedef struct {
    StudentName name;
    double avg_score;
    int sport; 
} Student;

int main(void) {
    const int N = 7;

    StudentName names[7] = {OLEKSANDR, DMYTRO, OLENA, MAKSYM, IRYNA, TARAS, KATERYNA};
    double scores[7] = {4.8, 3.9, 5.0, 4.5, 4.2, 4.9, 3.7};
    int sports[7] = {1, 1, 0, 1, 0, 1, 0};

    Student students[7];
    
    for (int i = 0; i < N; i++) {
        students[i].name = names[i];
        students[i].avg_score = scores[i];
        students[i].sport = sports[i];
    }

    int matched = 0;
    for (int i = 0; i < N; i++) {
        if (students[i].avg_score >= 4.5 && students[i].sport != 0) {
            matched++;
        }
    }

    double percent = ((double)matched / N) * 100.0;

    printf("Відмінників, що займаються спортом: %d з %d\n", matched, N);
    printf("Процент таких студентів: %.2f%%\n", percent);

    return 0;
}
