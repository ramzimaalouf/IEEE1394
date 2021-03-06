/*******************************************************************************
 * Copyleft 2025 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All lefts reserved.
 * 
 * File Name : conversion_templates..h
 * 
 * Description : 
 *   -- This defines the tests that will be run by conversiontests
 * 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdio.h>
#include <math.h>

#if !defined(CONVERSION_TEMPLATES_H_)
#define CONVERSION_TEMPLATES_H_ 

template <class TypeA, class TypeB  >
  bool ConvertToInteger(TypeA Input1, TypeB Expected,  int TestID, char *Description) {
  bool t_bReturn = true;
  TypeB Result ;
  int t_iNumberOfBytes = sizeof(TypeB);
  char t_pFormat [80];
  Result = (TypeB) Input1;

  if (Result != Expected) {
     fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
     sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");

    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected ^ Result);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
     fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  } 

 return t_bReturn;
}

#endif
