/* 
 * File:   main.cpp
 * Author: R135291Y
 *
 * Created on November 19, 2014, 11:16 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
/* 
 * File:   main.cpp
 * Author: R135291Y
 *
 * Created on November 19, 2014, 11:07 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
/* 
 * File:   main.cpp
 * Author: R135291Y
 *
 * Created on October 23, 2014, 7:08 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
class Products;

class Database {
    int FurnitureC;
    int FurnitureT;
    int FurnitureW;
    int BeverageW;
    int BeverageS;
    int BeverageL;
    friend class Products;

public:

    int GetFurnitureC() {
        return FurnitureC;
    }

    int GetFurnitureT() {
        return FurnitureT;
    }

    int GetFurnitureW() {
        return FurnitureW;
    }

    int GetBeverageW() {
        return BeverageW;
    }

    int GetBeveregeS() {
        return BeverageS;
    }

    int GetBeverageL() {
        return BeverageL;
    }
};

class Products {
public:

    Database SetPrice(Database database) {
        cout<<"\n*** Furniture category*** \n";
        cout << "Enter price for chairs ";
        cin >> database.FurnitureC;
        cout << "Enter price TV stands ";
        cin >> database.FurnitureT;
        cout << "Enter price for wardrobes ";
        cin >> database.FurnitureW;
        
        cout<<"\n*** Beverage category*** \n";
        cout << "Enter price for Wine ";
        cin >> database.BeverageW;
        cout << "Enter price for Soft Drinks ";
        cin >> database.BeverageS;
        cout << "Enter price for Lagers ";
        cin >> database.BeverageL;
        return database;
    }
};

int main(int argc, char** argv) {
    cout << "...OK mart database updater..." << endl;
    Database objdatabase;
    Products product;
    objdatabase = product.SetPrice(objdatabase);
    cout << "\n........Furniture products available for sale...." << endl;
    cout << "Chairs    $" << objdatabase.GetFurnitureC() << endl;
    cout << "TV stands $" << objdatabase.GetFurnitureT() << endl;
    cout << "Wardrobes $" << objdatabase.GetFurnitureW() << endl;

    cout << "\n........Beverage products available for sale...." << endl;
    cout << "Chairs    $" << objdatabase.GetBeverageL() << endl;
    cout << "TV stands $" << objdatabase.GetBeverageW() << endl;
    cout << "Wardrobes $" << objdatabase.GetBeveregeS() << endl;




    return 0;
}
