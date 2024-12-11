#ifndef DOSEN_H_INCLUDED
#define DOSEN_H_INCLUDED
#include <iostream>
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(P) P.first
#define last(P) P.last

using namespace std;

typedef struct dosen *adr_dosen;
struct infotypeDos{
    string nama_dosen;
    string kode_dosen;
    string asal_fakultas;
};
struct dosen{
    infotypeDos info;
    adr_dosen next;
    adr_dosen prev;
};
struct List_dosen{
    adr_dosen first;
    adr_dosen last;

};
void createListDosen(List_dosen &Dos);
adr_dosen createElmDosen(infotypeDos x);
bool IsEmptyDosen(List_dosen Dos);
void insert_lastDosen(List_dosen &Dos,adr_dosen p);
void deleted_first(List_dosen &Dos,adr_dosen &p);
void deleted_last(List_dosen &Dos,adr_dosen &p);
void deleted_after(List_dosen &Dos,adr_dosen &p,adr_dosen prec);
#endif // NEW_H_INCLUDED



