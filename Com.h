#pragma once

#include "comdef.h"

#define CHK_HR(stmt)        do { HRESULT hr=(stmt); if (FAILED(hr)) throw _com_error(hr); } while(0)

class CoInit
{
public:
    CoInit()
    {
        CHK_HR(CoInitialize(NULL));
    }

    ~CoInit()
    {
        CoUninitialize();
    }
};
