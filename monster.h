//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
#include <iostream>
#include <string>
using namespace std;
class monster{
private:
    string name;
    unsigned int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string="TG", int=10 ,int=10 );
    ~monster();
};
monster::~monster(){
    cout<<"Bye bye "<<name <<"  hp: "<<hp<<endl;
}

monster::monster(string n,int h,int p){
    name=n;
    h>200? hp=200:hp=h;
    p>15?potion=15: potion=p;

    cout<<"Monster "<<name <<" zzzzzzzzzzz"<<endl;
}


#endif /* monster_h */
