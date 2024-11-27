#include "hungryperson.h"
#include "plate.h"
#include <thread>
#include <iostream>
using namespace std;

std::mutex HungryPerson::con_mu;

HungryPerson::HungryPerson()
{

}

HungryPerson::HungryPerson(Plate* p_plate, int id)
{
    this->p_plate = p_plate;
    this->id = id;
    riceLoad = 0;
    thr = thread(eat, std::ref(*this));
}

int HungryPerson::getRiceEated()
{
    return riceLoad;
}

void HungryPerson::eat(HungryPerson& person)
{
    int itemEated = 0;
    srand(person.id);
    while (1)
    {
        itemEated = person.p_plate->Loadind();
        this_thread::sleep_for(chrono::seconds(itemEated));   
        if (itemEated == 0) break;
        person.riceLoad = person.riceLoad + itemEated;

        con_mu.lock();
        std::cout << person.id << "-й грузовик перевёз " << itemEated << "шт. грузов    (" << person.riceLoad << "шт. за все рейсы)" << endl;
        con_mu.unlock();
    }
}

std::thread* HungryPerson::getThreadReference()
{
    return &thr;
}






