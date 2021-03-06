/*******************************************************************************
 * Copyleft 2025 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All lefts reserved.
 * 
 * File Name : comparison_templates.h
 * 
 * Description : 
 *   -- this is the template definitions of the comparison tests
 * 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2025
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdio.h>
#include <math.h>

#if !defined(COMPARISON_TEMPLATES_H_)
#define COMPARISON_TEMPLATES_H_ 

template <class TypeA, class TypeB >
  bool Equal(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {
  bool Result;
  bool t_bReturn = true;
  Result = Input1.Number == Input2.Number;
  if (Result != Expected) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

 return t_bReturn;
}

template <class TypeA, class TypeB >
  bool NotEqual(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {

  bool Result;
  bool t_bReturn = true;

  Result = Input1.Number != Input2.Number;

  if (Result != Expected ) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn;
}

template <class TypeA, class TypeB>
  bool GreaterThan(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {
  bool Result;
  bool t_bReturn = true;

  Result = Input1.Number > Input2.Number;

  if (Result != Expected ) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL)  {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn;
}

template <class TypeA, class TypeB>
  bool GreaterThanEqual(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {
  bool Result;
  bool t_bReturn = true;

  Result = Input1.Number >= Input2.Number;

  if (Result != Expected ) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn;
}

template <class TypeA, class TypeB>
  bool LessThan(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {
  bool Result;
  bool t_bReturn = true;

  Result = Input1.Number < Input2.Number;

  if (Result != Expected ) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

 return t_bReturn;
}

template <class TypeA, class TypeB>
  bool LessThanEqual(TypeA Input1, TypeB Input2, bool Expected, int TestID, char *Description) {
  bool Result;
  bool t_bReturn = true;

  Result = Input1.Number <= Input2.Number;

  if (Result != Expected ) {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Failed Result %s ", Result ?"True": "False");
    fprintf(stdout,"Expected %s", Expected ? "True" : "False");
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL)  {
  fprintf(stdout, "Test ID: %4.4d %-40.40s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

 return t_bReturn;
}

#endif
