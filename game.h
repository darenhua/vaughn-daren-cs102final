#ifndef GAME_H
#define GAME_H

#include <cstdlib>

class game
{
private:
  int turn;
  int health;

public:
  virtual size_t size() const = 0;

  virtual const int peek() const = 0;

  virtual void enqueue(const int &item) = 0;

  virtual int dequeue() = 0;
};

#endif
