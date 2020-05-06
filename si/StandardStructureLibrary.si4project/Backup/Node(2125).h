/******************************************************************************
*
*  Copyright (C), 2001-2005, Huawei Tech. Co., Ltd.
*
*******************************************************************************
*  File Name     : Node.h
*  Version       : Initial Draft
*  Author        : zhangxianyi
*  Created       : 2020/5/1
*  Last Modified :
*  Description   : Node.c header file
*  Function List :
*
*
*  History:
* 
*       1.  Date         : 2020/5/1
*           Author       : zhangxianyi
*           Modification : Created file
*
******************************************************************************/
#ifndef __NODE_H__
#define __NODE_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/*==============================================*
 *      include header files                    *
 *----------------------------------------------*/
#include "./public.h"



/*==============================================*
 *      constants or macros define              *
 *----------------------------------------------*/
typedef struct _T_Node
{
    uint32  id;
    uint32  count;
    void*   pnode;
}Node_t;

typedef Node_t* pNode; 

/*==============================================*
 *      project-wide global variables           *
 *----------------------------------------------*/


/*==============================================*
 *      routines' or functions' implementations *
 *----------------------------------------------*/

extern uint8 compare2Node( pNode one, pNode two );
extern bool equals2Node( pNode one, pNode two );
extern bool isEmptyNode( pNode node );
extern void freeNode( pNode node );
extern pNode getNodeMem( uint32 i_id, uint32 i_count, void* args );


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __NODE_H__ */
