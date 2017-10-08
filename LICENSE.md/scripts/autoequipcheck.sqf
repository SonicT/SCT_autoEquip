params ["_unit"];

_arrequipInfo = getArray(configFile >> "CfgVehicles" >>typeOf _unit >> "SCT_Soldier_DefaultPlate" >> "defaultset");
if(isNil("_arrequipInfo") or ((count _arrequipInfo) < 1)) exitWith{}; //exit this script if there is no definition of array, or have no info.
hint format ["%1 have this arrval : %2", _unit, _arrequipInfo];
_arrItem = [];
_arrPlace = [];

{
	if(_forEachIndex%2 == 0) then {
		_arrItem pushBack _x;
	} else {
		_arrPlace pushBack _x; 
	};
}forEach _arrequipInfo;
_on = true;
//read vest, and uniform items and magazines, and save them
_tems = itemsWithMagazines _unit;
{
	if(_x isKindOf "SonicT_Item_Base") then {_on = false};
}forEach _tems;

if(!_on) exitWith{hint "yuks, you ain't gonna put the plate twice";};

removeAllItemsWithMagazines _unit;

{
	_num = _forEachIndex;
	_place = _arrPlace select _num;
	_name = _x;
	switch _place do{
		case "Vest" : {
			_unit addItemToVest _name;
			
		};
		case "Uniform" : {
			_unit addItemToUniform _name;
		};
	};

}forEach _arrItem;

{
	_name = _x;
	if(isClass (configFile >> "CfgWeapons")) then{
		//it's items
		_unit addItem _name;
	} else{
		//it's ammunition, but let's check once more.
		if(isClass (configFile >> "CfgMagazines")) then {
			_unit addMagazine _name;
		};		
	};
}forEach _tems;