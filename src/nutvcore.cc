#include "nutvcore.h"

namespace nutv{

NutvCore::NutvCore()
{

}

NutvCore::~NutvCore()
{
    
}

bool NutvCore::Handle(std::string str)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;

    return ret;
}

bool NutvCore::Handle(NutvCmd * cmd)
{
    bool ret = false;
    LOG(INFO) << "enter " << __func__;

    return ret;
}

}