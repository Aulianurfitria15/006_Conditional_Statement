

#include <iostream>
using namespace std;

int main() {
	int nilmtk, nilBahasa;
	string status;
	float rerata;

	cout << "Nilai Matematika : " << endl;
	cin >> nilMtk;
	cout << "Nilai Bahasa : " << endl;
	cin >> nilBahasa;

	if (nilMtk > 70 || rerata > 60) {
		status = "Lulus";
	}
	else {
		status = "Tidak Lulus";
	}

	cout << "Nilai Matematika : " << nilMtk << endl;
	cout << "Nilai Bahasa : " << nilBahasa << endl;
	cout << "status kelulusan : " << status;

}

