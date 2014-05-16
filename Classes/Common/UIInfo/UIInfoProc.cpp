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
		case WM_LBUTTONDOWN:	// ����������
			break;
		case WM_MOUSEMOVE:		// ����ƶ�
			// ��ȡ����µĴ���
			{

			}
			break;
		case WM_LBUTTONUP:		// ������̧��
			break;
		case WM_TOUCH:			// ����
			break;
		case WM_KEYDOWN:		// ���̰���
			break;
		case WM_KEYUP:			// ����̧��
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

