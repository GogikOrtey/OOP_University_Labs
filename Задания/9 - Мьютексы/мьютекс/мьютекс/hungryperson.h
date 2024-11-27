#include "plate.h"
#include <thread>
#include <mutex>
class HungryPerson
{
private:
    int id;
    std::thread thr;
    static std::mutex con_mu;   // ��������� ������, ��� ��������� ������ �� ������� �� ������ �������
    int riceLoad;
    Plate* p_plate;             // ���� �� �������� �� ����������� ������� �� ���������, ��� ��� ���������� ����������� ������
    HungryPerson();             // ���������� ����������� ��� ���������� � ��������� ������, ����� ���� ���������� ��� �������
public:
    HungryPerson(Plate* plate, int id);
    void static eat(HungryPerson& person); // ����� ������ ������ ���� ����������� ��������
    int getRiceEated();
    std::thread* getThreadReference();
};

