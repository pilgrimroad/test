#ifndef __PACKETDEFINE_H__
#define __PACKETDEFINE_H__


enum PACKET_EXE
{
	PACKET_EXE_CONTINUE,
	PACKET_EXE_ERROR,
};   

// G代表GameServer
// C代表Client
// GC是GameServer发送给Client的消息
// CG是Client发送给GameServer的消息

enum PacketID
{
	PACKET_CG_LOGIN													= 10011,	// 游戏登录QQ 
	PACKET_GC_LOGIN													= 10012,	// 登陆


	PACKET_MAX														= 99999

};

#endif // __PACKETDEFINE_H__