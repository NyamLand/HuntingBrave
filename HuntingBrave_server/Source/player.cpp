
#include	"iextreme.h"
#include	"Player.h"

//*****************************************************************************************************************************
//
//	Player�N���X
//
//*****************************************************************************************************************************

//----------------------------------------------------------------------------------------------
//	�O���[�o��
//----------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------
//	�O���[�o��
//----------------------------------------------------------------------------------------------

	//	�R���X�g���N�^
	Player::Player( void )
	{
		//	�����ݒ�
		this->pos = pos;
		angle = .0f;
	}

	//	�f�X�g���N�^
	Player::~Player( void )
	{

	}

//----------------------------------------------------------------------------------------------
//	�X�V
//----------------------------------------------------------------------------------------------

	//	�X�V
	bool	Player::Update( PlayerParam& param )
	{
		return true;
	}

////*****************************************************************************************************************************
////	�������E���
////*****************************************************************************************************************************
////------------------------------------------------------
////	������
////------------------------------------------------------
//cPlayerManager::cPlayerManager( GameParam* gameParam )
//{
//	this->gameParam = gameParam; 
//	//	�S�v���C���[������
//	for( int p=0 ; p<PLAYER_MAX ; p++ )
//	{
//		player[p] = NULL;
//	}
//}
//
////------------------------------------------------------
////	���
////------------------------------------------------------
//cPlayerManager::~cPlayerManager()
//{
//	//	�S�v���C���[���
//	for( int p=0 ; p<PLAYER_MAX ; p++ ) delete player[p];
//}
//
////*****************************************************************************************************************************
////	�X�V
////*****************************************************************************************************************************
//void cPlayerManager::Update( int id )
//{
//	PlayerParam param = gameParam->getPlayerParam(id);
//	//	�v���C���[�X�V
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
////	�v���C���[����
////*****************************************************************************************************************************
//void cPlayerManager::Set( int id, int type )
//{
//	//	���݃`�F�b�N
//	if( player[id] != NULL ) return;
//	//	�v���C���[����
//	player[id] = new cPlayer();
//}