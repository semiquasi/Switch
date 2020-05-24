#include <inttypes.h>

#ifndef _BASE_BUTTON_H
#define _BASE_BUTTON_H

class BaseButton
{
public:
  BaseButton* next() const { return m_next; };
  void setNext(BaseButton* next) { m_next = next; }

private:
  BaseButton* m_next;
};

#endif
