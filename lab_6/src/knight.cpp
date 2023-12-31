#include "druid.h"
#include "knight.h"
#include "elf.h"

Knight::Knight(int x, int y) : NPC(KnightType, x, y) {}

bool Knight::accept(const std::shared_ptr<NPC> &attacker) {
    if (isDeath)
        return false;
    
    bool success = attacker->fight(*this);
    if (success)
        death();
    return success;
}
bool Knight::fight(const Druid &defender) const {
    return true;
};
bool Knight::fight(const Knight &defender) const {
    return false;
};
bool Knight::fight(const Elf &defender) const {
    return false;
};

void Knight::print() {
    print(std::cout);
}
void Knight::print(std::ostream &os) {
    os << *this;
}
void Knight::save(std::ostream &os) {
    os << KnightType << " ";
    NPC::save(os);
}
std::ostream &operator<<(std::ostream &os, Knight &knight)
{
    os << Knight::name << " " << *static_cast<NPC*>(&knight) << std::endl;
    return os;
}