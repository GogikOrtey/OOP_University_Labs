#pragma once
#include <mutex>
class Plate
{
private:
    std::mutex mu; // ������, ������������ ��� ���������� ������� � ������ �������
    int volume;
public:
    Plate();
    Plate(int volume);
    int Loadind();
};

