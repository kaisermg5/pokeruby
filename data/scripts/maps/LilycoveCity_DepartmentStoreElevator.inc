LilycoveCity_DepartmentStoreElevator_MapScripts:: @ 815A39B
	.byte 0

LilycoveCity_DepartmentStoreElevator_EventScript_15A39C:: @ 815A39C
	lock
	faceplayer
	checkflag 2
	call_if 0, LilycoveCity_DepartmentStoreElevator_EventScript_15A4CF
	copyvar 0x8005, 0x4043
	special sub_810E944
	message LilycoveCity_DepartmentStoreElevator_Text_1A0EF6
	waitmessage
	multichoice 0, 0, 57, 0
	switch RESULT
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_15A402
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_15A425
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_15A448
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_15A46B
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_15A48E
	case 127, LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A402:: @ 815A402
	setdynamicwarp LilycoveCity_DepartmentStore_1F, 255, 2, 1
	compare 0x4043, 0
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	call LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8
	setvar 0x4043, 0
	goto LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A425:: @ 815A425
	setdynamicwarp LilycoveCity_DepartmentStore_2F, 255, 2, 1
	compare 0x4043, 1
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	call LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8
	setvar 0x4043, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A448:: @ 815A448
	setdynamicwarp LilycoveCity_DepartmentStore_3F, 255, 2, 1
	compare 0x4043, 2
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	call LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8
	setvar 0x4043, 2
	goto LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A46B:: @ 815A46B
	setdynamicwarp LilycoveCity_DepartmentStore_4F, 255, 2, 1
	compare 0x4043, 3
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	call LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8
	setvar 0x4043, 3
	goto LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A48E:: @ 815A48E
	setdynamicwarp LilycoveCity_DepartmentStore_5F, 255, 2, 1
	compare 0x4043, 4
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	call LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8
	setvar 0x4043, 4
	goto LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A4B1:: @ 815A4B1
	erasebox 0, 0, 29, 19
	release
	end

LilycoveCity_DepartmentStoreElevator_EventScript_15A4B8:: @ 815A4B8
	erasebox 0, 0, 29, 19
	applymovement LAST_TALKED, LilycoveCity_DepartmentStoreElevator_Movement_1A0845
	waitmovement 0
	special sub_810EBEC
	waitstate
	setflag 2
	return

LilycoveCity_DepartmentStoreElevator_EventScript_15A4CF:: @ 815A4CF
	special SetDepartmentStoreFloorVar
	return
