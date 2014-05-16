#ifndef __TYPE_H__
#define __TYPE_H__

#include <string>

#define TRUE 1
#define FALSE 0

#ifdef WIN32
#define __MY_FILE__ __FILE__
#define __MY_LINE__ __LINE__
#define __MY_FUNCTION__ __FUNCTION__
#else
#define __MY_FILE__ __FILE__
#define __MY_LINE__ __LINE__
#define __MY_FUNCTION__ __FUNCTION__
#endif

extern VOID MyAssert( const CHAR *pFile, LONG nLine, const CHAR *pFunc, const CHAR *pCond, const CHAR *pFormat, ... );
#define Assert(cond)				(cond) ? ((VOID)0) : MyAssert(__MY_FILE__,__MY_LINE__,__MY_FUNCTION__,#cond,"");
#define AssertEx(cond, format, ...)	(cond) ? ((VOID)0) : MyAssert(__MY_FILE__,__MY_LINE__,__MY_FUNCTION__,#cond,format,##__VA_ARGS__);

#define __MY_TRY try
#define __MY_CATCH catch(...)
#define __MY_THROW(t) throw(t);
#define __ENTER_FUNCTION try {
#define __LEAVE_FUNCTION } catch(...) { Assert(FALSE); }

#endif // __TYPE_H__