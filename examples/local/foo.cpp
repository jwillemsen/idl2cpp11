/*!
 * @file   foo.cpp
 * @author
 *
 * @brief  CORBA C++11
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "foo.h"

void
Foo_impl::do_something (void)
{
  // Call operation on bar which needs a
  // reference to this local object
  IDL::traits<Test::Bar>::ref_type bar;
  bar->do_foo (this->_this ());
}
