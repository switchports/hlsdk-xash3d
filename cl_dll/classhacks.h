#pragma once

#ifndef CLASSHACKS_H
#define CLASSHACKS_H

#if defined CLIENT_DLL

#define CSave CLDLL_CSave
#define CRestore CLDLL_CRestore

#define CFuncPlat CL_DLL_CFuncPlat
#define CFuncPlatRot CL_DLL_CFuncPlatRot
#define CFuncTrain CL_DLL_CFuncTrain
#define CFuncTrackTrain CL_DLL_CFuncTrackTrain
#define CFuncTrainControls CL_DLL_CFuncTrainControls
#define CFuncTrackChange CL_DLL_CFuncTrackChange
#define CFuncTrackAuto CL_DLL_CFuncTrackAuto
#define CGunTarget CL_DLL_CGunTarget
#define CSpriteTrain CL_DLL_CSpriteTrain
#define CHandGrenade CL_DLL_CHandGrenade
#define CHgun CL_DLL_CHgun
#define CCrowbar CL_DLL_CCrowbar
#define CPython CL_DLL_CPython
#define CPython CL_DLL_CPython
#define CPythonAmmo CL_DLL_CPythonAmmo
#define CRoach CL_DLL_CRoach
#define CNihilanth CL_DLL_CNihilanth
#define CNihilanthHVR CL_DLL_CNihilanthHVR
#define CGenericCycler CL_DLL_CGenericCycler
#define CCyclerProbe CL_DLL_CCyclerProbe
#define CCyclerSprite CL_DLL_CCyclerSprite
#define CWeaponCycler CL_DLL_CWeaponCycler
#define CWreckage CL_DLL_CWreckage
#define CLight CL_DLL_CLight
#define CLight CL_DLL_CLight
#define CEnvLight CL_DLL_CEnvLight
#define CPointEntity CL_DLL_CPointEntity
#define CBubbling CL_DLL_CBubbling
#define CBeam CL_DLL_CBeam
#define CLightning CL_DLL_CLightning
#define CLightning CL_DLL_CLightning
#define CLaser CL_DLL_CLaser
#define CGlow CL_DLL_CGlow
#define CSprite CL_DLL_CSprite
#define CGibShooter CL_DLL_CGibShooter
#define CEnvShooter CL_DLL_CEnvShooter
#define CTestEffect CL_DLL_CTestEffect
#define CBlood CL_DLL_CBlood
#define CShake CL_DLL_CShake
#define CFade CL_DLL_CFade
#define CMessage CL_DLL_CMessage
#define CEnvFunnel CL_DLL_CEnvFunnel
#define CEnvBeverage CL_DLL_CEnvBeverage
#define CItemSoda CL_DLL_CItemSoda
#define CGrenade CL_DLL_CGrenade
#define CBasePlayer CL_DLL_CBasePlayer
#define CDeadHEV CL_DLL_CDeadHEV
#define CStripWeapons CL_DLL_CStripWeapons
#define CRevertSaved CL_DLL_CRevertSaved
#define CInfoIntermission CL_DLL_CInfoIntermission
#define CFuncMortarField CL_DLL_CFuncMortarField
#define CMortar CL_DLL_CMortar
#define CShotgun CL_DLL_CShotgun
#define CShotgunAmmo CL_DLL_CShotgunAmmo
#define CInfoBM CL_DLL_CInfoBM
#define CBMortar CL_DLL_CBMortar
#define CBigMomma CL_DLL_CBigMomma
#define CFuncWall CL_DLL_CFuncWall
#define CFuncWallToggle CL_DLL_CFuncWallToggle
#define CFuncConveyor CL_DLL_CFuncConveyor
#define CFuncIllusionary CL_DLL_CFuncIllusionary
#define CFuncMonsterClip CL_DLL_CFuncMonsterClip
#define CFuncRotating CL_DLL_CFuncRotating
#define CPendulum CL_DLL_CPendulum
#define CHoundeye CL_DLL_CHoundeye
#define CHGrunt CL_DLL_CHGrunt
#define CHGruntRepel CL_DLL_CHGruntRepel
#define CDeadHGrunt CL_DLL_CDeadHGrunt
#define CCineMonster CL_DLL_CCineMonster
#define CCineAI CL_DLL_CCineAI
#define CScriptedSentence CL_DLL_CScriptedSentence
#define CFurniture CL_DLL_CFurniture
#define CTentacle CL_DLL_CTentacle
#define CTentacleMaw CL_DLL_CTentacleMaw
#define CApache CL_DLL_CApache
#define CApacheHVR CL_DLL_CApacheHVR
#define CAGrunt CL_DLL_CAGrunt
#define CWorldItem CL_DLL_CWorldItem
#define CItemSuit CL_DLL_CItemSuit
#define CItemBattery CL_DLL_CItemBattery
#define CItemAntidote CL_DLL_CItemAntidote
#define CItemSecurity CL_DLL_CItemSecurity
#define CItemLongJump CL_DLL_CItemLongJump
#define CFuncTankGun CL_DLL_CFuncTankGun
#define CFuncTankLaser CL_DLL_CFuncTankLaser
#define CFuncTankRocket CL_DLL_CFuncTankRocket
#define CFuncTankMortar CL_DLL_CFuncTankMortar
#define CFuncTankControls CL_DLL_CFuncTankControls
#define CPlayerMonster CL_DLL_CPlayerMonster
#define CRpg CL_DLL_CRpg
#define CLaserSpot CL_DLL_CLaserSpot
#define CLaserSpot  CL_DLL_CLaserSpot 
#define CRpgRocket CL_DLL_CRpgRocket
#define CRpgAmmo CL_DLL_CRpgAmmo
#define CZombie CL_DLL_CZombie
#define CWeaponBox CL_DLL_CWeaponBox
#define CGameScore CL_DLL_CGameScore
#define CGameEnd CL_DLL_CGameEnd
#define CGameText CL_DLL_CGameText
#define CGameTeamMaster CL_DLL_CGameTeamMaster
#define CGameTeamSet CL_DLL_CGameTeamSet
#define CGamePlayerZone CL_DLL_CGamePlayerZone
#define CGamePlayerHurt CL_DLL_CGamePlayerHurt
#define CGameCounter CL_DLL_CGameCounter
#define CGameCounterSet CL_DLL_CGameCounterSet
#define CGamePlayerEquip CL_DLL_CGamePlayerEquip
#define CGamePlayerTeam CL_DLL_CGamePlayerTeam
#define CMonsterMaker CL_DLL_CMonsterMaker
#define CLeech CL_DLL_CLeech
#define CHornet CL_DLL_CHornet
#define CRecharge CL_DLL_CRecharge
#define CDecal CL_DLL_CDecal
#define CCorpse CL_DLL_CCorpse
#define CWorld CL_DLL_CWorld
#define CShower CL_DLL_CShower
#define CEnvExplosion CL_DLL_CEnvExplosion
#define CTripmineGrenade CL_DLL_CTripmineGrenade
#define CTripmine CL_DLL_CTripmine
#define CBaseDoor CL_DLL_CBaseDoor
#define CBaseDoor CL_DLL_CBaseDoor
#define CRotDoor CL_DLL_CRotDoor
#define CMomentaryDoor CL_DLL_CMomentaryDoor
#define CHealthKit CL_DLL_CHealthKit
#define CWallHealth CL_DLL_CWallHealth
#define CGauss CL_DLL_CGauss
#define CGaussAmmo CL_DLL_CGaussAmmo
#define CBloater CL_DLL_CBloater
#define CIchthyosaur CL_DLL_CIchthyosaur
#define CMP5 CL_DLL_CMP5
#define CMP5 CL_DLL_CMP5
#define CMP5AmmoClip CL_DLL_CMP5AmmoClip
#define CMP5AmmoClip CL_DLL_CMP5AmmoClip
#define CMP5Chainammo CL_DLL_CMP5Chainammo
#define CMP5AmmoGrenade CL_DLL_CMP5AmmoGrenade
#define CMP5AmmoGrenade CL_DLL_CMP5AmmoGrenade
#define CRat CL_DLL_CRat
#define CController CL_DLL_CController
#define CControllerHeadBall CL_DLL_CControllerHeadBall
#define CControllerZapBall CL_DLL_CControllerZapBall
#define CSqueakGrenade CL_DLL_CSqueakGrenade
#define CSqueak CL_DLL_CSqueak
#define CSatchelCharge CL_DLL_CSatchelCharge
#define CSatchel CL_DLL_CSatchel
#define CGMan CL_DLL_CGMan
#define CAmbientGeneric CL_DLL_CAmbientGeneric
#define CEnvSound CL_DLL_CEnvSound
#define CSpeaker CL_DLL_CSpeaker
#define CNullEntity CL_DLL_CNullEntity
#define CBaseDMStart CL_DLL_CBaseDMStart
#define CPointEntity CL_DLL_CPointEntity
#define CPointEntity CL_DLL_CPointEntity
#define CBaseDelay CL_DLL_CBaseDelay
#define CGlock CL_DLL_CGlock
#define CGlock CL_DLL_CGlock
#define CGlockAmmo CL_DLL_CGlockAmmo
#define CGlockAmmo CL_DLL_CGlockAmmo
#define CTurret CL_DLL_CTurret
#define CMiniTurret CL_DLL_CMiniTurret
#define CSentry CL_DLL_CSentry
#define CEgon CL_DLL_CEgon
#define CEgonAmmo CL_DLL_CEgonAmmo
#define CCrossbowBolt CL_DLL_CCrossbowBolt
#define CCrossbow CL_DLL_CCrossbow
#define CCrossbowAmmo CL_DLL_CCrossbowAmmo
#define CSquidSpit CL_DLL_CSquidSpit
#define CBullsquid CL_DLL_CBullsquid
#define CEnvGlobal CL_DLL_CEnvGlobal
#define CMultiSource CL_DLL_CMultiSource
#define CBaseButton CL_DLL_CBaseButton
#define CRotButton CL_DLL_CRotButton
#define CMomentaryRotButton CL_DLL_CMomentaryRotButton
#define CEnvSpark CL_DLL_CEnvSpark
#define CEnvSpark CL_DLL_CEnvSpark
#define CButtonTarget CL_DLL_CButtonTarget
#define CGenericMonster CL_DLL_CGenericMonster
#define CNodeEnt CL_DLL_CNodeEnt
#define CNodeEnt CL_DLL_CNodeEnt
#define CTestHull CL_DLL_CTestHull
#define CNodeViewer CL_DLL_CNodeViewer
#define CNodeViewer CL_DLL_CNodeViewer
#define CNodeViewer CL_DLL_CNodeViewer
#define CNodeViewer CL_DLL_CNodeViewer
#define CXenPLight CL_DLL_CXenPLight
#define CXenHair CL_DLL_CXenHair
#define CXenTreeTrigger CL_DLL_CXenTreeTrigger
#define CXenTree CL_DLL_CXenTree
#define CXenSporeSmall CL_DLL_CXenSporeSmall
#define CXenSporeMed CL_DLL_CXenSporeMed
#define CXenSporeLarge CL_DLL_CXenSporeLarge
#define CXenHull CL_DLL_CXenHull
#define CSoundEnt CL_DLL_CSoundEnt
#define CBreakable CL_DLL_CBreakable
#define CPushable CL_DLL_CPushable
#define CBarney CL_DLL_CBarney
#define CDeadBarney CL_DLL_CDeadBarney
#define CFrictionModifier CL_DLL_CFrictionModifier
#define CAutoTrigger CL_DLL_CAutoTrigger
#define CTriggerRelay CL_DLL_CTriggerRelay
#define CMultiManager CL_DLL_CMultiManager
#define CRenderFxManager CL_DLL_CRenderFxManager
#define CBaseTrigger CL_DLL_CBaseTrigger
#define CTriggerHurt CL_DLL_CTriggerHurt
#define CTriggerMonsterJump CL_DLL_CTriggerMonsterJump
#define CTriggerCDAudio CL_DLL_CTriggerCDAudio
#define CTargetCDAudio CL_DLL_CTargetCDAudio
#define CTriggerMultiple CL_DLL_CTriggerMultiple
#define CTriggerOnce CL_DLL_CTriggerOnce
#define CTriggerCounter CL_DLL_CTriggerCounter
#define CTriggerVolume CL_DLL_CTriggerVolume
#define CFireAndDie CL_DLL_CFireAndDie
#define CChangeLevel CL_DLL_CChangeLevel
#define CLadder CL_DLL_CLadder
#define CTriggerPush CL_DLL_CTriggerPush
#define CTriggerTeleport CL_DLL_CTriggerTeleport
#define CPointEntity CL_DLL_CPointEntity
#define CTriggerSave CL_DLL_CTriggerSave
#define CTriggerEndSection CL_DLL_CTriggerEndSection
#define CTriggerGravity CL_DLL_CTriggerGravity
#define CTriggerChangeTarget CL_DLL_CTriggerChangeTarget
#define CTriggerCamera CL_DLL_CTriggerCamera
#define CBarnacle CL_DLL_CBarnacle
#define CPathCorner CL_DLL_CPathCorner
#define CPathTrack CL_DLL_CPathTrack
#define CSpiral CL_DLL_CSpiral
#define CStomp CL_DLL_CStomp
#define CGargantua CL_DLL_CGargantua
#define CSmoker CL_DLL_CSmoker
#define CHeadCrab CL_DLL_CHeadCrab
#define CBabyCrab CL_DLL_CBabyCrab
#define CAirtank CL_DLL_CAirtank
#define CHAssassin CL_DLL_CHAssassin
#define COsprey CL_DLL_COsprey
#define CCineScientist CL_DLL_CCineScientist
#define CCinePanther CL_DLL_CCinePanther
#define CCineBarney CL_DLL_CCineBarney
#define CCine2Scientist CL_DLL_CCine2Scientist
#define CCine2HeavyWeapons CL_DLL_CCine2HeavyWeapons
#define CCine2Slave CL_DLL_CCine2Slave
#define CCine3Scientist CL_DLL_CCine3Scientist
#define CCine3Barney CL_DLL_CCine3Barney
#define CCineBlood CL_DLL_CCineBlood
#define CFlockingFlyer CL_DLL_CFlockingFlyer
#define CFlockingFlyerFlock CL_DLL_CFlockingFlyerFlock
#define CISlave CL_DLL_CISlave
#define CISlave CL_DLL_CISlave
#define CScientist CL_DLL_CScientist
#define CDeadScientist CL_DLL_CDeadScientist
#define CSittingScientist CL_DLL_CSittingScientist
#define CPitWor CL_DLL_CPitWor
#define CPitWor CL_DLL_CPitWor
#define CShoc CL_DLL_CShoc
#define CSporelauncher CL_DLL_CSporelauncher
#define CShockrifle CL_DLL_CShockrifle
#define CTorchRepel  CL_DLL_CTorchRepel 
#define CDeadTorch  CL_DLL_CDeadTorch 
#define CStrooper CL_DLL_CStrooper
#define CRope CL_DLL_CRope
#define CRopeSample  CL_DLL_CRopeSample 
#define CRopeSegment  CL_DLL_CRopeSegment 
#define CElectrifiedWire  CL_DLL_CElectrifiedWire 
#define CDeadHoundeye CL_DLL_CDeadHoundeye
#define CKnife CL_DLL_CKnife
#define CSpore  CL_DLL_CSpore 
#define CGonom CL_DLL_CGonom
#define CDeadGonom CL_DLL_CDeadGonom
#define CVoltigoreEnergyBal CL_DLL_CVoltigoreEnergyBal
#define CVoltigor CL_DLL_CVoltigor
#define CBabyVoltigor CL_DLL_CBabyVoltigor
#define CNukeButton CL_DLL_CNukeButton
#define CNukeTimer CL_DLL_CNukeTimer
#define CNukeCase CL_DLL_CNukeCase
#define CBarnacleGrappleTip  CL_DLL_CBarnacleGrappleTip 
#define CBarnacleGrapple  CL_DLL_CBarnacleGrapple 
#define CPenguinGrenade CL_DLL_CPenguinGrenade
#define CPenguin CL_DLL_CPenguin
#define CPipeWrench CL_DLL_CPipeWrench
#define CGeneWormClou CL_DLL_CGeneWormClou
#define CGeneWormSpaw CL_DLL_CGeneWormSpaw
#define CGeneWor CL_DLL_CGeneWor
#define CDrillSergeant CL_DLL_CDrillSergeant
#define CBlkopOsprey CL_DLL_CBlkopOsprey
#define CPitwormGibShooter CL_DLL_CPitwormGibShooter
#define CMedic  CL_DLL_CMedic 
#define CMedicRepel  CL_DLL_CMedicRepel 
#define CZBarney CL_DLL_CZBarney
#define CEagle  CL_DLL_CEagle 
#define CMortarShel CL_DLL_CMortarShel
#define COp4Morta CL_DLL_COp4Morta
#define COp4MortarControlle CL_DLL_COp4MortarControlle
#define CFuncTankControlsO CL_DLL_CFuncTankControlsO
#define CFuncTankO CL_DLL_CFuncTankO
#define CFuncTankLaserO CL_DLL_CFuncTankLaserO
#define CHFGrunt  CL_DLL_CHFGrunt 
#define CHFGruntRepel  CL_DLL_CHFGruntRepel 
#define CDeadFGrunt  CL_DLL_CDeadFGrunt 
#define CTriggerXenReturn CL_DLL_CTriggerXenReturn
#define CTriggerGenewormHi CL_DLL_CTriggerGenewormHi
#define CPlayerFreeze  CL_DLL_CPlayerFreeze 
#define CBlowerCannon CL_DLL_CBlowerCannon
#define CM249 CL_DLL_CM249
#define CM249AmmoClip CL_DLL_CM249AmmoClip
#define CSporeAmmo  CL_DLL_CSporeAmmo 
#define CPointEntity CL_DLL_CPointEntity
#define CPointEntity CL_DLL_CPointEntity
#define CDisplacerBal CL_DLL_CDisplacerBal
#define CDisplacer CL_DLL_CDisplacer
#define CItemFlagTeam1 CL_DLL_CItemFlagTeam1
#define CItemFlagTeam2 CL_DLL_CItemFlagTeam2
#define CCarriedFlagTeam1 CL_DLL_CCarriedFlagTeam1
#define CCarriedFlagTeam2 CL_DLL_CCarriedFlagTeam2
#define CPitdrone CL_DLL_CPitdrone
#define CPitDroneSpi CL_DLL_CPitDroneSpi
#define CPitDron CL_DLL_CPitDron
#define CItemGeneric CL_DLL_CItemGeneric
#define CSkeleton CL_DLL_CSkeleton
#define CPowerupCTFBase CL_DLL_CPowerupCTFBase
#define CPowerupAccelerator CL_DLL_CPowerupAccelerator
#define CPowerupBackpack CL_DLL_CPowerupBackpack
#define CPowerupJumppack CL_DLL_CPowerupJumppack
#define CPowerupPorthev CL_DLL_CPowerupPorthev
#define CPowerupRegen CL_DLL_CPowerupRegen
#define COtis CL_DLL_COtis
#define CDeadOtis CL_DLL_CDeadOtis
#define CMassn CL_DLL_CMassn
#define CAssassinRepel CL_DLL_CAssassinRepel
#define CDeadISlave CL_DLL_CDeadISlave
#define CZGrunt CL_DLL_CZGrunt
#define CDeadZGrunt CL_DLL_CDeadZGrunt
#define CRecruit CL_DLL_CRecruit
#define CLoader CL_DLL_CLoader
#define CCleansuitScientist CL_DLL_CCleansuitScientist
#define CDeadCleansuitScientist CL_DLL_CDeadCleansuitScientist
#define CSittingCleansuitScientist CL_DLL_CSittingCleansuitScientist
#define CSniperrifle  CL_DLL_CSniperrifle 
#define CSniperrifleAmmo CL_DLL_CSniperrifleAmmo
#define CBlkopApache CL_DLL_CBlkopApache
#define CShockRoach CL_DLL_CShockRoach
#define CBaseEntity CL_DLL_CBaseEntity


#ifndef CBaseEntity
#define CBaseEntity CLDLL_CBaseEntity
#endif
#ifndef CBaseDelay
#define CBaseDelay CLDLL_CBaseDelay
#endif
#define CBaseAnimating CLDLL_CBaseAnimating
#define CBaseToggle CLDLL_CBaseToggle
#define CBaseMonster CLDLL_CBaseMonster
#ifndef CBasePlayer
#define CBasePlayer CLDLL_CBasePlayer
#endif
#define CBasePlayerItem CLDLL_CBasePlayerItem
#define CBasePlayerWeapon CLDLL_CBasePlayerWeapon
#define CBasePlayerAmmo CLDLL_CBasePlayerAmmo

#ifndef CBeam
#define CBeam CLDLL_CBeam
#endif

#ifndef CSoundEnt
#define CSoundEnt CLDLL_CSoundEnt
#endif
// Opposing force
#define CHudNightvision CLDLL_CHudNightvision

#define EMIT_SOUND_DYN CLDLL_EMIT_SOUND_DYN

#define UTIL_PrecacheOther CLDLL_UTIL_PrecacheOther
#define UTIL_BloodDrips CLDLL_UTIL_BloodDrips
#define UTIL_DecalTrace CLDLL_UTIL_DecalTrace
#define UTIL_GunshotDecalTrace CLDLL_UTIL_GunshotDecalTrace
#define UTIL_MakeVectors CLDLL_UTIL_MakeVectors
#define UTIL_IsValidEntity CLDLL_UTIL_IsValidEntity
#define UTIL_SetOrigin CLDLL_UTIL_SetOrigin
#define UTIL_GetNextBestWeapon CLDLL_UTIL_GetNextBestWeapon
#define UTIL_LogPrintf CLDLL_UTIL_LogPrintf
#define UTIL_ClientPrintAll CLDLL_UTIL_ClientPrintAll
#define UTIL_Remove CLDLL_UTIL_Remove
#define UTIL_SetSize CLDLL_UTIL_SetSize
#define UTIL_FindEntityInSphere CLDLL_UTIL_FindEntityInSphere
#define UTIL_VecToAngles CLDLL_UTIL_VecToAngles
#define UTIL_WeaponTimeBase CLDLL_UTIL_WeaponTimeBase
#define UTIL_StringToVector CLDLL_UTIL_StringToVector
#define UTIL_TraceLine CLDLL_UTIL_TraceLine
#define UTIL_SharedRandomFloat CLDLL_UTIL_SharedRandomFloat
#define UTIL_SharedRandomLong CLDLL_UTIL_SharedRandomLong
#define U_Srand CLDLL_U_Srand
#define U_Random CLDLL_U_Random

#define gSkillData CLDLL_gSkillData
#define gEntvarsDescription CLDLL_gEntvarsDescription
#define g_vecZero CLDLL_g_VecZero
#define gmsgWeapPickup CLDLL_gmsgWeapPickup
#define seed_table CLDLL_seed_table

#define ClientPrint CLDLL_ClientPrint
#define ShouldSimplify CLDLL_ShouldSimplify
#define TrainSpeed CLDLL_TrainSpeed
#define ClearMultiDamage CLDLL_ClearMultiDamage
#define ApplyMultiDamage CLDLL_ApplyMultiDamage
#define AddMultiDamage CLDLL_AddMultiDamage
#define SpawnBlood CLDLL_SpawnBlood
#define DamageDecal CLDLL_DamageDecal
#define DecalGunshot CLDLL_DecalGunshot
#define EjectBrass CLDLL_EjectBrass
#define AddAmmoNameToAmmoRegistry CLDLL_AddAmmoNameToAmmoRegistry
#define RadiusDamage CLDLL_RadiusDamage
#define FindHullIntersection CLDLL_FindHullIntersection

// apparently this also needs to be in both dlls
#define PM_ViewEntity CLDLL_PM_ViewEntity
#define PM_DrawBBox CLDLL_PM_DrawBBox
#define PM_ParticleLine CLDLL_PM_ParticleLine
#define PM_ShowClipBox CLDLL_PM_ShowClipBox
#define PM_Init CLDLL_PM_Init
#define PM_Move CLDLL_PM_Move
#define PM_FindTextureType CLDLL_PM_FindTextureType
#define PM_SwapTextures CLDLL_PM_SwapTextures
#define PM_SortTextures CLDLL_PM_SortTextures
#define PM_InitTextureTypes CLDLL_PM_InitTextureTypes
#define PM_PlayStepSound CLDLL_PM_PlayStepSound
#define PM_MapTextureTypeStepType CLDLL_PM_MapTextureTypeStepType
#define PM_CatagorizeTextureType CLDLL_PM_CatagorizeTextureType
#define PM_UpdateStepSound CLDLL_PM_UpdateStepSound
#define PM_AddToTouched CLDLL_PM_AddToTouched
#define PM_CheckVelocity CLDLL_PM_CheckVelocity
#define PM_ClipVelocity CLDLL_PM_ClipVelocity
#define PM_AddCorrectGravity CLDLL_PM_AddCorrectGravity
#define PM_FixupGravityVelocity CLDLL_PM_FixupGravityVelocity
#define PM_FlyMove CLDLL_PM_FlyMove
#define PM_Accelerate CLDLL_PM_Accelerate
#define PM_WalkMove CLDLL_PM_WalkMove
#define PM_Friction CLDLL_PM_Friction
#define PM_AirAccelerate CLDLL_PM_AirAccelerate
#define PM_WaterMove CLDLL_PM_WaterMove
#define PM_AirMove CLDLL_PM_AirMove
#define PM_InWater CLDLL_PM_InWater
#define PM_CheckWater CLDLL_PM_CheckWater
#define PM_CatagorizePosition CLDLL_PM_CatagorizePosition
#define PM_GetRandomStuckOffsets CLDLL_PM_GetRandomStuckOffsets
#define PM_ResetStuckOffsets CLDLL_PM_ResetStuckOffsets
#define PM_CheckStuck CLDLL_PM_CheckStuck
#define PM_SpectatorMove CLDLL_PM_SpectatorMove
#define PM_SplineFraction CLDLL_PM_SplineFraction
#define PM_FixPlayerCrouchStuck CLDLL_PM_FixPlayerCrouchStuck
#define PM_UnDuck CLDLL_PM_UnDuck
#define PM_Duck CLDLL_PM_Duck
#define PM_LadderMove CLDLL_LadderMove
#define PM_Ladder CLDLL_PM_Ladder
#define PM_WaterJump CLDLL_PM_WaterJump
#define PM_AddGravity CLDLL_PM_AddGravity
#define PM_PushEntity CLDLL_PM_PushEntity
#define PM_Physics_Toss CLDLL_PM_Physics_Toss
#define PM_NoClip CLDLL_PM_NoClip
#define PM_PreventMegaBunnyJumping CLDLL_PM_PreventMegaBunnyJumping
#define PM_Jump CLDLL_PM_Jump
#define PM_CheckWaterJump CLDLL_PM_CheckWaterJump
#define PM_CheckFalling CLDLL_PM_CheckFalling
#define PM_PlayWaterSounds CLDLL_PM_PlayWaterSounds
#define PM_CalcRoll CLDLL_PM_CalcRoll
#define PM_DropPunchAngle CLDLL_PM_DropPunchAngle
#define PM_CheckParamters CLDLL_PM_CheckParamters
#define PM_ReduceTimers CLDLL_PM_ReduceTimers
#define PM_PlayerMove CLDLL_PM_PlayerMove
#define PM_CreateStuckTable CLDLL_PM_CreateStuckTable
#define PM_GetVisEntInfo CLDLL_PM_GetVisEntInfo
#define PM_GetPhysEntInfo CLDLL_PM_GetPhysEntInfo

#define g_bhopcap CLDLL_g_bhopcap
#define g_onladder CLDLL_g_onladder
#define pmove CLDLL_pmove
#define movevars CLDLL_movevars

#endif

#endif