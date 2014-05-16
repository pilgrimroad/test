#ifndef __PACKET_H__
#define __PACKET_H__

// ��4����cocos2d�Ļ���ͷ�ļ�
#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;


// ��2��ͷ�ļ��ṩ��������Э���ļ�ʹ��
#include "PacketDefine.h"
#include "PacketFactory.h"


// ������Ϣ���Ļ���

// ����Э��Ŀ¼							/Packets
// ִ��Э��Ŀ¼							/Packets/Handler
// ����Ҫ������ִ�е�Э�鶨����Ŀ¼		/Packets/Handler/Handler.cpp



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
		// ���ݲ�������

	private:
		// ���ݶ���
	};
};

using namespace Packets;

#endif // __PACKET_H__