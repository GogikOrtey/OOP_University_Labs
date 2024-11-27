#include "plate.h"
#include <thread>
#include <mutex>
class HungryPerson
{
private:
    int id;
    std::thread thr;
    static std::mutex con_mu;   // служебный мутекс, для красивого вывода на консоль из разных потоков
    int riceLoad;
    Plate* p_plate;             // Бокс из которого мы загружаемся передаём по указателю, так как невозможно скопировать мутекс
    HungryPerson();             // Перемещаем конструктор без параметров в приватную секцию, чтобы было невозможно его вызвать
public:
    HungryPerson(Plate* plate, int id);
    void static eat(HungryPerson& person); // Метод потока должен быть статической функцией
    int getRiceEated();
    std::thread* getThreadReference();
};

