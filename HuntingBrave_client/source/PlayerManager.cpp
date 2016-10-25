
#include	"iextreme.h"
#include	"GlobalFunction.h"
#include	"UIManager.h"
#include	"PlayerManager.h"

//***************************************************************
//
//	PlayerManagerクラス
//
//***************************************************************

//-------------------------------------------------------------------------------------
//	グローバル
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//	初期化・解放
//-------------------------------------------------------------------------------------
	
	//	コンストラクタ
	PlayerManager::PlayerManager( void ) : player( nullptr )
	{
		
	}
		
	//	デストラクタ
	PlayerManager::~PlayerManager( void )
	{
		Release();
	}

	//	初期化
	bool	PlayerManager::Initialize( void )
	{
		//	プレイヤー初期化
		player = new Player();
		player->Initialize();

		if ( player != nullptr )	return	true;
		return	false;
	}

	//	解放
	void	PlayerManager::Release( void )
	{
		SafeDelete( player );
	}

//-------------------------------------------------------------------------------------
//	更新・描画
//-------------------------------------------------------------------------------------
	
	//	更新
	void	PlayerManager::Update( void )
	{
		player->Update();
	}

	//	描画
	void	PlayerManager::Render( void )
	{
		player->Render();
	}

//-------------------------------------------------------------------------------------
//	動作関数
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
//	情報設定
//-------------------------------------------------------------------------------------

	//	プレイヤー生成
	void	PlayerManager::SetPlayer( int id, int type )
	{
		//	存在チェック
		//if ( player)
	}

//-------------------------------------------------------------------------------------
//	情報取得
//-------------------------------------------------------------------------------------

	//	Player情報取得
	Player*	PlayerManager::GetPlayer( void )
	{
		return	player;
	}
