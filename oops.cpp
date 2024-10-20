#include <iostream>
using namespace std;

class hero {

    char level;
    int health;

    public:
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void changehealth(int h){
        health = h;
    }
    void changelevel(char k){
        level = k;
    }

};


int main(){

    hero guts;
    guts.changehealth(69);
    cout << guts.gethealth();
    return 0;
}