.macro def_special ptr
.set SPECIAL_\ptr, __special__
.set __special__, __special__ + 1
    .4byte \ptr
    .endm

.set __special__, 0
	.align 2
gSpecials::
	def_special ScrSpecial_HealPlayerParty
	def_special SetCableClubWarp
	def_special DoCableClubWarp
	def_special sub_80810DC
	def_special sub_80839A4
	def_special sub_80839D0
	def_special sub_80BB8CC
	def_special sub_80BB63C
	def_special sub_80BBAF0
	def_special sub_80BC440
	def_special SecretBasePC_PackUp
	def_special sub_80BC114
	def_special sub_80BC56C
	def_special sub_80BC5BC
	def_special SecretBasePC_Decoration
	def_special SecretBasePC_Registry
	def_special sub_80BCE1C
	def_special sub_80BCE90
	def_special sub_80BBDD0
	def_special sub_80FF474
	def_special sub_8100B20
	def_special sub_80BB70C
	def_special sub_80BBFA4
	def_special sub_8100A7C
	def_special sub_80BBC78
	def_special sub_80BCE4C
	def_special sub_80C683C
	def_special sub_80B929C
	def_special sub_808347C
	def_special sub_80834E4
	def_special sub_808350C
	def_special CloseLink
	def_special sub_8083B90
	def_special sub_8083B5C
	def_special sub_8083B80
	def_special sub_8083820
	def_special sub_8083614
	def_special GetLinkPartnerNames
	def_special SpawnBerryBlenderLinkPlayerSprites
	def_special SavePlayerParty
	def_special LoadPlayerParty
	def_special sub_80C5568
	def_special sub_8083BDC
	def_special FieldObjectInteractionGetBerryTreeData
	def_special Berry_FadeAndGoToBerryBagMenu
	def_special FieldObjectInteractionPlantBerryTree
	def_special FieldObjectInteractionPickBerryTree
	def_special FieldObjectInteractionRemoveBerryTree
	def_special FieldObjectInteractionWaterBerryTree
	def_special PlayerHasBerries
	def_special IsEnigmaBerryValid
	def_special ScrSpecial_GetTrainerBattleMode
	def_special ScrSpecial_ShowTrainerIntroSpeech
	def_special ScrSpecial_ShowTrainerNonBattlingSpeech
	def_special ScrSpecial_HasTrainerBeenFought
	def_special ScrSpecial_EndTrainerApproach
	def_special PlayTrainerEncounterMusic
	def_special sub_8082C68
	def_special ScrSpecial_GetTrainerEyeRematchFlag
	def_special ScrSpecial_StartTrainerEyeRematch
	def_special ShowPokemonStorageSystem
	def_special CheckForAlivePartyMons
	def_special TurnOffTVScreen
	def_special DoTVShow
	def_special sub_80BECE8
	def_special special_0x44
	def_special sub_80BDA0C
	def_special sub_80BF2C4
	def_special sub_80BDE48
	def_special sub_80BF544
	def_special SetContestCategoryStringVarForInterview
	def_special special_0x4a
	def_special sub_80BF974
	def_special CheckForBigMovieOrEmergencyNewsOnTV
	def_special GetMomOrDadStringForTVMessage
	def_special sub_80C2014
	def_special sub_80C47C0
	def_special sub_80C496C
	def_special sub_80C4C28
	def_special sub_80C47F0
	def_special sub_80C4858
	def_special sub_80C4C64
	def_special sub_80C4758
	def_special sub_80C4BF0
	def_special sub_80C43F4
	def_special sub_80C4D80
	def_special sub_80C4F70
	def_special sub_80C47A0
	def_special sub_80C4440
	def_special sub_80C44C0
	def_special sub_80C5044
	def_special GiveMonArtistRibbon
	def_special sub_808363C
	def_special ScrSpecial_DoSaveDialog
	def_special DoWateringBerryTreeAnim
	def_special sub_80E60D8
	def_special sub_80EB7C4
	def_special ScrSpecial_GetCurrentMauvilleMan
	def_special ScrSpecial_HasBardSongBeenChanged
	def_special ScrSpecial_SaveBardSongLyrics
	def_special ScrSpecial_GetHipsterSpokenFlag
	def_special ScrSpecial_SetHipsterSpokenFlag
	def_special ScrSpecial_HipsterTeachWord
	def_special ScrSpecial_PlayBardSong
	def_special sub_80F83D0
	def_special ScrSpecial_GenerateGiddyLine
	def_special ScrSpecial_GiddyShouldTellAnotherTale
	def_special ScrSpecial_StorytellerGetFreeStorySlot
	def_special ScrSpecial_StorytellerDisplayStory
	def_special ScrSpecial_StorytellerStoryListMenu
	def_special ScrSpecial_StorytellerUpdateStat
	def_special ScrSpecial_StorytellerInitializeRandomStat
	def_special ScrSpecial_HasStorytellerAlreadyRecorded
	def_special ScrSpecial_TraderMenuGetDecoration
	def_special ScrSpecial_GetTraderTradedFlag
	def_special ScrSpecial_DoesPlayerHaveNoDecorations
	def_special ScrSpecial_IsDecorationFull
	def_special ScrSpecial_TraderMenuGiveDecoration
	def_special ScrSpecial_TraderDoDecorationTrade
	def_special GetShroomishSizeRecordInfo
	def_special CompareShroomishSize
	def_special GetBarboachSizeRecordInfo
	def_special CompareBarboachSize
	def_special sub_80BF9B4
	def_special sub_80BFAE0
	def_special sub_80BFB10
	def_special sub_80FA5BC
	def_special sub_80FA5E4
	def_special sub_80EB83C
	def_special sub_80FA648
	def_special SwapRegisteredBike
	def_special CalculatePlayerPartyCount
	def_special sub_8095B6C
	def_special sub_8095C10
	def_special sub_80C4CF8
	def_special sub_80C4CEC
	def_special sub_80C4C78
	def_special sub_80C4D50
	def_special ShowContestWinner
	def_special MauvilleGymSpecial2
	def_special MauvilleGymSpecial1
	def_special ShowFieldMessageStringVar4
	def_special DrawWholeMapView
	def_special StorePlayerCoordsInVars
	def_special MauvilleGymSpecial3
	def_special PetalburgGymSpecial1
	def_special PetalburgGymSpecial2
	def_special GetPlayerTrainerIdOnesDigit
	def_special GetPlayerBigGuyGirlString
	def_special GetRivalSonDaughterString
	def_special SetFlagInVar
	def_special CableCarWarp
	def_special sub_8123218
	def_special Overworld_PlaySpecialMapMusic
	def_special StartWallClock
	def_special ScrSpecial_ViewWallClock
	def_special ScrSpecial_ChooseStarter
	def_special ScrSpecial_StartWallyTutorialBattle
	def_special sub_80BF9F8
	def_special sub_80F9A0C
	def_special sub_810CA00
	def_special sub_804E538
	def_special PlayRoulette
	def_special sub_810FD60
	def_special sub_810FCB0
	def_special sub_810FDAC
	def_special sub_810FA74
	def_special sub_810FCE8
	def_special sub_810FF48
	def_special sub_810FAA0
	def_special sub_810FF60
	def_special ScrSpecial_RockSmashWildEncounter
	def_special GabbyAndTyGetBattleNum
	def_special sub_80BDC14
	def_special GabbyAndTyBeforeInterview
	def_special DoTVShowInSearchOfTrainers
	def_special IsTVShowInSearchOfTrainersAiring
	def_special GabbyAndTyGetLastQuote
	def_special sub_80BDD18
	def_special GabbyAndTySetScriptVarsToFieldObjectLocalIds
	def_special sub_810E300
	def_special sp0B5_daycare
	def_special sp0B6_daycare
	def_special sub_8041E7C
	def_special sp0B8_daycare
	def_special sp0B9_daycare_relationship_comment
	def_special sub_8042328
	def_special Daycare_SendPokemon_Special
	def_special ChooseSendDaycareMon
	def_special ShowDaycareLevelMenu
	def_special sub_80417B8
	def_special sub_8041770
	def_special sub_8041648
	def_special ScriptHatchMon
	def_special EggHatch
	def_special sub_8042B4C
	def_special ShowLinkBattleRecords
	def_special sub_80B7CE8
	def_special sub_80B7D0C
	def_special ExecuteWhiteOut
	def_special sp0C8_whiteout_maybe
	def_special RotatingGate_InitPuzzle
	def_special RotatingGate_InitPuzzleAndGraphics
	def_special SetSSTidalFlag
	def_special ResetSSTidalFlag
	def_special EnterSafariMode
	def_special ExitSafariMode
	def_special SafariZoneGetPokeblockNameInFeeder
	def_special sub_810BAF4
	def_special IsMirageIslandPresent
	def_special UpdateShoalTideFlag
	def_special InitBirchState
	def_special ScriptGetPokedexInfo
	def_special ShowPokedexRatingMessage
	def_special DoPCTurnOnEffect
	def_special DoPCTurnOffEffect
	def_special SetDepartmentStoreFloorVar
	def_special DoLotteryCornerComputerEffect
	def_special EndLotteryCornerComputerEffect
	def_special sub_80F9A4C
	def_special sub_80F9EEC
	def_special sub_80FA0DC
	def_special ScrSpecial_GetPokemonNicknameAndMoveName
	def_special ScrSpecial_CountPokemonMoves
	def_special sub_8132670
	def_special GetRecordedCyclingRoadResults
	def_special ScrSpecial_BeginCyclingRoadChallenge
	def_special GetPlayerAvatarBike
	def_special FinishCyclingRoadChallenge
	def_special UpdateCyclingRoadState
	def_special GetLeadMonFriendshipScore
	def_special sub_8134548
	def_special sub_81347F8
	def_special CheckPartyBattleTowerBanlist
	def_special PrintBattleTowerTrainerGreeting
	def_special PrintEReaderTrainerGreeting
	def_special sub_813556C
	def_special sub_8135668
	def_special sub_81358A4
	def_special sub_8135A14
	def_special sub_8135BA0
	def_special BattleTower_SoftReset
	def_special DetermineBattleTowerPrize
	def_special GiveBattleTowerPrize
	def_special AwardBattleTowerRibbons
	def_special ChooseBattleTowerPlayerParty
	def_special ValidateEReaderTrainer
	def_special sub_810F404
	def_special ReducePlayerPartyToThree
	def_special BedroomPC
	def_special PlayerPC
	def_special FieldShowRegionMap
	def_special sub_804D89C
	def_special sub_804DB68
	def_special sub_804E174
	def_special sub_804DB2C
	def_special GetWeekCount
	def_special RetrieveLotteryNumber
	def_special PickLotteryCornerTicket
	def_special ShowBerryBlenderRecordWindow
	def_special ResetTrickHouseEndRoomFlag
	def_special SetTrickHouseEndRoomFlag
	def_special ScrSpecial_CreatePCMenu
	def_special AccessHallOfFamePC
	def_special ScrSpecial_ShowDiploma
	def_special CheckLeadMonCool
	def_special CheckLeadMonBeauty
	def_special CheckLeadMonCute
	def_special CheckLeadMonSmart
	def_special CheckLeadMonTough
	def_special sub_80C7958
	def_special DoSoftReset
	def_special GameClear
	def_special sub_810EBEC
	def_special ShowGlassWorkshopMenu
	def_special SpawnCameraDummy
	def_special RemoveCameraDummy
	def_special GetPokeblockNameByMonNature
	def_special GetSecretBaseNearbyMapName
	def_special CheckRelicanthWailord
	def_special DoBrailleWait
	def_special sub_80818A4
	def_special sub_80818FC
	def_special ShowBattleTowerRecords
	def_special WaitWeather
	def_special sub_810F414
	def_special sub_810F424
	def_special player_get_direction_lower_nybble
	def_special sub_810F488
	def_special sub_810F4B0
	def_special sub_810F4D4
	def_special sub_810F4FC
	def_special LeadMonHasEffortRibbon
	def_special GivLeadMonEffortRibbon
	def_special ScrSpecial_AreLeadMonEVsMaxedOut
	def_special sub_8064EAC
	def_special sub_8064ED4
	def_special InitRoamer
	def_special sub_810F5BC
	def_special IsGrassTypeInParty
	def_special sub_8081334
	def_special PutZigzagoonInPlayerParty
	def_special IsStarterInParty
	def_special sub_80BC224
	def_special CheckFreePokemonStorageSpace
	def_special DoSealedChamberShakingEffect1
	def_special sub_810E944
	def_special GetShieldToyTVDecorationInfo
	def_special IsPokerusInParty
	def_special sub_8069D78
	def_special sub_810F758
	def_special ScrSpecial_StartGroudonKyogreBattle
	def_special ScrSpecial_StartRayquazaBattle
	def_special ScrSpecial_StartRegiBattle
	def_special sub_8082524
	def_special DoSealedChamberShakingEffect2
	def_special sub_810F828
	def_special sub_807E25C
	def_special sp13E_warp_to_last_warp
	def_special sp13F_fall_to_last_warp
	def_special ShowContestEntryMonPic
	def_special sub_80C5164
	def_special SetEReaderTrainerGfxId
	def_special ScrSpecial_StartSouthernIslandBattle
	def_special SetRoute119Weather
	def_special SetRoute123Weather
	def_special ScriptGetMultiplayerId
	def_special ScriptGetPartyMonSpecies
	def_special sub_80FA148
	def_special sub_810F8FC
	def_special sub_80BC50C
	def_special LoadPlayerBag
	def_special sub_8081924
	def_special sub_810F950
	def_special sub_810F908
	def_special sub_8090FC0
	def_special sub_810F96C
	def_special sub_810F9AC
	def_special sub_813610C
	def_special GetNameOfEnigmaBerryInPlayerParty
	def_special ScriptRandom
	def_special sub_80835D8
.ifdef GERMAN
	def_special nullsub_814B200
.endif
