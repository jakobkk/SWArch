#include "Network.h"


	int Network::ConnectHosts(int hostOneId, int hostTwoId, int connectionId) {
		return 0;
	}

	/**
	 * Mark the network ready for an operation.
	 *
	 * \return True if network was set to opeartional, False otherwise
	 */
	int Network::MarkOperational() {
		return true;
	}

	/**
	 * Network scan to ensure things are working as expected.
	 *
	 * \return 0 if success, errno otherwise
	 */
	int Network::NetworkScan() {
		return 0;
	}

	Network::~Network() {
		return;
	}

	Network::Network() {
		return;
	}
