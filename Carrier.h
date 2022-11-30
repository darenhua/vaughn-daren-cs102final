#ifndef SHIP_H
#define SHIP_H

#include <cstdlib>
#include <vector>
using namespace std;

// Ship
class Ship
{
protected:
  int size;
  int health;
  vector<vector<int>> position;

public:
  /**
   * @brief Construct a new Ship object, no arg
   *
   */
  Ship();

  /**
   * @brief Construct a new Ship object with its location
   *
   * @param position
   */
  Ship(vector<int> position);
};

#endif
