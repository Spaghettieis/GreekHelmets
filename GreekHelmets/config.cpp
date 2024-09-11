class CfgPatches
{
	class greekhelmets
	{
		units[]=
		{
			"seis_bronze_helmet",
			"seis_black_helmet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};

class CfgMods
{
	class greekhelmets
	{
		dir = "GreekHelmets";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Greek Helmets";
		credits = "emelyarules, Anthony Schmidt, Tweaks";
		author = "Spaghettieis";
		authorID = "76561199363100280";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World", "Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"GreekHelmets/scripts/4_World"};
			};
		};
	};
};


class CfgVehicles
{
	class NorseHelm;
	class seis_bronze_helmet: NorseHelm
	{
		scope=2;
		displayName="Greek helmet bronze";
		descriptionShort="Open version of a Corinthian helmet";
		model="GreekHelmets\data\bronze_helmet_g.p3d";
		repairableWithKits[]={10};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=2000;
		itemSize[]={3,3};
		noNVStrap=1;
		noEyewear=0;
		noMask=0;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=1.2;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"GreekHelmets\data\bronze_helmet_co.paa",
			"GreekHelmets\data\bronze_helmet_co.paa",
			"GreekHelmets\data\bronze_helmet_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"GreekHelmets\data\bronze_helmet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"GreekHelmets\data\bronze_helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"GreekHelmets\data\bronze_helmet_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"GreekHelmets\data\bronze_helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"GreekHelmets\data\bronze_helmet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.65;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.65;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="GreekHelmets\data\bronze_helmet.p3d";
			female="GreekHelmets\data\bronze_helmet.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class seis_black_helmet: NorseHelm
	{
		scope=2;
		displayName="Greek helmet black";
		descriptionShort="Open version of a Corinthian helmet";
		model="GreekHelmets\data\black_helmet_g.p3d";
		repairableWithKits[]={10};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=2000;
		itemSize[]={3,3};
		noNVStrap=1;
		noEyewear=0;
		noMask=0;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=1.2;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"hair",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"GreekHelmets\data\black_helmet_hair_co.paa",
			"GreekHelmets\data\black_helmet_main_co.paa"
			
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"GreekHelmets\data\black_helmet_hair.rvmat",
								"GreekHelmets\data\black_helmet_main.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"GreekHelmets\data\black_helmet_hair.rvmat",
								"GreekHelmets\data\black_helmet_main.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"GreekHelmets\data\black_helmet_hair_damage.rvmat",
								"GreekHelmets\data\black_helmet_main_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"GreekHelmets\data\black_helmet_hair_damage.rvmat",
								"GreekHelmets\data\black_helmet_main_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"GreekHelmets\data\black_helmet_hair_destruct.rvmat",
								"GreekHelmets\data\black_helmet_main_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.65;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.65;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="GreekHelmets\data\black_helmet.p3d";
			female="GreekHelmets\data\black_helmet.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class seis_black_helmet_nvg: NorseHelm
	{
		scope=2;
		displayName="Greek helmet black";
		descriptionShort="This Corinthian helmet thrums with power. It feels sturdier than mundane historical helmets and you can see a faint inscription on the inside: `sto skotadi apantame me phos`";
		model="GreekHelmets\data\black_helmet_g.p3d";
		repairableWithKits[]={10};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=2000;
		itemSize[]={3,3};
		noNVStrap=1;
		noEyewear=0;
		noMask=0;
		varWetMax=0.249;
		heatIsolation=0.55;
		visibilityModifier=1.2;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		hiddenSelections[]=
		{
			"hair",
			"main"
		};
		hiddenSelectionsTextures[]=
		{
			"GreekHelmets\data\black_helmet_hair_co.paa",
			"GreekHelmets\data\black_helmet_main_co.paa"
			
		};
		class Reflectors
		{
			class Beam
			{
				color[]={1,0.55000001,0,1};
				brightness=1;
				radius=20;
				angle=70;
				angleInnerRatio=0.25;
				dayLight=1;
				flareAngleBias=40;
				position="beamStart";
				direction="beamEnd";
				hitpoint="bulb";
				selection="bulb";
			};
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=260;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"GreekHelmets\data\black_helmet_hair.rvmat",
								"GreekHelmets\data\black_helmet_main.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"GreekHelmets\data\black_helmet_hair.rvmat",
								"GreekHelmets\data\black_helmet_main.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"GreekHelmets\data\black_helmet_hair_damage.rvmat",
								"GreekHelmets\data\black_helmet_main_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"GreekHelmets\data\black_helmet_hair_damage.rvmat",
								"GreekHelmets\data\black_helmet_main_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"GreekHelmets\data\black_helmet_hair_destruct.rvmat",
								"GreekHelmets\data\black_helmet_main_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.55;
					};
					class Blood
					{
						damage=0.2;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="GreekHelmets\data\black_helmet.p3d";
			female="GreekHelmets\data\black_helmet.p3d";
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="GreatHelm_drop_SoundSet";
					id=898;
				};
			};
		};
	};


};