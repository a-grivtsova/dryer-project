/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "CAext.h" /* Common files for all generated c-files */
#include "CAxvar.h"  /* Var-images */

void P0 (void) /* �������: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - ���������: Functioning */
  
	if (P0V0 == C_0) 
	{
		P0V1[1] = C_0;		
		Set_State(0, 1);						
	}
	else P0V1[1] = C_1;
			break;
		case 1:    /*  P0S1() - ���������: Drying */
  
	if (P0V0 == C_0) Set_State(0, 1);
	if (Timeout(0, 10))  
	 {	
		Set_State(0, 0);
	 }
			break;
		default:
			break;
	}
}
