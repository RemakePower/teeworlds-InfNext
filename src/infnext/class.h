#ifndef INFNEXT_CLASS_H
#define INFNEXT_CLASS_H

#include <game/server/teeinfo.h>
#include "weapon.h"

class CGameContext;

class CClass
{
private:
    CGameContext *m_pGameServer;

protected:
    IServer *Server();
    CGameContext *GameServer() { return m_pGameServer; }

public:
    CClass(CGameContext *pGameServer);
    CClass() {};
    ~CClass();

    virtual void OnTick(class CCharacter *pOwner) {};
    virtual void OnPlayerDeath(int ClientID, int KillerID, vec2 Pos) {};

    char m_ClassName[32];
    int m_MaxJumpNum;
    bool m_Infect;
    
    CTeeInfo m_Skin;

    CWeapon *m_pWeapons[NUM_WEAPONS];
};

#endif