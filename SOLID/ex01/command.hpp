#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Articles {
    double price;
    int quantity;
    string name;
};

class Command {
    
    protected:

        int id;
        string date;
        string client;
        vector<Articles> articles;

    public:

        Command(int id, const string& date, const string& client, vector<Articles>& articles)
                : id(id), date(date), client(client), articles(articles) {};
        virtual ~Command(){};

        virtual double get_total_price() const {
            double total = 0;
            for (vector<Articles>::const_iterator it = articles.begin(); it != articles.end(); it++) {
                total += (it->price * it->quantity);
            }
            return total;
        };

        void show_command() {
            cout << "id : " << id << "\ndate : " << date << "\nclient : " << client;
            cout << "\nArticles :\n";
            for (vector<Articles>::const_iterator it = articles.begin(); it != articles.end(); it++) {
                cout << "name : " << it->name << ", quantity : " << it->quantity << ", price : " << it->price << endl;
            }
        }

};