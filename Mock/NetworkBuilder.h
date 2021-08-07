#pragma once

#include "IBuilder.h"
#include <vector>


/**
 * <summary>Create a [Network](@ref Network) using extra end points, extra connections, or for a specific mission based on enum</summary>
 */
class COMMONAPPLIBRARY_API NetworkBuilder : public IBuilder
{

public:
	/**
	 * Creating the network either comes from extra end points, extra connections or if there is already a mission.
	 */
	enum NetworkBuilderTypes
	{
		/** Network built up around the network end points (hosts) */
		TypesByEndPoints,
		/** Network built up around the connections across the network */
		TypesByConnection,
		/** Network built up around the mission the network will be used for */
		TypesByMission
	};

	/**
	 * Set the type for the network builder that is used to determine what functions can be called.
	 * 
	 * \param type
	 */
	void SetType(NetworkBuilder type);
	NetworkBuilder GetType();


	/**
	 * Used by TypesByEndPoints for when you have extra end points that need to be used by do not neccessarily have a mission yet.
	 * Ignored if not TypesByEndPoints.
	 * 
	 * \param count
	 */
	void SetHostCount(int count);
	/**
	 * Used by TypesByEndPoints for when you have extra end points that need to be used by do not neccessarily have a mission yet..
	 * Ignored if not TypesByEndPoints.
	 * 
	 * \return
	 */
	int  GetHostCount();

	/**
	 * Used by TypesByConnection for when you have extra connections that need used but do not have a mission. 
	 * Ignored if not TypesByConnection.
	 * 
	 * \param count
	 */
	void SetRouterCount(int count);
	/**
	 * Used by TypesByConnection for when you have extra connections that need used but do not have a mission.
	 * Ignored if not TypesByConnection.
	 * 
	 * \return 
	 */
	int  GetRouterCount();

	/** Used to keep track of totalHosts */
	void IncrementHostCount();
	/** Used to keep track of totalHosts */
	void SetUserCount(int count);
	/** Used to keep track of totalHosts */
	int  GetUserCount();

	/** Used to keep track of totalRouters */
	void IncrementRouterCount();
	/** Used to keep track of totalRouters */
	void SetHostType(std::string type);
	/** Used to keep track of totalRouters */
	std::string GetHostType();

	/** Used to keep track of totalUsers */
	void IncrementUserCount();
	/** Used to keep track of totalUsers */
	void SetConnectionType(std::string type);
	/** Used to keep track of totalUsers */
	std::string GetConnectionType();

	/**
	 * Used by TypesByMission to establish mission info with the intent of focusing on specific network information later.
	 * Ignored if not TypesByMission.
	 * 
	 * \param info
	 */
	void SetMissionInfo(std::string info);
	/**
	 * Used by TypesByMission to establish mission info with the intent of focusing on specific network information later.
	 * Ignored if not TypesByMission.
	 * 
	 * \return 
	 */
	std::string GetMissionInfo();

	/** Used by TypesByMission to establish mission requirements. Useful for [MarkOpearational](@ref Network.MarkOperational()) */
	void SetMissionReqs(std::string type);
	/** Used by TypesByMission to get the mission requirements */
	std::string GetMissionReqs();

	/** Set detailed notes for the network */
	void SetNotes(std::string notes);
	/** Keep track of detailed notes for the network */
	std::string GetNotes();

	void* Build() override;
	Node* BuildNode() override;


private:
	/** Number of hosts required for the network */
	int total_hosts = 0;
	/** Number of routers to connect the hosts */
	int total_routers = 0;
	/** Total number of users that will use the network */
	int total_users = 0;

};
