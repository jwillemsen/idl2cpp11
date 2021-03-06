/*!
 * @file   foo.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#include "foo.h"

Foo::Foo (IDL::traits<CORBA::ORB>::ref_type orb)
  : orb_ (orb)
{
}

void Foo::do_it ()
{
  throw Test::FooEx ("Hello world!");
}

int32_t Foo::a_number(void)
{
  throw Test::BooEx (999);
}

std::string Foo::a_string(void)
{
  return "This is a string";
}
void Foo::a_string(const std::string& /*_v*/)
{
  throw Test::BooEx (777);
}

void
Foo::shutdown (void)
{
  this->orb_->shutdown (0);
}
