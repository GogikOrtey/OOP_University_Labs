#pragma once
#include <mutex>
class Plate
{
private:
    std::mutex mu; // Мутекс, используемый для блокировки доступа к общему ресурсу
    int volume;
public:
    Plate();
    Plate(int volume);
    int Loadind();
};

