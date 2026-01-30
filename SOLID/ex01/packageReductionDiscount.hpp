#pragma once

#include <iostream>
#include "command.hpp"
#include <string>

using namespace std;

class PackageReductionDiscountCommand : public Command {
    public:
        PackageReductionDiscountCommand(int id,
                                        const string& date,
                                        const string& client,
                                        vector<Articles>& articles)
                            : Command(id, date, client, articles) {}

        double get_total_price() const {
            double total = Command::get_total_price();
            if (total > 150.0)
                total -= 10;
            return total;
        }
};