#include "druid.h"
#include "knight.h"
#include "elf.h" 

Druid::Druid(int x, int y) : NPC(DruidType, x, y) {}

bool Druid::accept(const std::shared_ptr<NPC> &attacker) {
    if (isDeath)
        return false;
    
    bool success = attacker->fight(*this);
    if (success)
        death();
    return success;
}
bool Druid::fight(const Druid &defender) const {
    // std::cout << "Дерусь с собой епт (это как)" << std::endl;
    return false;
};
bool Druid::fight(const Knight &defender) const {
    // std::cout << "Дерусь с рыцарем епт" << std::endl;
    return false;
};
bool Druid::fight(const Elf &defender) const {
    // std::cout << "Дерусь с эльфом епт" << std::endl;
    return true;
};

void Druid::print() {
    print(std::cout);
}
void Druid::print(std::ostream &os) {
    os << *this;
}
void Druid::save(std::ostream &os) {
    os << DruidType << " ";
    NPC::save(os);
}
std::ostream &operator<<(std::ostream &os, Druid &Druid)
{
    os << Druid::name << " " << *static_cast<NPC*>(&Druid) << std::endl;
    return os;
}