// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_IBDACADF_INCLUDED__
#define __RIDL_TESTC_H_IBDACADF_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/array_os_t.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++11/templates/cli/hdr/typedef.erb
  typedef std::array< float, 10 > F;

  // generated from c++11/templates/cli/hdr/typedef.erb
  typedef std::array< std::string, 10 > V;

  // generated from c++11/templates/cli/hdr/typedef.erb
  typedef std::array< std::array< std::array< std::string, 3 >, 2 >, 1 > M;

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
#endif // !_INTF_TEST_FOO_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
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
      typedef std::false_type is_local;
      typedef std::false_type is_abstract;
    };
  };
};
#endif // !_INTF_TEST_FOO_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Foo>           _traits_type;
    typedef TAOX11_IDL::traits< Foo>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Foo::op
    virtual void op (const ::Test::F& p1,
             ::Test::V& p2,
             ::Test::M& p3);

    // generated from c++11/templates/cli/hdr/interface_post.erb
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
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/array_idl_traits.erb
    // Unaliased type : std::array< float, 10 >
    // MD5            : ABF04919D09ABF9A218FEAC04AA202DD
#if !defined(_ALIAS_ABF04919D09ABF9A218FEAC04AA202DD_TRAITS_DECL_)
#define _ALIAS_ABF04919D09ABF9A218FEAC04AA202DD_TRAITS_DECL_

    template<>
    struct traits < ::Test::F>
      : IDL::common_traits< ::Test::F>
    {
      typedef IDL::traits< float> element_traits;
      typedef std::integral_constant<uint32_t, 1> dimensions;
    };

#endif

    // generated from c++11/templates/cli/hdr/array_idl_traits.erb
    // Unaliased type : std::array< std::string, 10 >
    // MD5            : 0586A70043E3B0103619F928C5EC3EA6
#if !defined(_ALIAS_0586A70043E3B0103619F928C5EC3EA6_TRAITS_DECL_)
#define _ALIAS_0586A70043E3B0103619F928C5EC3EA6_TRAITS_DECL_

    template<>
    struct traits < ::Test::V>
      : IDL::common_traits< ::Test::V>
    {
      typedef IDL::traits< std::string> element_traits;
      typedef std::integral_constant<uint32_t, 1> dimensions;
    };

#endif

    // generated from c++11/templates/cli/hdr/array_idl_traits.erb
    // Unaliased type : std::array< std::array< std::array< std::string, 3 >, 2 >, 1 >
    // MD5            : BA0460710F246455F8D8DCE031B10605
#if !defined(_ALIAS_BA0460710F246455F8D8DCE031B10605_TRAITS_DECL_)
#define _ALIAS_BA0460710F246455F8D8DCE031B10605_TRAITS_DECL_

    template<>
    struct traits < ::Test::M>
      : IDL::common_traits< ::Test::M>
    {
      typedef IDL::traits< std::string> element_traits;
      typedef std::integral_constant<uint32_t, 3> dimensions;
    };

#endif
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++11/templates/cli/hdr/array_os.erb
// Unaliased type : std::array< float, 10 >
// MD5            : ABF04919D09ABF9A218FEAC04AA202DD
#if !defined (_ALIAS_OSTREAM_ABF04919D09ABF9A218FEAC04AA202DD_DECL_)
#define _ALIAS_OSTREAM_ABF04919D09ABF9A218FEAC04AA202DD_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::F& _v)
{
  strm << "std::array< float, 10 >";
  return taox11_array_printer<0U,
                              ::Test::F::value_type,
                              10>::p (strm, _v);
}

#endif // _ALIAS_OSTREAM_ABF04919D09ABF9A218FEAC04AA202DD_DECL_

// generated from c++11/templates/cli/hdr/array_os.erb
// Unaliased type : std::array< std::string, 10 >
// MD5            : 0586A70043E3B0103619F928C5EC3EA6
#if !defined (_ALIAS_OSTREAM_0586A70043E3B0103619F928C5EC3EA6_DECL_)
#define _ALIAS_OSTREAM_0586A70043E3B0103619F928C5EC3EA6_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::V& _v)
{
  strm << "std::array< std::string, 10 >";
  return taox11_array_printer<0U,
                              ::Test::V::value_type,
                              10>::p (strm, _v);
}

#endif // _ALIAS_OSTREAM_0586A70043E3B0103619F928C5EC3EA6_DECL_

// generated from c++11/templates/cli/hdr/array_os.erb
// Unaliased type : std::array< std::array< std::array< std::string, 3 >, 2 >, 1 >
// MD5            : BA0460710F246455F8D8DCE031B10605
#if !defined (_ALIAS_OSTREAM_BA0460710F246455F8D8DCE031B10605_DECL_)
#define _ALIAS_OSTREAM_BA0460710F246455F8D8DCE031B10605_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::M& _v)
{
  strm << "std::array< std::array< std::array< std::string, 3 >, 2 >, 1 >";
  return taox11_array_printer<2U,
                              ::Test::M::value_type,
                              1>::p (strm, _v);
}

#endif // _ALIAS_OSTREAM_BA0460710F246455F8D8DCE031B10605_DECL_

// generated from c++11/templates/cli/hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Foo>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_IBDACADF_INCLUDED__

// -*- END -*-
