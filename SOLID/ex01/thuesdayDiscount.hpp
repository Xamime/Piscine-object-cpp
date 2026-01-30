#pragma once

#include <iostream>
#include "command.hpp"
#include <string>

using namespace std;

class ThuesdayDiscountCommand : public Command {
    public:

        ThuesdayDiscountCommand(int id,
                                const string& date,
                                const string& client,
                                vector<Articles>& articles)
                    : Command(id, date, client, articles) {}

        double get_total_price() const {
            double total = Command::get_total_price();
            if (date == "Thuesday")
                total *= 0.9;
            return total;
        }
};