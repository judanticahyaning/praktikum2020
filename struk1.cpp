#include <iostream>
#include <string>

 using namespace std ;
int main()
{
	int n, m;
	struct matakuliah{
			char matkul [30];
			float nilai;
		};
	struct daftar {
	    char nama[30];
	    char nim [12];
		float ipk;
		matakuliah mk[100];
		};
		
		struct daftar df[100];
				
		cout<<"Banyak Data : ";cin>>n;
		for (int i=1; i<=n ;i++)
		{
		cout<< "Nama : ";cin.ignore();cin.getline(df[n].nama, 30);
		cout<< "NIM : ";cin>>df[n].nim;
		//cout<< "ipk : ";cin>>df[n].ipk;
		cout<<"Banyak Matkul : ";cin>>m;
		for (int j=1 ; j<=m ; j++)
		{
			cout<<"mata Kuliah : ";cin.ignore();cin.getline(df[n].mk[m].matkul, 30);
			cout<<"Nilai       : ";cin>>df[n].mk[m].nilai; 
			jumlah=jumlah+df[i].mk[j]
		}
		cout<<endl;
	}
	for (int i=1; i<=n; i++){
		cout<< "Nama : "<<df[n].nama<<endl;
		cout<< "NIM : " <<df[n].nim<<endl;
		cout<<"mata Kuliah : "<<df[n].mk[m].matkul<<endl;
		cout<<"Nilai       : "<<df[n].mk[m].nilai<<endl;
		cout<<endl;
	}
	}
