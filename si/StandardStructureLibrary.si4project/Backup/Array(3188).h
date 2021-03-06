/******************************************************************************
*
*  Copyright (C), 2001-2005, Huawei Tech. Co., Ltd.
*
*******************************************************************************
*  File Name     : Array.h
*  Version       : Initial Draft
*  Author        : zhangxianyi
*  Created       : 2020/5/20
*  Last Modified :
*  Description   : Array.c header file
*  Function List :
*
*
*  History:
* 
*       1.  Date         : 2020/5/20
*           Author       : zhangxianyi
*           Modification : Created file
*
******************************************************************************/
#ifndef __ARRAY_H__
#define __ARRAY_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/*==============================================*
 *      include header files                    *
 *----------------------------------------------*/


/*==============================================*
 *      constants or macros define              *
 *----------------------------------------------*/
typedef struct _T_ARRAY Array_t;
typedef Array_t* pArray;


/*==============================================*
 *      project-wide global variables           *
 *----------------------------------------------*/



/*==============================================*
 *      routines' or functions' implementations *
 *----------------------------------------------*/

extern pArray array_create( uint32 elem_size,bool (*freefunc)(void* elem) );
extern bool array_destory( pArray parray );
extern void*  array_get(pArray array, uint32 index );
extern bool array_grow( pArray parray );
extern bool array_set( pArray array, uint32 index, void* elem, uint32 elem_size );
extern bool array_add( pArray parray, uint32 index, void* resource, uint32 src_size );
extern bool array_del( pArray parray, uint32 index );


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __ARRAY_H__ */
