#include <iostream>
#include "Command.hpp"
#include "packageReductionDiscount.hpp"
#include "thuesdayDiscount.hpp"


int main() {
    vector<Articles> articles = {
        {30, 1, "Cheese"},
        {5, 5, "Orange"},
        {1250, 1, "Wine"}
    };

    vector<Articles> articles2 = {
        {30, 1, "Cheese"},
        {5, 5, "Orange"},
        {15, 1, "Wine"}
    };
    PackageReductionDiscountCommand command1(1, "Monday", "toto", articles);
    ThuesdayDiscountCommand tuesdayDiscount(2, "Thuesday", "toto", articles);
    ThuesdayDiscountCommand fridayDiscount(3, "Friday", "toto", articles);
    PackageReductionDiscountCommand command2(4, "Monday", "jean", articles2);

    command1.show_command();
    cout << "price = " << command1.get_total_price() << endl << endl;
    
    tuesdayDiscount.show_command();
    cout << "price = " << tuesdayDiscount.get_total_price() << endl << endl;

    fridayDiscount.show_command();
    cout << "price = " << fridayDiscount.get_total_price() <<endl;

    command2.show_command();
    cout << "price = " << command2.get_total_price() <<endl;
    return 0;
}