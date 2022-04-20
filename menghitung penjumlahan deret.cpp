#include <iostream>
#include <conio.h>
using namespace std;

class hitung {
	public:
		int proses();
		void input();
		
	private:
		int n;
		float rumus, jumlah, total;
};

void hitung::input()
{
	cin >> n;
	cout << endl;
}

int hitung::proses()
{
	jumlah = 0; 
	total = 0;
	rumus = -1;
	for(int j = 1; j <= n; j++){
		rumus = (rumus * (-1));
		total = rumus / j;
		jumlah += total;
		
		if(j == 1)
			cout << " (" << total << ") ";
		if(j > 1)
			cout << " + (" << total << ") ";
	}
	
	cout << endl << endl << "hasil penjumlahan deret = " << jumlah;
	return jumlah; 
}

int main(){
	cout << "PROGRAM SEDERHANA MENGHITUNG JUMLAH DARI RUMUS 1-(1/2) + (1/3) - (1/4) + .....+ (1/n) " << endl << endl;
	cout << "Tentukan nilai n : ";
	hitung deret;
	deret.input();
	deret.proses();
	getch();
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int deret(int n){
//	if (n == 1)
//		return 1;
//	else 
//		return (n + deret(n-1));
//}
//
//int main(){
//	int n; 
//	cout << "Masukan n = ";
//	cin >> n;
//	
//	cout << "deret n=1+2+3+4+5+.......+n";
//	cout << "jumlah deret = " << deret(n);
//}
