/*
#############################################################################################
# Rocket League SDK (RLSDK) Season 24 (v2.77)
# Generated with RLSDKGenerator v1.1.5 on 10/07/2026 12:03AM
# ========================================================================================= #
# File: XAudio2_classes.hpp
# ========================================================================================= #
# Psyonix Build ID: 261001.2867.529371
# Build Date: Oct  1 2026 01:20:52
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless, SSLow
# Links: www.github.com/smallest-cock/RLSDK-Generator, discord.gg/d5ahhQmJbJ
#############################################################################################
*/

#pragma once

#ifdef _MSC_VER
#pragma pack(push, 0x1)
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/


#ifndef STATIC_CLASS_GETTER
#define STATIC_CLASS_GETTER(classPtr)                                                                                                      \
    static UClass *StaticClass() {                                                                                                         \
        static UClass *uClassPointer = nullptr;                                                                                            \
                                                                                                                                           \
        if (!uClassPointer)                                                                                                                \
            uClassPointer = (classPtr);                                                                                                    \
        return uClassPointer;                                                                                                              \
    }
#endif 

// Class XAudio2.XAudio2Device
// 0x00BC (0x03A4 - 0x0460)
class UXAudio2Device : public UAudioDevice
{
public:
	uint8_t                                          UnknownData00[0xBC];                          // 0x03A4 (0x00BC) MISSED OFFSET

public:
    STATIC_CLASS_GETTER(UObject::FindClass("Class XAudio2.XAudio2Device"))
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
