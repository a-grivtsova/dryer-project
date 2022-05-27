#include <stdio.h>
#include "SCM_id.h"
main () {
	int i;
	FILE * file;
	char string[2 * 132];
	file = fopen("SCM_constants.cfg","w");
	i = TestIdling; /* C_0 - TestIdling */
	fputs( "TestIdling = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_INSERT_HANDS; /* SCM2VP_INSERT_HANDS */
	fputs( "SCM2VP_INSERT_HANDS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VP_TAKE_AWAY_HANDS; /* SCM2VP_TAKE_AWAY_HANDS */
	fputs( "SCM2VP_TAKE_AWAY_HANDS = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = SCM2VM_FINISH_VERIFICATION; /* SCM2VM_FINISH_VERIFICATION */
	fputs( "SCM2VM_FINISH_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	i = VM2SCM_START_VERIFICATION; /* VM2SCM_START_VERIFICATION */
	fputs( "VM2SCM_START_VERIFICATION = " , file);
	sprintf(string, "%d\n", i );
	fputs( string, file);

 	fclose(file);
}
