#include <iostream>
#include <cstdlib>
#include <cstring>

typedef struct {
    char id[11];
    char name[11];
    int score;
} student;

int main() {
    int n, l, h, count = 0;
    std::cin >> n;
    student* list = (student*)malloc(sizeof(student)*n);
    for (int i = 0; i < n; ++i) {
        scanf("%s %s %d", (char*)&list[i].name, (char*)&list[i].id, &list[i].score);
    }
    std::cin >> l >> h;
    for (int i = 0; i < n; ++i) {
        if (list[i].score >= l && list[i].score <= h) {
            count++;
        } else {
            list[i].score = 0;
        }
    }

    if (!count) {
        std::cout << "NONE" << std::endl;
        free(list);
        return 0;
    }

    for (int i = 0; i < count; ++i) {
        int max_index = i;
        for (int j = i; j < n; ++j) {
            if (list[j].score > list[max_index].score) {
                max_index = j;
            }
        }

        student temp_s;
        strcpy(temp_s.id, list[max_index].id);
        strcpy(temp_s.name, list[max_index].name);
        temp_s.score = list[max_index].score;

        list[max_index].score = list[i].score;
        strcpy(list[max_index].id, list[i].id);
        strcpy(list[max_index].name, list[i].name);

        list[i].score = temp_s.score;
        strcpy(list[i].id, temp_s.id);
        strcpy(list[i].name, temp_s.name);
    }

    for (int i = 0; i < count; ++i) {
        std::cout << list[i].name << " " << list[i].id << std::endl;
    }

    free(list);
    list = NULL;
    return 0;
}
