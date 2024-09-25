#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Anagram{
    private:
        string Ana;
    
    // constructor 
    public: Anagram(string _Ana) : Ana (_Ana) {}

    void Display(){
        cout << Ana << endl;
    }

    bool check(Anagram & other){
        
        string sortedAna = Ana;
        sort(sortedAna.begin(), sortedAna.end());

        string sortedOtherAna = other.Ana;
        sort(sortedOtherAna.begin(), sortedOtherAna.end());

        return sortedAna == sortedOtherAna;
        
    }



};

int main(){
    Anagram Ana1("Kavya");
    Anagram Ana2("Kavya");

    Ana1.Display();
    Ana2.Display();

    Ana1.check(Ana2);

}