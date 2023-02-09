#include <iostream>
using namespace std;

#include "Earphones.cpp"
#include "HairDryer.cpp"
#include "Autonomic.cpp"
#include "Wired.cpp"

using namespace std;


int main() {
    IElectronics* shopItems[2];
    
    shopItems[0] = new Earphones(220, 60);
    shopItems[1] = new HairDryer(1300);
    
    bool open = true;
    while (open)
    {
        cout << "Выберите гаджет : 1 - наушники, 2 - фен для волос, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
            case 1:
                shopItems[0]->ShowSpec();
                break;
            
            case 2:
                shopItems[1]->ShowSpec();
                break;
            
                
            case 0:
                open = false;
                break;
            
            default:
                cout << "Выберите гаджет от 1 до 2 или 0, чтобы выйти" << endl;
            break;
        }
    }

   delete shopItems[0];
   delete shopItems[1];

    return 0;
};
