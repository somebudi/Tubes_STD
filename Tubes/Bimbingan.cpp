#include "Bimbingan.h"

void createListBimbingan(List_bimbingan &Bimbing){
    first(Bimbing) = NULL;
};
adr_bimbingan createElmDosen(infotypeBimbing x){
    adr_bimbingan P = new bimbingan;
    info(P) = x;
    return P;
};
