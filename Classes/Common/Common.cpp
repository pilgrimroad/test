#include "cocos2d.h"

VOID MyAssert( const CHAR *pFile, LONG nLine, const CHAR *pFunc, const CHAR *pCond, const CHAR *pFormat, ... )
{
	const int MAX_LEN = 8192;
	char szBuf[MAX_LEN];
	va_list ap;
	va_start( ap, pFormat );
	vsnprintf( szBuf, MAX_LEN, pFormat, ap );
	va_end( ap );

	//
}