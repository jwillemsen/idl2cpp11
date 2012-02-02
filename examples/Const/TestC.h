// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_INCLUDED__
#define __RIDL_TESTC_H_INCLUDED__

#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from StubHeaderWriter#visit_const
  constexpr char ch_val = 'a';

  // generated from StubHeaderWriter#visit_const
  constexpr wchar_t wch_val = L'X';

  // generated from StubHeaderWriter#visit_const
  constexpr uint8_t oct_val = 123;

  // generated from StubHeaderWriter#visit_const
  constexpr int16_t sh_val = -1023;

  // generated from StubHeaderWriter#visit_const
  constexpr uint16_t ush_val = 1023;

  // generated from StubHeaderWriter#visit_const
  constexpr int32_t l_val = -81234;

  // generated from StubHeaderWriter#visit_const
  constexpr uint32_t ul_val = 81234;

  // generated from StubHeaderWriter#visit_const
  constexpr int64_t ll_val = -12345678;

  // generated from StubHeaderWriter#visit_const
  constexpr uint64_t ull_val = 12345678;

  // generated from StubHeaderWriter#visit_const
  constexpr float f_val = 1.23;

  // generated from StubHeaderWriter#visit_const
  constexpr double d_val = 454.23;

  // generated from StubHeaderWriter#visit_const
  constexpr long double ld_val = 678.91;

  // generated from StubHeaderWriter#visit_const
  constexpr bool b_val = true;

  // generated from StubHeaderWriter#visit_const
  const std::string s_val = "text";

  // generated from StubHeaderWriter#visit_const
  const std::wstring ws_val = L"widestring\n \xbf \xfe0e";

  // generated from c++/cli_hdr/typedef.erb
  typedef int32_t TCounter;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::string TName;

  // generated from StubHeaderWriter#visit_const
  constexpr TCounter count = 99;

  // generated from StubHeaderWriter#visit_const
  const TName name = "wilco";

  // generated from StubHeaderWriter#visit_const
  constexpr TCounter double_count = (Test::count * 2);
}; // namespace Test


// generated from StubHeaderWriter#enter_interface

// generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_A_FWD_)
#define _INTF_A_FWD_
class A;
class A_proxy;
typedef A_proxy* A_proxy_ptr;
namespace POA
{
  class A;
};
#endif // !_INTF_A_FWD_

// generated from c++/cli_hdr/interface_object_traits.erb
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    void
    object_traits<A>::destroy (
        A*);
    template<>
    const Object_proxy*
    object_traits<A>::to_proxy (
        const object_traits<A>::ref_type&);
    template<>
    object_traits<A>::ref_type object_traits<A>::narrow (
    	 const object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type&);
  };
};

// generated from c++/cli_hdr/interface_pre.erb
class A
  : public virtual TAOX11_NAMESPACE::CORBA::Object
{
public:
  friend struct TAOX11_CORBA::object_traits< A>;

  typedef TAOX11_CORBA::object_traits< A> _traits_type;
  typedef TAOX11_CORBA::object_reference< A> _ref_type;

  virtual const std::string& _interface_repository_id () const override;

  // generated from StubHeaderWriter#visit_const
  static constexpr float pi = 3.14159;

  // generated from c++/cli_hdr/interface_post.erb
  static TAOX11_CORBA::object_reference< A> narrow (
      const TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object>& obj)
  {
    return TAOX11_CORBA::object_traits< A>::narrow (obj);
  }

  explicit A (A_proxy_ptr p);
protected:
  explicit A (A_proxy_ptr p, bool);
  A (void);

private:
  A(const A&) = delete;
  A& operator=(const A&) = delete;
  A_proxy_ptr a_proxy_;
}; // A

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/inline.erb
#include "TestC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
