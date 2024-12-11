#include "Dosen.h"

// Pembuatan List
void createListDosen(List_dosen &Dos){
    first(Dos) = NULL;
};
// Pembuatan Elemen List
adr_dosen createElmDosen(infotypeDos x){
    adr_dosen P = new dosen;
    info(P) = x;
    return P;
};
