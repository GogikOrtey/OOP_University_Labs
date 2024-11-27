#include "plate.h"
#include <math.h>
#include <thread>

Plate::Plate()
{
    volume = 100;
}

Plate::Plate(int volume)
{
    this->volume = volume;
}

int Plate::Loadind()
{
    mu.lock();

    int BoxLoad = rand() % 10 + 1;

    if (volume >= BoxLoad)
    {
        volume = volume - BoxLoad;
    }
    else
    {
        BoxLoad = volume;
        volume = 0;
    }
    // Р’СЂРµРјСЏ РїРѕРіСЂСѓР·РєРё - 1 СЃРµРєСѓРЅРґР°
    std::this_thread::sleep_for(std::chrono::seconds(1));

    mu.unlock();
    return BoxLoad;
}
