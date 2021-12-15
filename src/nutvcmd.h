#pragma once

#include "nutvinc.h"

namespace nutv{
class NutvCmd{
    public:
        NutvCmd();
        NutvCmd(std::string str);
        ~NutvCmd();
        bool Parse();
        bool GetCmd(std::string &str);



    private:
        uint32_t offset;   
        std::string strstr; 
};

}
