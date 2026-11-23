#include <cstdio>

enum Name {
    Oleksandr,
    Dmytro,
    Olena,
    Maksym,
    Iryna,
    Taras,
    Kateryna
};

struct Student {
    Name name;
    float avgScore;
    bool sport;
};

int main() {
    const int N = 7;

    Name names[N] = {Oleksandr, Dmytro, Olena, Maksym, Iryna, Taras, Kateryna};
    float scores[N] = {4.8f, 3.9f, 5.0f, 4.5f, 4.2f, 4.9f, 3.7f};
    bool sports[N] = {true, true, false, true, false, true, false};

    Student group[N];

    for (int i = 0; i < N; i++) {
        group[i].name = names[i];
        group[i].avgScore = scores[i];
        group[i].sport = sports[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (group[i].avgScore >= 4.5f && group[i].sport) {
            count++;
        }
    }

    float percentage = (static_cast<float>(count) / N) * 100.0f;
    printf("Кількість студентів-відмінників, що займаються спортом: %d\n", count);
    printf("Їх процент від загальної кількості: %.2f%%\n", percentage);

    return 0;
}
