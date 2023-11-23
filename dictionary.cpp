#include <iostream>
using namespace std;
#include <string>
#include <map>
string stri(string str) {
	map<string, string> dictionary;
	dictionary["hello"] = "Salam means health, security and peace, which is used in Islam to say greetings";
	dictionary["hi"] = "Salam means health, security and peace, which is used in Islam to say greetings";
	dictionary["goodby"] ="Literally translated it is:God protect ";
	dictionary["by"] ="Literally translated it is:God protect ";
	dictionary["how are you?"] ="A verbal way to ask about a person's status";
	getline(cin,str);
	if(dictionary.find(str) != dictionary.end()) {
		cout<<str<<"=  "<<dictionary[str]<<endl;
	} else {
		cout<<"no! search!";
	}
}
int main() {
	string str;
	stri(str);

}