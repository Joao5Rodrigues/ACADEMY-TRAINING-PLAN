#ifndef _C_GLOBAL_TYPES__HEADER
#define _C_GLOBAL_TYPES__HEADER

/*                                 */
/*=================================================================*
 * C OBJECT HEADER                                                 *
 *-----------------------------------------------------------------*
 *                                                                 *
 * Object  : C_GLOBAL_TYPES_H
 *                                                                 *
 * Purpose : Global Type Definitions
 *                                                                 *
 *-----------------------------------------------------------------*
 * Copyright 2013 GE Aviation Systems Ltd                          *
 *-----------------------------------------------------------------*
 *                                                                 *
 * Configuration item id :                                         *
 *                  RIU100:C_GLOBAL_TYPES_H.CA-SOURCE_CT1;cc#6
 *                                                                 *
 * Status         : COMPLETE
 * PR/CRs Related :                                                *
 *                  1:
 *                  	Request:   RIU100_CC_PR_396
 *                  	Action Date:       18-AUG-2014 11:24:02
 *                  	Relationship Type: In Response to
 *                  	Status:            AWAITING VERIFICATION
 *                  	Title:             OFP: Review updates to implement non-functional content changes
 *                  
 *                                                                 *
 *=================================================================*/
/*                                   */

/*-----------------------------------------------------------------*
 * Public Types :-                                                 *
 *-----------------------------------------------------------------*/

/*******************************************************************
 * LDRA - Author's Disposition:                                    *
 *                                                                 *
 * The following Mandatory warnings have been analysed and are     *
 * considered acceptable by the author:                            *
 *                                                                 *
 * LDRA AD1: (M) STATIC VIOLATION   : 218 S                        *
 *                                                                 *
 * NULL definition is also used in standard libraries.  The        *
 * definition has been repeated in this file to remove the need to *
 * call the standard C Library. The definition is correct.         *
 *******************************************************************/

/* C_GLOBAL_TYPES_MSP_15_D */

/* integer types */
typedef signed char           INT8;
typedef signed short          INT16;
typedef signed long           INT32;
typedef signed long long      INT64;

typedef unsigned char         UINT8;
typedef unsigned short        UINT16;
typedef unsigned long         UINT32;
typedef unsigned long long    UINT64;

/* Unsigned Bit field type */
typedef unsigned int          UBF;

/* pointers to integer types */
typedef signed char           *P_INT8;
typedef signed short          *P_INT16;
typedef signed long           *P_INT32;
typedef signed long long      *P_INT64;

typedef unsigned char         *P_UINT8;
typedef unsigned short        *P_UINT16;
typedef unsigned long         *P_UINT32;
typedef unsigned long long    *P_UINT64;

/* common enumeration types */
typedef enum { FALSE=0 , TRUE=1 } BOOLEAN;
typedef enum { EVEN=0, ODD=1, NONE=2} PARITY;
typedef enum { NO_FAULT=0, FAULT=1 } STATUS;

typedef enum
{
   SUCCESSFUL = 1,
   IN_PROGRESS = 2,
   FAILED = 3
} PROGRESS;


/* LDRA AD1: 218 S */
#define NULL (0)


/* anonymous address type */
typedef void *P_VOID;
#define ADDRESS      P_VOID

/* RIU generic address type */
typedef struct
{
   P_UINT16 address;
   UINT32   offset;
} BIT_ADDRESS;
#define RIU_ADDRESS  BIT_ADDRESS

/* Library function pointer type */
typedef void (*PTR_TO_FUNCTION_VOID_TYPE) (void *ParameterBlock);

/* To aid module test */
#define ENDLESS      TRUE
#define WARM_START_DISCRETE  FALSE

/* Provide access to CCSRBAR via symbol in link command file */
extern unsigned char __CCSRBAR[];


/*-----------------------------------------------------------------*
 * Public Operations :-                                            *
 *-----------------------------------------------------------------*/

/* None */

#endif
