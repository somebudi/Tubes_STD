#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
#include <iostream>
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(P) P.first
#define last(P) P.last

using namespace std;

typedef struct mahasiswa *adr_mahasiswa;
struct infotypeMhs{
    string nama_mahasiswa;
    int NIM_mahasiswa;
    string fakultas;
};
struct mahasiswa{
    infotypeMhs info;
    adr_mahasiswa next;
};
struct List_mahasiswa{
    adr_mahasiswa first;
};

void createListMahasiswa(List_mahasiswa &mhs);
adr_mahasiswa createElmMahasiswa(infotypeMhs x);
bool IsEmptyMahasiswa(List_mahasiswa mhs);
void insert_lastMahasiswa(List_mahasiswa &mhs,adr_mahasiswa p);
void deleted_first(List_mahasiswa &mhs,adr_mahasiswa &p);
void deleted_last(List_mahasiswa &mhs,adr_mahasiswa &p);
void deleted_after(List_mahasiswa &mhs,adr_mahasiswa &p,adr_mahasiswa prec);
adr_mahasiswa findMahasiswa(List_mahasiswa mhs,infotypeMhs x);
void printInfoMahasiswa(List_mahasiswa mhs);

#endif // NEW_H_INCLUDED



