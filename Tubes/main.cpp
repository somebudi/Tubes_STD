#include "Dosen.h"
#include "Mahasiswa.h"
#include "Bimbingan.h"
#include <iostream>

int main(){
    List_dosen LD;
    List_mahasiswa LM;
    List_bimbingan LB;
    adr_dosen PDos;
    adr_mahasiswa PMhs;
    adr_bimbingan Pbimbing;
    infotypeDos XDos;
    infotypeMhs XMhs;
    infotypeBimbing XBimbing;

    createListDosen(LD);
    createListMahasiswa(LM);
    createListBimbingan(LB);
    cin>>XDos.kode_dosen>>XDos.nama_dosen>>XDos.asal_fakultas;
    PDos = createElmDosen(XDos);
    // cin>>XMhs.fakultas>>XMhs.nama_mahasiswa>>XMhs.NIM_mahasiswa;
    // PMhs = createElmMahasiswa(XMhs);
    // cin>>XBimbing.tanggal;
    // XBimbing.mahasiswa = PMhs;
    // XBimbing.pembimbing = PDos;
    // Pbimbing = createElmBimBingan(XBimbing);
    cout<< info(PDos).kode_dosen<<" "<<info(PDos).nama_dosen<<" "<<info(PDos).asal_fakultas<<endl;
    return 0;
}
