#ifndef __PACKET_H__
#define __PACKET_H__

// 这4个是cocos2d的基础头文件
#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;


// 这2个头文件提供给所有子协议文件使用
#include "PacketDefine.h"
#include "PacketFactory.h"


// 所有消息包的基类

// 定义协议目录							/Packets
// 执行协议目录							/Packets/Handler
// 不需要本程序执行的协议定义在目录		/Packets/Handler/Handler.cpp



namespace Packets
{
	
#define PACK_PROPERTY(varType, varName, funName)\
private: varType varName;\
public:  varType Get##funName(void) const { return varName; }\
public:  void Set##funName(varType var){ varName = var; } \

#define PACK_PROPERTY_GET(varType, varName, funName)\
private: varType varName;\
public:  varType Get##funName(void) const { return varName; }\

#define PACK_PROPERTY_SET(varType, varName, funName)\
private: varType varName;\
public:  void Set##funName(varType var){ varName = var; } \


	class Packet
	{
	public:
		Packet() {};
		virtual ~Packet() {};

// 		virtual BOOL Reads( SocketInputStream &iStream ) = 0;
// 		virtual BOOL Writes( SocketOutputStream &oStream ) = 0;
		virtual UINT Execute() = 0;

		virtual INT GetPacketID() = 0;
		virtual UINT GetPacketSize() = 0;

	public:
		// 数据操作函数

	private:
		// 数据定义
	};
};

using namespace Packets;

#endif // __PACKET_H__