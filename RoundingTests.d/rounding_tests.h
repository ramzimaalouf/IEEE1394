/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : rounding_tests.h
 * 
 * Description : 
 *   -- This class definition of the RoundTests class
 *
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/
#if !defined(ROUNDING_TESTS_H_)
#define ROUNDING_TESTS_H_

class RoundingTests
{
 public:
  RoundingTests(const int TestType);
  ~RoundingTests();

  bool RunAll ();

  bool ReturnConstructionStatus () const;
 private:
  bool RunFloatRounding();
  bool RunFloatsSubset(FloatTestDescription *InFloatDescriptors) const; 
  bool RunDoubleSubset(DoubleTestDescription *InDoubleDescriptors) const; 
  bool RunDoubleRounding();
  bool RunLongDoubleRounding();
  char m_cRoundingTypeString[32] ;
  int m_iTestType = -1;
  FloatTestDescription *m_FloatTestDescriptions = NULL;
  DoubleTestDescription *m_DoubleTestDescriptions = NULL;
  int m_iTestOffset = 0;
  bool m_bConstructionStatus = false;

};

#endif
