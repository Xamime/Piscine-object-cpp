#include "Shovel.hpp"
#include "Worker.hpp"
#include "Hammer.hpp"
#include <iostream>
#include "Workshop.hpp"
using namespace std;

int main() {

    cout << "\n------CONSTRUCTION------\n" << endl;

    Tool *hammer = new Hammer();
    Tool *shovel = new Shovel();
    Worker max("max");
    Worker toto("toto");
    Workshop forge("forge");

    cout << "\n------ACTIONS-WORKSHOP-----\n" << endl;

    forge.addWorker(&max);
    forge.addWorker(&max);
    forge.addWorker(&toto);
    forge.releaseWorker(&toto);
    forge.releaseWorker(&toto);
    forge.releaseWorker(NULL);
    forge.addWorker(NULL);

    cout << "\n------ACTIONS-WORKER-----\n" << endl;

    max.registerToWorkshop(&forge);
    max.registerToWorkshop(&forge);
    hammer->use();
    shovel->use();
    max.useTool();
    shovel->giveTool(&max);
    max.useTool();
    max.useTool();
    max.useTool();
    hammer->giveTool(&max);
    max.useTool();
    hammer->giveTool(&toto);
    max.useTool();

    cout << "\n------DESTRUCTION------\n" << endl;

    delete hammer;
    delete shovel;
    return 0;
}