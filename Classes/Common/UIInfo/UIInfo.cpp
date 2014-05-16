#include "UIInfo.h"


UIInfo *g_pUIInfo = NULL;

UIInfo::UIInfo()
	:m_bVisible(false)
	,m_bUpdateText(false)
	,m_pNodeArea(NULL)
{

}

UIInfo::~UIInfo()
{
	CC_SAFE_RELEASE(m_pNodeArea);
}

void UIInfo::Init()
{

}

UIInfo* UIInfo::GetMe()
{
	if ( !g_pUIInfo )
	{
		g_pUIInfo = new UIInfo();
		g_pUIInfo->Init();
	}
	return g_pUIInfo;
}

void UIInfo::Release()
{
	CC_SAFE_DELETE(g_pUIInfo);
}

void UIInfo::Update(CCNode *pNode)
{

}
