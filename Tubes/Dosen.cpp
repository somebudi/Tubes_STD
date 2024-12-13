#include "Dosen.h"

// Pembuatan List
void createListDosen(List_dosen &Dos) {
    first(Dos) = NULL;
    last(Dos) = NULL;
}

// Pembuatan Elemen List
adr_dosen createElmDosen(infotypeDos x) {
    adr_dosen P = new dosen;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

// Mengecek Apakah List Kosong
bool IsEmptyDosen(List_dosen Dos) {
    return (first(Dos) == NULL);
}

// Menambahkan Elemen di Akhir List
void insert_lastDosen(List_dosen &Dos, adr_dosen p) {
    if (IsEmptyDosen(Dos)) {
        first(Dos) = p;
        last(Dos) = p;
    } else {
        prev(p) = last(Dos);
        next(last(Dos)) = p;
        last(Dos) = p;
    }
}

// Menghapus Elemen Pertama
void deleted_first(List_dosen &Dos, adr_dosen &p) {
    if (!IsEmptyDosen(Dos)) {
        p = first(Dos);
        if (first(Dos) == last(Dos)) {
            first(Dos) = NULL;
            last(Dos) = NULL;
        } else {
            first(Dos) = next(p);
            prev(first(Dos)) = NULL;
        }
        next(p) = NULL; 
    }
}

// Menghapus Elemen Terakhir
void deleted_last(List_dosen &Dos, adr_dosen &p) {
    if (!IsEmptyDosen(Dos)) {
        p = last(Dos);
        if (first(Dos) == last(Dos)) {
            first(Dos) = NULL;
            last(Dos) = NULL;
        } else {
            last(Dos) = prev(p);
            next(last(Dos)) = NULL;
        }
        prev(p) = NULL;
    }
}

// Menghapus Elemen Setelah Elemen Tertentu
void deleted_after(List_dosen &Dos, adr_dosen &p, adr_dosen prec) {
    if (prec != NULL && next(prec) != NULL) {
        p = next(prec);
        if (p == last(Dos)) {
            last(Dos) = prec;
            next(prec) = NULL;
        } else {
            next(prec) = next(p);
            prev(next(p)) = prec;
        }
        next(p) = NULL;
        prev(p) = NULL;
    }
}
