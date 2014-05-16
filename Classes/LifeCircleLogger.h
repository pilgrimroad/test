#ifndef  _LIFE_CIRCLE_LOGGER_H_
#define  _LIFE_CIRCLE_LOGGER_H_

#include "cocos2d.h"

class LifeCircleLogger
{
	std::string m_msg;
public:
	LifeCircleLogger(){}
	LifeCircleLogger(const std::string& msg):m_msg(msg)
	{
		cocos2d::CCLog("%s BEGINS!",m_msg.c_str());
	}
	~LifeCircleLogger()
	{
		cocos2d::CCLog("%s ENDS!",m_msg.c_str());
	}
};

#define LOG_FUNCTION_LIFE LifeCircleLogger(__FUNCTION__);

#endif // _LIFE_CIRCLE_LOGGER_H_