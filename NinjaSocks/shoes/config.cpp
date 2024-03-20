class CfgPatches
{
	class DZ_Characters_Shoes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class seis_ninjasocks_dye: Clothing
	{
		scope=2;
		displayName="#STR_NINJASOCKS_DYE";
		descriptionShort="#STR_NINJASOCKS_DYE_DESC";
		model="\DZ\characters\shoes\feetCover_improvised_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		rotationFlags=2;
		itemSize[]={2,2};
		weight=200;
		varWetMax=1;
		heatIsolation=0.15000001;
		visibilityModifier=0.89999998;
		repairableWithKits[]={2};   /*2 = cloth, 3 = leather   */
		repairCosts[]={25};
		soundAttType="Sneakers";
		soundImpactType="default";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa",
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa",
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa"
		};		
		class ClothingTypes
		{
			male="\DZ\characters\shoes\feetCover_improvised_m.p3d";
			female="\DZ\characters\shoes\feetCover_improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class seis_ninjasocks_hard: Clothing
	{
		scope=2;
		displayName="#STR_NINJASOCKS_HARD";
		descriptionShort="#STR_NINJASOCKS_HARD_DESC";
		model="\DZ\characters\shoes\feetCover_improvised_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		rotationFlags=2;
		itemSize[]={2,2};
		weight=250;
		durability=0.2;
		varWetMax=1;
		heatIsolation=0.30000001;
		visibilityModifier=0.89999998;
		repairableWithKits[]={2,3};   /*2 = cloth, 3 = leather   */
		repairCosts[]={25};
		soundAttType="Sneakers";
		soundImpactType="default";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\shoes\data\feetCover_improvised_co.paa",
			"dz\characters\shoes\data\feetCover_improvised_co.paa",
			"dz\characters\shoes\data\feetCover_improvised_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\shoes\feetCover_improvised_m.p3d";
			female="\DZ\characters\shoes\feetCover_improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class seis_ninjasocks: Clothing
	{
		scope=2;
		displayName="#STR_NINJASOCKS";
		descriptionShort="#STR_NINJASOCKS_DESC";
		model="\DZ\characters\shoes\feetCover_improvised_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		rotationFlags=2;
		itemSize[]={2,2};
		weight=250;
		durability=0.2;
		varWetMax=1;
		heatIsolation=0.30000001;
		visibilityModifier=0.89999998;
		repairableWithKits[]={2,3};   /*2 = cloth, 3 = leather   */
		repairCosts[]={25};
		soundAttType="Sneakers";
		soundImpactType="default";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa",
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa",
			"NinjaSocks\shoes\data\seis_ninjasocks_co.paa"
		};		
		class ClothingTypes
		{
			male="\DZ\characters\shoes\feetCover_improvised_m.p3d";
			female="\DZ\characters\shoes\feetCover_improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\shoes\data\feetCover_improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
