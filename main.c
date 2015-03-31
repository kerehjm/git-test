
#include "aes_128.h"
#include <stdio.h>

void main(){

    // Put "Hello World !!!\0" in the input buffer.
    //sprintf((unsigned char*)&in[0],(const char *)"TEST");
    sprintf((unsigned char*)&in[0],(const char *)"þ¹ÁÜ…?Ñ7‰öh?");

    // The KeyExpansion routine must be called before encryption.
    KeyExpansion();

    // The next function call encrypts the PlainText with the Key using AES algorithm.
    Cipher();

    // content of in buffer is: 48 6c 6c 6c 6f 20 57 6f 72 6c 64 20 21 21 21 00
    // content of out buffer is: 0b c9 19 32 c6 be 88 bf 55 24 49 45 b3 1f 00 b9

    // The next function call decrypts the crypted data with the Key using AES algorithm.
    InvCipher();

}
