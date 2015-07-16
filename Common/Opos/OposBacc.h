/////////////////////////////////////////////////////////////////////
//
// OposBacc.h
//
//   Bill Acceptor header file for OPOS Applications.
//
// Modification history
// ------------------------------------------------------------------
// 2007-01-30 OPOS Release 1.11                                  CRM
//
/////////////////////////////////////////////////////////////////////

#if !defined(OPOSBACC_H)
#define      OPOSBACC_H


#include "Opos.h"


/////////////////////////////////////////////////////////////////////
// "FullStatus" Property Constants
// "StatusUpdateEvent" Event Constants
/////////////////////////////////////////////////////////////////////

const LONG BACC_STATUS_OK               = 0;    // FullStatus

const LONG BACC_STATUS_FULL             = 21;   // FullStatus, StatusUpdateEvent
const LONG BACC_STATUS_NEARFULL         = 22;   // FullStatus, StatusUpdateEvent
const LONG BACC_STATUS_FULLOK           = 23;   // StatusUpdateEvent

const LONG BACC_STATUS_JAM              = 31;   // StatusUpdateEvent
const LONG BACC_STATUS_JAMOK            = 32;   // StatusUpdateEvent


/////////////////////////////////////////////////////////////////////
// "DepositStatus" Property Constants
/////////////////////////////////////////////////////////////////////

const LONG BACC_STATUS_DEPOSIT_START    = 1;
const LONG BACC_STATUS_DEPOSIT_END      = 2;
const LONG BACC_STATUS_DEPOSIT_COUNT    = 4;
const LONG BACC_STATUS_DEPOSIT_JAM      = 5;


/////////////////////////////////////////////////////////////////////
// "EndDeposit" Method: "Success" Parameter Constants
/////////////////////////////////////////////////////////////////////

const LONG BACC_DEPOSIT_COMPLETE        = 11;


/////////////////////////////////////////////////////////////////////
// "PauseDeposit" Method: "Control" Parameter Constants
/////////////////////////////////////////////////////////////////////

const LONG BACC_DEPOSIT_PAUSE           = 11;
const LONG BACC_DEPOSIT_RESTART         = 12;


#endif                  // !defined(OPOSBACC_H)
