
#pragma once

//****************************************************************
//
//	GameData
//
//****************************************************************

//	include
#include	"iextreme.h"
#include	"CSVReader.h"
#include	"BaseEquipment.h"

//-------------------------------------------------------------------------------------
//	プレイヤー情報
//-------------------------------------------------------------------------------------

#define	PLAYER_MAX		4

	//	プレイヤー基本情報
	struct PlayerInfo
	{
		bool	active;
		char	name[17];
		PlayerInfo( void ){};
		PlayerInfo( bool active, const LPSTR& name );
		void Set( bool active, const LPSTR& name );
	};

	//	プレイヤーパラメータ
	struct PlayerParam
	{
		Vector3 pos;
		float	angle;
		PlayerParam( void ){};
		PlayerParam( const Vector3& pos, float angle );
		void Set( const Vector3& pos, float angle );
	};

	//	データ構造
	enum 
	{
		COMMAND,
		ID,
		DATA,
	};

//*****************************************************************************************************************************
//	ネットデータ
//*****************************************************************************************************************************

	//	コマンド
	enum COMMANDS
	{
		NO_COMMAND = -1,
		CHARA_INFO,
		SIGN_UP = 10,
		SIGN_OUT
	};

	//	新規参加情報
	struct NET_IN
	{
		char	com = COMMANDS::SIGN_UP;
		int		id;
		char	name[17];
		NET_IN( void ){}
		NET_IN( int id, const LPSTR& name );
		void Set( int id, const LPSTR& name );
	};

	//	キャラデータ
	struct NET_CHARA
	{
		char com = COMMANDS::CHARA_INFO;
		int		id;
		Vector3	pos;
		NET_CHARA( void ){}
		NET_CHARA( int id, const Vector3& pos );
		void	Set( int id, const Vector3& pos );
	};
	
	//	脱退情報
	struct NET_OUT
	{
		char  com = COMMANDS::SIGN_OUT;
		int	  id;
		NET_OUT( void ){}
		NET_OUT( int id ){ this->id; }
	};



//*****************************************************************************************************************************
//	装備品データ
//*****************************************************************************************************************************

	//装備品データ
	struct EquipmentInfo
	{
		
		string	name;
		float	atk;
		float	def;
		float	mat;
		float	mdf;
		float	hp;
		float	spe;
		float	boost;
		string	text;
	};

	struct EquipmentData
	{
		vector< EquipmentInfo > equipments;

		EquipmentData(void){};
		void Set(vector<string> tokens);

		//		EquipmentParam(void){};
		//		EquipmentParam(vector<string> token, string name);
		//		void Set(vector<string> token, string name);
	};

	static EquipmentData equipmentData;

		//fstream r("DATA\\player_data.csv", ios::in);

		//csv = new CSVReader(r);


		//while (!csv->Read(tokens))
		//{
		//	for (int i = 0; i < tokens.size(); i++)
		//	{
		//		if (tokens[0] == name)
		//		{
		//			atk = atoi(tokens[1].c_str());
		//			def = atoi(tokens[2].c_str());
		//			mat = atoi(tokens[3].c_str());
		//			mdf = atoi(tokens[4].c_str());
		//			hp = atoi(tokens[5].c_str());
		//			spe = atoi(tokens[6].c_str());
		//			text = tokens[7].c_str();
		//		}
		//	}
		//}
		//csv->Close();