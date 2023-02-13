#include <game/server/gamecontext.h>
#include <game/server/weapons/hammer.h>
#include <game/server/weapons/looper-grenade.h>
#include <game/server/weapons/looper-rifle.h>
#include "looper.h"

CClassLooper::CClassLooper(CGameContext *pGameServer) : CClass(pGameServer)
{
    str_copy(m_ClassName, _("Looper"));
    m_MaxJumpNum = 3;
    m_Infect = false;
    m_pWeapons[WEAPON_HAMMER] = new CWeaponHammer(pGameServer);
    m_pWeapons[WEAPON_GUN] = 0;
    m_pWeapons[WEAPON_SHOTGUN] = 0;
    m_pWeapons[WEAPON_GRENADE] = new CWeaponLooperGrenade(pGameServer);
    m_pWeapons[WEAPON_RIFLE] = new CWeaponLooperRifle(pGameServer);
    m_pWeapons[WEAPON_NINJA] = 0;

    // 0.6
    m_Skin.m_UseCustomColor = 1;
    str_copy(m_Skin.m_aSkinName, "bluekitty");
    m_Skin.m_ColorBody = 255;
    m_Skin.m_ColorFeet = 0;

    // 0.7
    str_copy(m_Skin.m_apSkinPartNames[0], "kitty");
    str_copy(m_Skin.m_apSkinPartNames[1], "whisker");
    str_copy(m_Skin.m_apSkinPartNames[2], "");
    str_copy(m_Skin.m_apSkinPartNames[3], "standard");
    str_copy(m_Skin.m_apSkinPartNames[4], "standard");
    str_copy(m_Skin.m_apSkinPartNames[5], "standard");

    m_Skin.m_aUseCustomColors[0] = true;
    m_Skin.m_aUseCustomColors[1] = true;
    m_Skin.m_aUseCustomColors[2] = false;
    m_Skin.m_aUseCustomColors[3] = true;
    m_Skin.m_aUseCustomColors[4] = true;
    m_Skin.m_aUseCustomColors[5] = false;

    m_Skin.m_aSkinPartColors[0] = HSLtoint(0, 0, 150);
    m_Skin.m_aSkinPartColors[1] = HSLtoint(130, 109, 219);
    m_Skin.m_aSkinPartColors[2] = -8229413;
    m_Skin.m_aSkinPartColors[3] = HSLtoint(0, 0, 175);
    m_Skin.m_aSkinPartColors[4] = HSLtoint(0, 0, 75);
    m_Skin.m_aSkinPartColors[5] = -8229413;
}