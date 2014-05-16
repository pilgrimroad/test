#ifndef __PACKETFACTORYMANAGER_H__
#define __PACKETFACTORYMANAGER_H__

#include "PacketDefine.h"

namespace Packets
{
	class Packet;
	class PacketFactory;
};

using namespace Packets;

// 消息工厂管理

class PacketFactoryManager
{
	PacketFactory**	m_pPacketFactory;
	unsigned int	m_nSize;

public:

	PacketFactoryManager();
	~PacketFactoryManager();

private:

	int Register( PacketFactory* pPacketFactory );

public:

	int Init();

	Packet* CreatePacket( PacketID nPacketID );

	int RemovePacket( Packet* pPacket );

	unsigned int GetPacketMaxSize( PacketID nPacketID );

	int CheckPacketID( PacketID nPacketID );
};

extern PacketFactoryManager *g_pPacketFactoryManager;


#endif // __PACKETFACTORYMANAGER_H__
