
#ifndef AES_128_H
#define AES_128_H

// Key size in bits (could be equal 128, 192 or 256)

#define key_size 128

// rappel: round_key = Nb(Nr+1)*4
// 256 bit = 240 bytes (15 keys of 16 bit)
// 192 bit = 208 bytes (13 keys)
// 128 bit = 176 bytes (11 keys)

// The number of 32 bit words in the key.
#define Nk 		(key_size / 32)
// The number of rounds in AES Cipher.
#define Nr 		(Nk + 6)

extern unsigned char in[16];
extern unsigned char out[16];

// This function produces Nb(Nr+1) round keys. The round keys are used in each round to encrypt the states.
extern void KeyExpansion( void );
// Cipher is the main function that encrypts the PlainText.
extern void Cipher( void );
// InvCipher is the main function that decrypts the CipherText.
extern void InvCipher( void );

#endif
