#ifndef _CODEC_H_
#define _CODEC_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "rijndael.h"

#define KEYLENGTH 16

	void GenerateEncryptionKey(char* userPassword, int passwordLength,
		unsigned char encryptionKey[KEYLENGTH]);
	int CodecDecrypt(int page, unsigned char* data, int len, unsigned char key[KEYLENGTH]);


#ifdef __cplusplus
}  /* End of the 'extern "C"' block */
#endif

#endif
