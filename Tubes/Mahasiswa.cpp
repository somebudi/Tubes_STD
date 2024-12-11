#include "Mahasiswa.h"

void createListMahasiswa(List_mahasiswa &mhs){
    first(mhs) = NULL;
};
adr_mahasiswa createElmMahasiswa(infotypeMhs x){
    adr_mahasiswa P = new mahasiswa;
    info(P) = x;
    return P;
};

bool IsEmptyMahasiswa(List_mahasiswa mhs){
    return (first(mhs)==NULL);
};
void insert_lastMahasiswa(List_mahasiswa &mhs,adr_mahasiswa p){
    adr_mahasiswa itr;
    if(IsEmptyMahasiswa(mhs)){
        first(mhs) = p;
    }else{
        itr = first(mhs);
        while(next(itr)!=NULL){
            itr=next(itr);
        }
        next(itr) = p;
        next(p)= NULL;
    }
};
void deleted_first(List_mahasiswa &mhs,adr_mahasiswa &p){
    if(IsEmptyMahasiswa(mhs)){
        cout << "Data Mahasiswa kosong";
    }else if(next(first(mhs)) == NULL){
        p=first(mhs);
        first(mhs) = NULL;
    }else{
        p=first(mhs);
        first(mhs) = next(p);
        next(p) = NULL;
    }
};
void deleted_last(List_mahasiswa &mhs,adr_mahasiswa &p){
    adr_mahasiswa itr;
    if(IsEmptyMahasiswa(mhs)){
        cout << "Data mahasiswa kosong";
    }else if(next(first(mhs)) == NULL){
        p = first(mhs);
        first(mhs)=NULL;
    }else{
        itr = first(mhs);
        while (next(next(itr))!=NULL){
            itr=next(itr);
        }
        p=next(itr);
        next(itr)=NULL;
    }
};
void deleted_after(List_mahasiswa &mhs,adr_mahasiswa &p,adr_mahasiswa prec){
    if(IsEmptyMahasiswa(mhs)){
        cout << "Data mahasiswa kosong";
    }else if(next(prec)==NULL){
        cout << "Tidak ada data setelah "<< prec << endl;
    }else{
        if(next(next(prec))==NULL){
            deleted_last(mhs,p);
        }else{
            p = next(prec);
            next(prec)=next(p);
            next(p)=NULL;
        }
    }
};
adr_mahasiswa findMahasiswa(List_mahasiswa mhs, infotypeMhs x){
    adr_mahasiswa p;
    p = first(mhs);
    while (p != NULL){
        if(info(p).NIM_mahasiswa == x.NIM_mahasiswa){
            return p;
        }
        p = next(p);
    }
    return NULL;
};
void printInfoMahasiswa(List_mahasiswa mhs){
    adr_mahasiswa p = first(mhs);
    if(IsEmptyMahasiswa(mhs)){
        cout << "Data mahasiswa kosong";
    }else{
        while(p!=NULL){
            cout << "Nama Mahasiswa: " <<info(p).nama_mahasiswa << endl;
            cout << "NIM Mahasiswa: " <<info(p).NIM_mahasiswa << endl;
            cout << "Fakultas : " <<info(p).fakultas << endl;
            p=next(p);
        }
    }
};

