#pragma once

#include "nutvinc.h"
#include "nutvcmd.h"

namespace nutv{

class NutvCore{
    public:
        NutvCore();
        ~NutvCore();
        bool Handle(std::string str);
        bool Handle(NutvCmd * cmd);

};

}