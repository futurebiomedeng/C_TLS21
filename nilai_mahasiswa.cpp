/******************************************************************************

                    Program untuk Menghitung Nilai Mahasiswa

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama;
    float b_t, avg_t, nilai_t, bobot_t, b_k, avg_k, nilai_k, bobot_k, ujian, bobot_u, total_nilai, sum_t, sum_k;
    
    cout<<"Masukkan nama mahasiswa: ";
    cin>> nama;
    
    cout<<"\n";
    
    // nilai tugas (dalam skala 0-100)
    cout<<"1. Nilai Tugas\n";
    cout<<"Banyak tugas yang diberikan: ";
    cin>> b_t;
    
    for (int i = 1; i <= b_t; i++){
        cout<< "Nilai tugas ke " << i << " adalah: ";
        cin>> nilai_t;
        
        sum_t += nilai_t;
    }
    
    bobot_t=0.3*sum_t/b_t;
    
    cout<<"\n";
    
    // nilai kuis (dalam skala 0-100)
    cout<<"2. Nilai Kuis \n";
    cout<<"Banyak kuis yang diberikan: ";
    cin>> b_k;
    
    for (int j = 1; j <= b_k; j++){
        cout<< "Nilai kuis ke " << j << " adalah: ";
        cin>>nilai_k;
        
        sum_k+=nilai_k;
    }
    
    bobot_k = 0.2* sum_k / b_k;
    
    cout<<"\n";
    
    // nilai ujian (dalam skala 0-100)
    cout<<"3. Nilai Ujian \n";
    cout<<"Masukkan nilai ujian: ";
    cin>> ujian;
    
    bobot_u = 0.5 * ujian;

    cout<<"\n";

    cout<< "Nama Mahasiswa\tNilai Tugas\tNilai Kuis\tNilai Ujian \n";
    cout<< "___________________________________________________________\n";
    cout<< nama         <<   "\t"   << bobot_t <<   "\t"   << bobot_k <<   "\t"   << bobot_u << "\n";
    
    cout<<"\n";
    
    // grading
    total_nilai = bobot_u + bobot_k + bobot_t;
    cout<< "Total Nilai = " << total_nilai << "\n";
    
    if (total_nilai >= 85) {
        cout<<"Skala nilai: A";
    }
    
    if (total_nilai >= 50, total_nilai < 85) {
        cout<<"Skala nilai: B";
    }
    
    if (total_nilai < 50) {
        cout<<"Skala nilai: C";
    }
    
    return 0;
}
