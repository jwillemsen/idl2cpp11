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

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< float, 10 > F;
  struct F_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< std::string, 10 > V;
  struct V_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< std::array< std::array< std::string, 3 >, 2 >, 1 > M;
  struct M_idl_t {}; // IDL traits type-id

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  typedef Foo Foo_idl_t; // IDL traits typename
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
  namespace POA
  {
    class Foo;
  };
#endif // !_INTF_TEST_FOO_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_FOO_TRAITS_DECL_)
#define _INTF_TEST_FOO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Foo>::shared_ptr_type
    object_traits< ::Test::Foo>::lock_shared (
        ::Test::Foo* p);
    template<>
    const Object_proxy*
    object_traits< ::Test::Foo>::to_proxy (
        object_traits< ::Test::Foo>::ref_type);
    template<>
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

  namespace IDL
  {
    template<>
    struct traits < ::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Foo>>,
      public CORBA::object_traits < ::Test::Foo>
    {
      static constexpr bool local = false;
      static constexpr bool abstract = false;
    };
  };
};
#endif // !_INTF_TEST_FOO_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_NAMESPACE::IDL::traits< Foo> _traits_type;
    typedef TAOX11_NAMESPACE::IDL::traits< Foo>::ref_type _ref_type;
    //@}

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::op
    virtual void op (const ::Test::F& p1,
             ::Test::V& p2,
             ::Test::M& p3);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_NAMESPACE::IDL::traits< Foo>::ref_type _narrow (
        TAOX11_NAMESPACE::IDL::traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type _taox11_obj)
    {
      return TAOX11_NAMESPACE::IDL::traits< Foo>::narrow (_taox11_obj);
    }

  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p);
    explicit Foo (Foo_proxy_ptr p, bool);
    Foo ();
    ~Foo () = default;

  private:
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo
}; // namespace Test


// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace IDL {

    // generated from c++/cli_hdr/array_idl_traits.erb
    template<>
    struct traits < ::Test::F_idl_t>
      : IDL::common_traits< ::Test::F>,
        IDL::alias_traits< ::Test::F_idl_t,
                           ::Test::F>
    {
      typedef IDL::traits< ::float_idl_t>  element_traits;
      static constexpr uint32_t dimensions = 1;
    };

    // generated from c++/cli_hdr/array_idl_traits.erb
    template<>
    struct traits < ::Test::V_idl_t>
      : IDL::common_traits< ::Test::V>,
        IDL::alias_traits< ::Test::V_idl_t,
                           ::Test::V>
    {
      typedef IDL::traits< ::std::string_idl_t>  element_traits;
      static constexpr uint32_t dimensions = 1;
    };

    // generated from c++/cli_hdr/array_idl_traits.erb
    template<>
    struct traits < ::Test::M_idl_t>
      : IDL::common_traits< ::Test::M>,
        IDL::alias_traits< ::Test::M_idl_t,
                           ::Test::M>
    {
      typedef IDL::traits< ::std::string_idl_t>  element_traits;
      static constexpr uint32_t dimensions = 3;
    };
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/array_os.erb
#if !defined (__TAOX11_OSSTREAM_STD_ARRAY_FLOAT_10__DECL__)
#define __TAOX11_OSSTREAM_STD_ARRAY_FLOAT_10__DECL__

#define __TAOX11_OSSTREAM_TEST_F_IMPL__
std::ostream&
taox11_print_Test_F (
    std::ostream& strm ,
    const ::Test::F& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::F& _v)
{
  return taox11_print_Test_F (strm, _v);
}

#endif // __TAOX11_OSSTREAM_STD_ARRAY_FLOAT_10__DECL__

// generated from c++/cli_hdr/array_os.erb
#if !defined (__TAOX11_OSSTREAM_STD_ARRAY_STD_STRING_10__DECL__)
#define __TAOX11_OSSTREAM_STD_ARRAY_STD_STRING_10__DECL__

#define __TAOX11_OSSTREAM_TEST_V_IMPL__
std::ostream&
taox11_print_Test_V (
    std::ostream& strm ,
    const ::Test::V& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::V& _v)
{
  return taox11_print_Test_V (strm, _v);
}

#endif // __TAOX11_OSSTREAM_STD_ARRAY_STD_STRING_10__DECL__

// generated from c++/cli_hdr/array_os.erb
#if !defined (__TAOX11_OSSTREAM_STD_ARRAY_STD_ARRAY_STD_ARRAY_STD_STRING_3_2_1__DECL__)
#define __TAOX11_OSSTREAM_STD_ARRAY_STD_ARRAY_STD_ARRAY_STD_STRING_3_2_1__DECL__

#define __TAOX11_OSSTREAM_TEST_M_IMPL__
std::ostream&
taox11_print_Test_M (
    std::ostream& strm ,
    const ::Test::M& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::M& _v)
{
  return taox11_print_Test_M (strm, _v);
}

#endif // __TAOX11_OSSTREAM_STD_ARRAY_STD_ARRAY_STD_ARRAY_STD_STRING_3_2_1__DECL__

// generated from c++/cli_hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_NAMESPACE::IDL::traits< ::Test::Foo>::ref_type);

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
