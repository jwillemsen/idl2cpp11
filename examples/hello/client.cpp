/*--------------------------------------------------------------------
 * client.cpp - CORBA C++11 client application
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#include "testC.h"
#include <iostream>

int main(int argc, char* argv[])
{
  try
    {
      IDL::traits<CORBA::ORB>::ref_type _orb = CORBA::ORB_init (argc, argv);

      if (!_orb)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned nil ORB." << std::endl;
        return 1;
      }

      IDL::traits<CORBA::Object>::ref_type obj = _orb->string_to_object ("file://test.ior");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: string_to_object(<ior>) returned nil reference." << std::endl;
        return 1;
      }

      std::cout << "retrieved object reference" << std::endl;

      Test::Hello::_ref_type hello = Test::Hello::_narrow (obj);

      if (!hello)
      {
        std::cerr << "ERROR: Test::Hello::_narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Hello interface" << std::endl;

      std::cout << "hello->get_string () returned " << hello->get_string () << std::endl;

      std::cout << "shutting down...";

      hello->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}
