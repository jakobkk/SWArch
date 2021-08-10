#pragma once
#include "CommonAppLibrary.h"

class COMMONAPPLIBRARY_API Network
{
public:
	
	/**
	 * <summary>Creates a connection from one host to another via a connection</summary> This helps connect everything in the network together.
	 * 
	 * \param hostOneId
	 * \param hostTwoId
	 * \param connectionId
	 * \return 0 if success, errno otherwise
	 */
	int ConnectHosts(int hostOneId, int hostTwoId, int connectionId);

	/**
	 * Mark the network ready for an operation.
	 * 
	 * \return True if network was set to opeartional, False otherwise
	 */
	int MarkOperational();

	/**
	 * Network scan to ensure things are working as expected.
	 * 
	 * \return 0 if success, errno otherwise
	 */
	int NetworkScan();

	~Network();

private:
	Network();
	int totalUsers;
	int totalHosts;
	int totalConnections;
	bool operational;

};
