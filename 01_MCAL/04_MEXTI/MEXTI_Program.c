/***********************************************************************************************************/
/* Author :                           Mohamed Yehia El-Greatly                                             */
/* Description :                         MEXTI_Program.c                                                   */
/***********************************************************************************************************/
/* Version :V1.0.0                                                                                         */
/* Date :     19 May 2023                                                                                  */
/***********************************************************************************************************/

/***********************************************************************************************************/
/*                                          Include  LIB Files                                             */
/***********************************************************************************************************/
#include  "LSTD_TYPES.h"
#include  "LBIT_MATH.h"
#include  "LERROR_STATES.h"
/***********************************************************************************************************/
/*                                        Include Peripherals Files                                        */
/***********************************************************************************************************/

#include  "MEXTI_Private.h"
#include  "MEXTI_Config.h"
#include  "MEXTI_Interface.h"

/***********************************************************************************************************/
/*                                      MEXTI  Functions implementation                                    */
/***********************************************************************************************************/


ES_t       MEXTI_errInit(void)
{
// TODO -> Ghada with config File
}
ES_t       MEXTI_errEnableExtiLine(u8 Copy_u8Line)
{
// TODO  -> Kirllos
}

ES_t       MEXTI_errDisableExtiLine(u8 Copy_u8Line)            ;
{
	// TODO  -> Kirllos
}
ES_t       MEXTI_errSetSoftwareExtiLine(u8 Copy_u8Line)
{
// TODO -> Mousa
}
ES_t       MEXTI_errSetCallBackEXTI0(void (*PFunc) (void))
{
// TODO  -> Mohamed Said
}
ES_t       MEXTI_errSetCallBackEXTI1(void (*PFunc) (void))
{
// TODO  -> Mohamed Said
}
ES_t       MEXTI_errSetSenseLevel(u8 Copy_u8Line , EXTI_Sense_t Copy_uddtSenseType)
{
// TODO    -> Ahmed Reda
}


void EXTI0_IRQHandler(void)
{
	// TODO  -> Mohamed Said

}
void EXTI1_IRQHandler(void)
{
	// TODO  -> Mohamed Said

}
