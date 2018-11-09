#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ReadFn(vector <string>);

int main(){

vector<string> Name;
string GivN;

do{

cout << "Enter names: ";

cin >> GivN;

if(GivN == "stop"){

ReadFn(Name);

}

Name.push_back(GivN);

}while(GivN != "Stop" || GivN != "stop");


return 0;
}

void ReadFn(vector <string>Name){

string hu;

while (!Name.empty()){

hu = Name.back();
cout << hu << " ";
Name.pop_back();

}


}

