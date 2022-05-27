/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "SCMext.h" /* Common files for all generated c-files */
#include "SCMxvar.h"  /* Var-images */

void P0 (void) /* œ–Œ÷≈——: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - —Œ—“ŒﬂÕ»≈: Start */
  
	Set_Start(1); 
	Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* œ–Œ÷≈——: ReceiveVMOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - —Œ—“ŒﬂÕ»≈: Start */

		if (GetNextMsgFromVM()) 
		{
			P1V0 = GetMsgCodeFromVM();
			switch (P1V0)
			{
				case C_4:
					Set_Start(2);
					break;
				default:
					break;
			}
		}
		
			break;
		default:
			break;
	}
}

void P2 (void) /* œ–Œ÷≈——: TestDriver */
{
	switch (Check_State(2)) {

		case 0:    /*  P2S0() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer1 */

		Set_Start(3);
		Set_State(2, 1);
			break;
		case 1:    /*  P2S1() - —Œ—“ŒﬂÕ»≈: IdilingTest1 */

		if (Timeout(2, C_0))  Set_State(2, 2);
			break;
		case 2:    /*  P2S2() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands1 */

		Set_Start(4);
		Set_State(2, 3);
			break;
		case 3:    /*  P2S3() - —Œ—“ŒﬂÕ»≈: IdilingTest2 */

		if (Timeout(2, C_0))  Set_State(2, 4);
			break;
		case 4:    /*  P2S4() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer2 */

		Set_Start(3);
		Set_State(2, 5);
			break;
		case 5:    /*  P2S5() - —Œ—“ŒﬂÕ»≈: IdilingTest3 */

		if (Timeout(2, C_0))  Set_State(2, 6);
			break;
		case 6:    /*  P2S6() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands2 */

		Set_Start(4);
		Set_State(2, 7);
			break;
		case 7:    /*  P2S7() - —Œ—“ŒﬂÕ»≈: IdilingTest4 */

		if (Timeout(2, C_0))  Set_State(2, 8);
			break;
		case 8:    /*  P2S8() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer3 */

		Set_Start(3);
		Set_State(2, 9);
			break;
		case 9:    /*  P2S9() - —Œ—“ŒﬂÕ»≈: IdilingTest5 */

		if (Timeout(2, C_0))  Set_State(2, 10);
			break;
		case 10:    /*  P2S10() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands3 */

		Set_Start(4);
		Set_State(2, 11);
			break;
		case 11:    /*  P2S11() - —Œ—“ŒﬂÕ»≈: IdilingTest6 */

		if (Timeout(2, C_0))  Set_State(2, 12);
			break;
		case 12:    /*  P2S12() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer4 */

		Set_Start(3);
		Set_State(2, 13);
			break;
		case 13:    /*  P2S13() - —Œ—“ŒﬂÕ»≈: IdilingTest7 */

		if (Timeout(2, C_0))  Set_State(2, 14);
			break;
		case 14:    /*  P2S14() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands4 */

		Set_Start(4);
		Set_State(2, 15);
			break;
		case 15:    /*  P2S15() - —Œ—“ŒﬂÕ»≈: IdilingTest8 */

		if (Timeout(2, C_0))  Set_State(2, 16);
			break;
		case 16:    /*  P2S16() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer5 */

		Set_Start(3);
		Set_State(2, 17);
			break;
		case 17:    /*  P2S17() - —Œ—“ŒﬂÕ»≈: IdilingTest9 */

		if (Timeout(2, C_0))  Set_State(2, 18);
			break;
		case 18:    /*  P2S18() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands5 */

		Set_Start(4);
		Set_State(2, 19);
			break;
		case 19:    /*  P2S19() - —Œ—“ŒﬂÕ»≈: IdilingTest10 */

		if (Timeout(2, C_0))  Set_State(2, 20);
			break;
		case 20:    /*  P2S20() - —Œ—“ŒﬂÕ»≈: RunTestHandsUnderDryer6 */

		Set_Start(3);
		Set_State(2, 21);
			break;
		case 21:    /*  P2S21() - —Œ—“ŒﬂÕ»≈: IdilingTest11 */

		if (Timeout(2, C_0))  Set_State(2, 22);
			break;
		case 22:    /*  P2S22() - —Œ—“ŒﬂÕ»≈: RunTestRemoveHands6 */

		Set_Start(4);
		Set_State(2, 23);
			break;
		case 23:    /*  P2S23() - —Œ—“ŒﬂÕ»≈: IdilingTest12 */

		if (Timeout(2, C_0))  Set_State(2, 24);
			break;
		case 24:    /*  P2S24() - —Œ—“ŒﬂÕ»≈: Finish */

		SendMsgToVerificationModuleCode(C_3);
		Set_Stop(2);
			break;
		default:
			break;
	}
}

void P3 (void) /* œ–Œ÷≈——: TestHandsUnderDryer */
{
	switch (Check_State(3)) {

		case 0:    /*  P3S0() - —Œ—“ŒﬂÕ»≈: Start */

		SendMsgToVirtualPlantCode(C_1);
		Set_State(3, 1);
			break;
		case 1:    /*  P3S1() - —Œ—“ŒﬂÕ»≈: Idiling */

		
			break;
		default:
			break;
	}
}

void P4 (void) /* œ–Œ÷≈——: TestRemoveHands */
{
	switch (Check_State(4)) {

		case 0:    /*  P4S0() - —Œ—“ŒﬂÕ»≈: Start */

		SendMsgToVirtualPlantCode(C_2);
		Set_State(4, 1);
			break;
		case 1:    /*  P4S1() - —Œ—“ŒﬂÕ»≈: Idiling */

		
			break;
		default:
			break;
	}
}
