#ifndef SHIP_H
#define SHIP_H

#include <cstdlib>
#include "Carrier.h"

using namespace std;

// Battleship : public Ship: Largest, 5 spaces
class Battleship : public Ship
{
public:
  /**
   * @brief Construct a new Ship object, no arg
   *
   */
  Battleship();

  /**
   * @brief Construct a new Ship object with its location
   *
   * @param position
   */
  Battleship();
};

#endif
