// NIM - Name
// NIM - Name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur data untuk merepresentasikan mahasiswa
typedef struct {
    char id[20];
    char name[50];
    int year;
    char gender[10];
    int assigned_dormitory; // 0 jika belum di-assign ke asrama
} Student;

// Struktur data untuk merepresentasikan asrama
typedef struct {
    char name[50];
    int capacity;
    char gender[10];
    int occupancy; // Jumlah mahasiswa yang tinggal di asrama ini
} Dormitory;

// Fungsi untuk memuat data mahasiswa ke dalam simulator
void load_students(Student *students) {
    strcpy(students[0].id, "12S21007");
    strcpy(students[0].name, "Dame Sitinjak");
    students[0].year = 2021;
    strcpy(students[0].gender, "female");
    students[0].assigned_dormitory = 0; // Belum di-assign ke asrama

    strcpy(students[1].id, "12S21008");
    strcpy(students[1].name, "Tuani Manurung");
    students[1].year = 2021;
    strcpy(students[1].gender, "male");
    students[1].assigned_dormitory = 0;

    strcpy(students[2].id, "12S21009");
    strcpy(students[2].name, "Mikhael Pakpahan");
    students[2].year = 2021;
    strcpy(students[2].gender, "male");
    students[2].assigned_dormitory = 0;

    strcpy(students[3].id, "12S21010");
    strcpy(students[3].name, "Bobby Siagian");
    students[3].year = 2021;
    strcpy(students[3].gender, "male");
    students[3].assigned_dormitory = 0;

    strcpy(students[4].id, "12S21011");
    strcpy(students[4].name, "Aldi Simamora");
    students[4].year = 2021;
    strcpy(students[4].gender, "male");
    students[4].assigned_dormitory = 0;
}

// Fungsi untuk memuat data asrama ke dalam simulator
void load_dormitories(Dormitory *dormitories) {
    strcpy(dormitories[0].name, "Pniel");
    dormitories[0].capacity = 20;
    strcpy(dormitories[0].gender, "female");
    dormitories[0].occupancy = 0;

    strcpy(dormitories[1].name, "Kapernaum");
    dormitories[1].capacity = 20;
    strcpy(dormitories[1].gender, "male");
    dormitories[1].occupancy = 0;
}

// Fungsi untuk mencetak semua mahasiswa
void print_all_students(Student *students, int num_students) {
    for (int i = 0; i < num_students; ++i) {
        printf("%s|%s|%d|%s|%s\n", students[i].id, students[i].name, students[i].year, students[i].gender, students[i].assigned_dormitory == 0 ? "unassigned" : "assigned");
    }
}

// Fungsi untuk mencetak semua asrama
void print_all_dormitories(Dormitory *dormitories, int num_dormitories) {
    for (int i = 0; i < num_dormitories; ++i) {
        printf("%s|%d|%s|%d\n", dormitories[i].name, dormitories[i].capacity, dormitories[i].gender, dormitories[i].occupancy);
    }
}

int main() {
    // Inisialisasi data mahasiswa dan asrama
    Student students[5];
    Dormitory dormitories[2];

    // Memuat data awal ke dalam simulator
    load_students(students);
    load_dormitories(dormitories);

    // Mencetak semua mahasiswa
    print_all_students(students, 5);

    // Mencetak semua asrama
    print_all_dormitories(dormitories, 2);

    return 0;
}
