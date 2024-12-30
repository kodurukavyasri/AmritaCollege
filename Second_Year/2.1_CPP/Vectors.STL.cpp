#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3}; //0
    cout <<vec[1];

    for(char val : vec){
        cout << val << endl;
    }

    cout << "Size = " << vec.size() << endl;

    vec.push_back(3);
    cout << "Size = " << vec.size() << endl;
    cout << "hey_kavss";

    vec.pop_back();
    cout << "Size = " << vec.size() << endl;
    cout << "hey_kavss";

    vec.front();
    cout << "Size = " << vec.size() << endl;
    cout << "hey_kavss";

    vec.back();
    cout << "Size = " << vec.size() << endl;
    cout << "hey_kavss";

    vec.at(0);
    cout << "Size = " << vec.size() << endl;
    cout << "hey_kavss";

    return 0;
}