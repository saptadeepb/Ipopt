// Copyright (C) 2004, International Business Machines and others.
// All Rights Reserved.
// This code is published under the Common Public License.
//
// $Id$
//
// Authors:  Carl Laird, Andreas Waechter     IBM    2004-08-13

#ifndef __IPTYPES_HPP__
#define __IPTYPES_HPP__

#include "config.h"

namespace Ipopt
{

  typedef double Number;
  typedef int Index;
  typedef int Int;

  enum ApplicationReturnStatus
  {
    Solve_Succeeded,
    Maximum_Iterations_Exceeded,
    Solve_Failed,
    NonIpopt_Exception_Thrown,
    Insufficient_Memory,
    Internal_Error
  };

} // namespace Ipopt

// external to the Ipopt namespace
typedef int ipfint;

#endif
