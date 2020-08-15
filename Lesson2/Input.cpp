#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

int main(){
	string in; 
	while(true) {
		cin >> in;
		try {
			long long ll = stoll(in);
			if(ll <= 0 ) throw invalid_argument("");
			cout << ll <<endl;
			exit(0);
		} catch(const invalid_argument& e) {
			cout << "So khong hop le\n";
		} catch(const out_of_range& e){
			cout << "So nam ngoai khoang" <<endl;
		}
		
	}
	
}
