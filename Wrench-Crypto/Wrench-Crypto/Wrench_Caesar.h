#include <Wrench.h>
/*
 * The Caesar Encryption was created by Julius Caesar
 * It is one of the most widely used encryption techniques.
 */

class WRENCHLIB_API WCrypto_Caesar
{
	public:
		WCrypto_Caesar() {};
		void Set_Offset(int off) {offset = off;}
		char* Encrypt(const char* str);
		char* Encrypt(const char* str, int off);

	private:
		int offset;
};