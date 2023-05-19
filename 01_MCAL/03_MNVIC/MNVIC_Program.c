/**************************************************************************/
/* Auther                : Peter Essam                                    */
/* Version               : V1.0.0                                         */
/* Date                  : 19-5-2023                                      */
/* Description           : MNVIC_                              */
/* Features              :                                                */
/*           1- MNVIC_errInitSoftwareSystemPriority()                     */
/*           2- MNVIC_errEnablePerInterrupt()                             */
/*           3- MNVIC_errDisablePerInterrupt()                            */
/*           4- MNVIC_errSetPendingInterrupt()                            */
/*           5- MNVIC_errClearPeningInterrupt()                           */
/*           6- MNVIC_errIsInterruptActive()                              */
/*           7- MNVIC_errSetInterruptPriority()                           */
/**************************************************************************/

/**************************************************************************/
/*                       Standard Types                                   */
/**************************************************************************/

#include "LSTD_TYPES.h"
#include "LBIT_MATH.h"
#include "LERROR_STATES.h"

/**************************************************************************/
/*                            Peripherals Files                           */
/**************************************************************************/

#include "MNVIC_Private.h"
#include "MNVIC_Config.h"
#include "MNVIC_Interface.h"

/**************************************************************************/
/*                 MNVIC Functions implementation                         */
/**************************************************************************/


static MNVIC_SysPriority_t GLB_uddtSysPriority ;
ES_t MNVIC_errInitSoftwareSystemPriority(MNVIC_SysPriority_t Copy_uddtPriorityOption)
{
	GLB_uddtSysPriority  = Copy_uddtPriorityOption ;
	//TODO   -> Mariam
}

// Error state -> Yahya
ES_t MNVIC_errEnablePerInterrupt(u8 Copy_u8IntIndex)  //32
{
	MNVIC->ISER[Copy_u8IntIndex / 32]  = (1U << (Copy_u8IntIndex %32) )  ;
}
ES_t MNVIC_errDisablePerInterrupt(u8 Copy_u8IntIndex)
{
	MNVIC->ICER[Copy_u8IntIndex / 32]  = (1U << (Copy_u8IntIndex %32) )  ;
}
ES_t MNVIC_errSetPendingInterrupt(u8 Copy_u8IntIndex)
{
	MNVIC->ISPR[Copy_u8IntIndex / 32]  = (1U << (Copy_u8IntIndex %32) )  ;
}
ES_t MNVIC_errClearPeningInterrupt(u8 Copy_u8IntIndex)
{
	MNVIC->ICPR[Copy_u8IntIndex / 32]  = (1U << (Copy_u8IntIndex %32) )  ;
}
ES_t MNVIC_errIsInterruptActive(u8 Copy_u8IntIndex , u8* Copy_pu8ActiveStatus)
{
	//TODO   --> Ahmed Reda
}
ES_t MNVIC_errSetInterruptPriority(u8 Copy_u8IntIndex ,MNVIC_GPriority_t Copy_uddtGPriority ,MNVIC_SUBPriority_t  Copy_uddtSubGPriority )
{
	 // use this variable GLB_uddtSysPriority EX = 3 -> 16G , 0SG
	//TODO  --> Mina
}
