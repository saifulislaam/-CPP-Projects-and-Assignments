#include <iostream>
using namespace std;

int main() {
    int array[6]; 
    array[0] = 89; 
    array[1] = 90;
    array[2] = 94;
    array[3] = 93;
    array[4] = 95;
    array[5] = 96;

    string name;
    cout << "Enter a name: ";
    cin >> name;

    if (name == "saif") {
        cout << array[0] << endl;
    } 
    else
    if(name == "adil") {
        cout << array[1] << endl; 
    }
    else 
    if(name == "basit"){
        cout<<array[3]<<endl;
    }
    else
     if(name == "naseeb"){
        cout<<array[4]<<endl;
    }
    else
     if(name == "ali"){
        cout<<array[5]<<endl;
    }
    else
     if(name == "ahmad"){
        cout<<array[6]<<endl;
    }

}
