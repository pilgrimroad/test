#ifndef __UIINFO_H__
#define __UIINFO_H__

// 界面信息

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

#include <string>
#include <map>
using namespace std;


class UIInfo
{
private:

	UIInfo();
	UIInfo(const UIInfo&);
	UIInfo& operator = (const UIInfo&);

	void Init();

public:

	~UIInfo();

	static UIInfo* GetMe();

	static void Release();

public:

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	static LRESULT WndProc(UINT message, WPARAM wParam, LPARAM lParam, BOOL* pProcessed);
#endif // CC_TARGET_PLATFORM == CC_PLATFORM_WIN32

public:

	void SetVisible(bool bVisible) { m_bVisible = bVisible; }
	bool GetVisible() { return m_bVisible; }

	void SetText(const char *pText) { m_strText = pText; m_bUpdateText = true; }
	const string& GetText() { return m_strText; }

	void SetNodeAreaPosition(const CCPoint &ccPoint) { m_pNodeArea->setPosition(ccPoint); }
	const CCPoint& GetNodeAreaPosition() { m_pNodeArea->getPosition(); }
	void SetNodeAreaContentSize(const CCSize &ccSize) { m_pNodeArea->setContentSize(ccSize); }
	const CCSize& GetNodeAreaContentSize() { m_pNodeArea->getContentSize(); }

	void SetNodeArea(const CCPoint &ccPoint, const CCSize &ccSize)
	{
		SetNodeAreaPosition(ccPoint);
		SetNodeAreaContentSize(ccSize);
	}

	void Update(CCNode *pNode);

protected:

	bool					m_bVisible;
	bool					m_bUpdateText;
	std::string				m_strText;
	CCLayerColor*			m_pNodeArea;

};



#endif // __UIINFO_H__
