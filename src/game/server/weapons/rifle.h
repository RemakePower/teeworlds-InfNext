#ifndef GAME_SERVER_WEAPONS_RIFLE_H
#define GAME_SERVER_WEAPONS_RIFLE_H

#include <game/server/weapon.h>

class CWeaponRifle : public CWeapon
{
public:
    CWeaponRifle(CGameContext *pGameServer);

    void Fire(vec2 Pos, vec2 Dir, int Owner) override;
};

#endif