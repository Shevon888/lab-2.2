#include <iostream>
using namespace std;

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

    // Допоміжні масиви для ініціалізації (п. 4 завдання)
    Name names[N] = {Oleksandr, Dmytro, Olena, Maksym, Iryna, Taras, Kateryna};
    float scores[N] = {4.8f, 3.9f, 5.0f, 4.5f, 4.2f, 4.9f, 3.7f};
    bool sports[N] = {true, true, false, true, false, true, false};

    Student group[N];

    // Ініціалізація масиву структур (п. 5 завдання)
    for (int i = 0; i < N; i++) {
        group[i].name = names[i];
        group[i].avgScore = scores[i];
        group[i].sport = sports[i];
    }

    // Підрахунок відмінників-спортсменів
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (group[i].avgScore >= 4.5f && group[i].sport) {
            count++;
        }
    }

    float percentage = (static_cast<float>(count) / N) * 100.0f;
    cout << "Кількість студентів-відмінників, що займаються спортом: " << count << endl;
    cout << "Їх процент від загальної кількості: " << percentage << "%" << endl;

    return 0;
}
