// $Id$

#include "testC.h"

class Foo_impl : public virtual Test::Foo
{
public:
  virtual void do_something (void) override;
};