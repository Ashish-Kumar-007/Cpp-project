#include<bits/stdc++.h>
using namespace std;

void gen_password(int n){
	string numbers = "0123456789";
	string CAP_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string small_letters = "abcdefghijklmnopqrstuvwxyz";
	string sp_char = "~!@#$%^&*";
	srand(time(0));
	int num_count = 0, cap_count = 0, small_count = 0, sp_letter_count = 0;
	string password = "";

	for(int i=0; i<n; i++){
		if(cap_count<n && password.length() != n){
			int ran_key = rand()%27;
			password = password + CAP_letters[ran_key];
			cap_count++;
		}
		if(num_count<n && password.length() != n){
			int ran_key =  rand()%10;
			password = password + numbers[ran_key];
			num_count++;
		}
		if(small_count<n && password.length() != n){
			int ran_key =  rand()%27;
			password = password + small_letters[ran_key];
			small_count++;
		}
		if(sp_letter_count<n && password.length() != n){
			int ran_key = rand()%10; 
			password = password + sp_char[ran_key];
			sp_letter_count++;
		}
	}
	cout<<"Password : "<<password<<endl;
}

int main()
{
	int password_len;
	cout<< "Enter the length of the PASSWORD : ";
	cin>> password_len;
	cout<<"---------------------------------"<<endl;
	gen_password(password_len);
	cout<<"---------------------------------"<<endl;
	return 0;
}