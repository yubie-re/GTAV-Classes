#pragma once

#include "CDynamicEntity.hpp"

#include <cstdint>

namespace rage
{
#pragma pack(push, 1)
    class CPhysical : public CDynamicEntity
    {
    public:
        char gapF0[144];
        uint64_t qword180;
        uint32_t m_damage_bits; //0x0188
        uint8_t m_hostility; //0x018C
        char gap18D[3];
        uint8_t byte190;
        char gap191[3];
        uint32_t dword194;
        char gap198[232];
	    float m_health; //0x0280
	    char pad_0284[28];
        float m_maxhealth; //0x02A0
        char gap2A4[4];
        uint64_t qword2A8;
        char gap2B0[72];
        uint64_t qword2F8;
        uint64_t qword300;
        uint32_t dword308;
    };
    static_assert(sizeof(CPhysical) == 0x30C);
#pragma pack(pop)
}