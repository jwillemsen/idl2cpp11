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
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

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
  constexpr uint16_t ush_val = 1023U;

  // generated from StubHeaderWriter#visit_const
  constexpr int32_t l_val = -81234;

  // generated from StubHeaderWriter#visit_const
  constexpr uint32_t ul_val = 81234UL;

  // generated from StubHeaderWriter#visit_const
  constexpr int64_t ll_val = -12345678LL;

  // generated from StubHeaderWriter#visit_const
  constexpr uint64_t ull_val = 12345678ULL;

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

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef int32_t TCounter;
  typedef int32_t_idl_t TCounter_idl_t; // IDL traits type-id

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef std::string TName;
  struct TName_idl_t {}; // IDL traits type-id

  // generated from StubHeaderWriter#visit_const
  constexpr TCounter count = 99;

  // generated from StubHeaderWriter#visit_const
  const TName name = "wilco";

  // generated from StubHeaderWriter#visit_const
  constexpr TCounter double_count = (::Test::count * 2);
}; // namespace Test


// generated from StubHeaderWriter#enter_interface

// generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_A_FWD_)
#define _INTF_A_FWD_
class A;
typedef A A_idl_t; // IDL traits typename
class A_proxy;
typedef A_proxy* A_proxy_ptr;
#endif // !_INTF_A_FWD_

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
#if !defined (_INTF_A_TRAITS_DECL_)
#define _INTF_A_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::A>::shared_ptr_type
    object_traits< ::A>::lock_shared (
        ::A* p);
    template<>
    const Object_proxy*
    object_traits< ::A>::to_proxy (
        object_traits< ::A>::ref_type);
    template<>
    object_traits< ::A>::ref_type
    object_traits< ::A>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

  namespace IDL
  {
    template<>
    struct traits < ::A> :
      public IDL::common_byval_traits <CORBA::object_reference < ::A>>,
      public CORBA::object_traits < ::A>
    {
      static constexpr bool local = false;
      static constexpr bool abstract = false;
    };
  };
};
#endif // !_INTF_A_TRAITS_DECL_

// generated from c++11/templates/cli/hdr/interface_pre.erb
class A
  : public virtual TAOX11_NAMESPACE::CORBA::Object
{
public:
  template <typename T> friend struct TAOX11_CORBA::object_traits;

  /// @name Member types
  //@{
  typedef TAOX11_NAMESPACE::IDL::traits< A> _traits_type;
  typedef TAOX11_NAMESPACE::IDL::traits< A>::ref_type _ref_type;
  //@}

  virtual const std::string& _interface_repository_id () const override;

  // generated from StubHeaderWriter#visit_const
  static constexpr float pi = 3.14159;

  // generated from c++11/templates/cli/hdr/interface_post.erb
protected:
  typedef std::shared_ptr<A>   _shared_ptr_type;

  template <typename _Tp1, typename, typename ...Args>
  friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

  explicit A (A_proxy_ptr p);
  explicit A (A_proxy_ptr p, bool);
  A ();
  ~A () = default;

private:
  A(const A&) = delete;
  A(A&&) = delete;
  A& operator=(const A&) = delete;
  A& operator=(A&&) = delete;
  A_proxy_ptr a_proxy_;
}; // A

// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace IDL {

    // generated from c++11/templates/cli/hdr/string_idl_traits.erb
    template<>
    struct traits < ::Test::TName_idl_t>
      : IDL::bounded_traits< std::string,
                             30U>,
        IDL::alias_traits< ::Test::TName_idl_t,
                           std::string>
    {
      typedef IDL::traits<char>     element_traits;
    };
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++11/templates/cli/hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::A>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
