
class JN {
	class Common {
		file = "JeroenArsenal\Common";
		class common_addActionSelect {};
	};
	class Common_Array {
		file = "JeroenArsenal\Common\array";
		class common_array_add {};
		class common_array_remove {};
	};
	class JNA {
		file = "JeroenArsenal\JNA";
		class arsenal {};
		class arsenal_addItem {};
		class arsenal_cargoToArray {};
		class arsenal_cargoToArsenal {};
		class arsenal_container {};
		class arsenal_init {};
		class arsenal_inList {};
		class arsenal_itemCount {};
		class arsenal_itemType {};
		class arsenal_loadInventory {};
		class arsenal_removeItem {};
		class arsenal_requestOpen {};
		class arsenal_requestClose {};
	};
	class JNG {
		file = "JeroenArsenal\JNG";
		class garage {};
		class garage_addVehicle {};
		class garage_init {};
		class garage_releaseVehicle {};
		class garage_removeVehicle {};
		class garage_requestOpen {};
		class garage_requestClose {};
		class garage_requestVehicle {};
		class garage_getVehicleIndex {};
		class garage_getVehicleData {};
		class garage_garageVehicle {};
		class garage_canGarageVehicle {};
		class garage_updatePoints {};
	};
	
	class JNG_Fuel {
		file = "JeroenArsenal\JNG\Fuel";
		class garage_fuel_consumsion_init {};
		class garage_fuel_consumsion_start {};
		class garage_fuel_consumsion_stop {};
		class garage_fuel_refuel {};
		//class garage_fuel_defuel {};
		class garage_fuel_addActionRefuel {};
	};
	
	class JNG_Rearm {
		file = "JeroenArsenal\JNG\Rearm";
		class garage_rearm_getLoadoutCfg {};
		class garage_rearm_getLoadoutCurrent {};
		class garage_rearm_getLoadoutMissing {};
		class garage_rearm_getLoadoutCost {};
		class garage_rearm_getCost {};
	};
	
	class JNG_Repair {
		file = "JeroenArsenal\JNG\Repair";
		
	};
	
	class JNL {
		file = "JeroenArsenal\JNL";
		class logistics_init {};
		class logistics_load {};
		class logistics_unLoad {};
		class logistics_addAction {};
		class logistics_removeAction {};
	};

	class JNL_Actions {
		file = "JeroenArsenal\JNL\Actions";
		class logistics_addActionGetInWeapon {};
		class logistics_addActionLoad {};
		class logistics_addActionUnload {};
		class logistics_addEventGetOutWeapon {};
		class logistics_removeActionGetInWeapon {};
		class logistics_removeActionLoad {};
		class logistics_removeActionUnload {};
		class logistics_removeEventGetOutWeapon {};
	};

	class JNL_Functions {
		file = "JeroenArsenal\JNL\Functions";
		class logistics_canLoad {};
		class logistics_getCargo {};
		class logistics_getCargoOffsetAndDir {};
		class logistics_getCargoType {};
		class logistics_getNodes {};
		class logistics_lockSeats {};
	};
};
