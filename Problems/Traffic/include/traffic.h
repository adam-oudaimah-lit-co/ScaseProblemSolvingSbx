//--------------------------------------------------------------------------
/// \file
///
/// \brief  Problem solving exercise - Traffic problem header file.
///
/// \author Alaa Jarad (a.jarad@lit-co.net)
/// \date   11.5.2018
/// \version 0.1
/// \copyright (c) SCASE GmbH 2015
//--------------------------------------------------------------------------



#ifndef TRAFFIC_H
#define TRAFFIC_H

/*--------------------------------------------------------------------------*/
/* Includes                                                                 */
/*--------------------------------------------------------------------------*/

// system includes
#include <vector>

// project includes


/*****************************************************************************/
/* Class Definition
/**
*
*   \brief Traffic problem header file.
*   \note You are free to add any function you find necessary to this class.
*/
/*****************************************************************************/
class Traffic
{
public:

  // Note: you should implement this function in the cpp file.
  // Note: you are not allowed to modify the signature of this function.
  static std::string Light(const std::vector<int> &sequence);
};

#endif // TRAFFIC_H