
#include	"iextreme.h"
#include	"Player.h"

//*****************************************************************************************************************************
//
//	Playerクラス
//
//*****************************************************************************************************************************

//----------------------------------------------------------------------------------------------
//	グローバル
//----------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------
//	グローバル
//----------------------------------------------------------------------------------------------

	//	コンストラクタ
	Player::Player( void )
	{
		//	初期設定
		this->pos = pos;
		angle = .0f;
	}

	//	デストラクタ
	Player::~Player( void )
	{

	}

//----------------------------------------------------------------------------------------------
//	更新
//----------------------------------------------------------------------------------------------

	//	更新
	bool	Player::Update( PlayerParam& param )
	{
		return true;
	}

////*****************************************************************************************************************************
////	初期化・解放
////*****************************************************************************************************************************
////------------------------------------------------------
////	初期化
////------------------------------------------------------
//cPlayerManager::cPlayerManager( GameParam* gameParam )
//{
//	this->gameParam = gameParam; 
//	//	全プレイヤー初期化
//	for( int p=0 ; p<PLAYER_MAX ; p++ )
//	{
//		player[p] = NULL;
//	}
//}
//
////------------------------------------------------------
////	解放
////------------------------------------------------------
//cPlayerManager::~cPlayerManager()
//{
//	//	全プレイヤー解放
//	for( int p=0 ; p<PLAYER_MAX ; p++ ) delete player[p];
//}
//
////*****************************************************************************************************************************
////	更新
////*****************************************************************************************************************************
//void cPlayerManager::Update( int id )
//{
//	PlayerParam param = gameParam->getPlayerParam(id);
//	//	プレイヤー更新
//	if( player[id]->Update( param ) == false )
//	{
//		delete player[id];
//		player[id] = NULL;
//	} else {
//		gameParam->SetPlayerParam( id, param.pos, param.angle );
//	}
//}
//
////*****************************************************************************************************************************
////	プレイヤー生成
////*****************************************************************************************************************************
//void cPlayerManager::Set( int id, int type )
//{
//	//	存在チェック
//	if( player[id] != NULL ) return;
//	//	プレイヤー生成
//	player[id] = new cPlayer();
//}
