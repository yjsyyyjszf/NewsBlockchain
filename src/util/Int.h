#ifndef NEWS_BLOCKCHAIN_INT_H
#define NEWS_BLOCKCHAIN_INT_H

#include "Byte.h"
#include <vector>

/**
 * 无符号32位整数
 */
class UInt32 {
    Byte bytes[4];

    static void uintToBytes(unsigned int, Byte (&bytes)[4]);

    static unsigned int byteToUint(const Byte (&bytes)[4]);
public:
    UInt32() {
        bytes[0] = bytes[1] = bytes[2] = bytes[3] = 0x00;
    }

    UInt32(unsigned int val);

    operator unsigned int();

    UInt32& operator = (unsigned int val);

    /**
     * 转换为字节vector
     * @return
     */
    std::vector<Byte> toVector();
};

/**
 * 无符号16位整数
 */
class UInt16 {
    Byte bytes[2];

    static void uintToBytes(unsigned short, Byte (&bytes)[2]);

    static unsigned short byteToUint(const Byte (&bytes)[2]);
public:
    UInt16() {
        bytes[0] = bytes[1] = 0x00;
    }

    UInt16(unsigned short val);

    operator unsigned short();

    UInt16& operator = (unsigned short val);

    /**
     * 转换为字节vector
     * @return
     */
    std::vector<Byte> toVector();
};

#endif //NEWS_BLOCKCHAIN_INT_H