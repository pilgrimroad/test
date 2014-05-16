#ifndef __PACKETDEFINE_H__
#define __PACKETDEFINE_H__


enum PACKET_EXE
{
	PACKET_EXE_CONTINUE,
	PACKET_EXE_ERROR,
};   

// G����GameServer
// C����Client
// GC��GameServer���͸�Client����Ϣ
// CG��Client���͸�GameServer����Ϣ

enum PacketID
{
	PACKET_CG_LOGIN													= 10011,	// ��Ϸ��¼QQ 
	PACKET_GC_LOGIN													= 10012,	// ��½


	PACKET_MAX														= 99999

};

#endif // __PACKETDEFINE_H__