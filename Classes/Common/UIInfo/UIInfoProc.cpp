#include "UIInfo.h"


extern CCNode* GetNodeByMouse( CCNode *pNode, CCPoint &pt );
extern CCPoint GetNodeStartPoint( CCNode *pNode );
extern void DrawNodeRect( CCNode *pNode );

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
LRESULT UIInfo::WndProc( UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed )
{
	do 
	{
		CC_BREAK_IF( !CCDirector::sharedDirector()->getRunningScene() );

		UIInfo *pUIInfo = UIInfo::GetMe();
		CC_BREAK_IF( !(pUIInfo->GetVisible() || message == WM_KEYUP) );

		switch ( message )
		{
		case WM_LBUTTONDOWN:	// 鼠标左键按下
			break;
		case WM_MOUSEMOVE:		// 鼠标移动
			// 获取鼠标下的窗口
			{

			}
			break;
		case WM_LBUTTONUP:		// 鼠标左键抬起
			break;
		case WM_TOUCH:			// 触摸
			break;
		case WM_KEYDOWN:		// 键盘按下
			break;
		case WM_KEYUP:			// 键盘抬起
			{
				switch ( wParam )
				{
				case VK_F1:
					{

					}
					break;
				case VK_F5:
					{

					}
					break;
				case VK_F8:
					{

					}
					break;
				case VK_F12:
					{

					}
					break;
				default:
					break;
				}
			}
			break;
		default:
			break;
		}


	} while (0);

	return 0;
}
#endif // CC_TARGET_PLATFORM == CC_PLATFORM_WIN32

