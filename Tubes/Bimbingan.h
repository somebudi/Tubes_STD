#ifndef BIMBINGAN_H_INCLUDED
#define BIMBINGAN_H_INCLUDED
#include <iostream>
#include "Dosen.h"
#include "Mahasiswa.h"
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(P) P.first
#define last(P) P.last

typedef struct bimbingan *adr_bimbingan;
struct infotypeBimbing{
    string tanggal;
    adr_dosen pembimbing;
    adr_mahasiswa mahasiswa;
};
struct bimbingan{
    infotypeBimbing info;
    adr_bimbingan next;
};
struct List_bimbingan{
    adr_bimbingan first;
};

void createListBimbingan(List_bimbingan &Bimbing);
adr_bimbingan createElmBimBingan(infotypeBimbing x);
bool IsEmptyDosen(List_bimbingan Dos);
void insert_lastDosen(List_bimbingan &Bimbing,adr_bimbingan p);
void deleted_first(List_bimbingan &Bimbing,adr_bimbingan &p);
void deleted_last(List_bimbingan &Bimbing,adr_bimbingan &p);
void deleted_after(List_bimbingan &Bimbing,adr_bimbingan &p,adr_bimbingan prec);

#endif // BIMBINGAN_H_INCLUDED



