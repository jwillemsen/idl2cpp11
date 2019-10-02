/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        Duiven, GLD
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_BHEACGDA_INCLUDED__
#define __RIDL_TESTC_H_BHEACGDA_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.8.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;
#endif // !_INTF_TEST_HELLO_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits
#if !defined (_INTF_TEST_HELLO_TRAITS_DECL_)
#define _INTF_TEST_HELLO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Hello>::shared_ptr_type
    object_traits< ::Test::Hello>::lock_shared (
        ::Test::Hello* p);
    template<>
    object_traits< ::Test::Hello>::ref_type
    object_traits< ::Test::Hello>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits < ::Test::Hello> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Hello>>,
      public CORBA::object_traits < ::Test::Hello>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      typedef std::false_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;

      template <typename OStrm_, typename Formatter = formatter< ::Test::Hello, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_TEST_HELLO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre
  /// @copydoc test.idl::Test::Hello
  class Hello
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Hello>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Hello>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Hello::get_string
    virtual
    std::string
    get_string ();

    // generated from c++11/templates/cli/hdr/interface_post
  protected:
    typedef std::shared_ptr<Hello> _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Hello (Hello_proxy_ptr p, bool inherited = false);
    /// Default constructor
    Hello () = default;
    /// Destructor
    ~Hello () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Hello(const Hello&) = delete;
    Hello(Hello&&) = delete;
    Hello& operator=(const Hello&) = delete;
    Hello& operator=(Hello&&) = delete;
    //@}
    Hello_proxy_ptr hello_proxy_ {};
  }; // class Hello
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/interface_idl_traits
#if !defined (_INTF_FMT_TEST_HELLO_TRAITS_DECL_)
#define _INTF_FMT_TEST_HELLO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Hello, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          IDL::traits< ::Test::Hello>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Hello>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_HELLO_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Hello, OStrm_>::operator ()(
          OStrm_& os_,
          IDL::traits< ::Test::Hello>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               std::move (val_),
               "Test::Hello");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Hello>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Hello>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Hello, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Hello>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/hdr/interface_os
inline std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::Test::Hello>::ref_type _v)
{
  return IDL::traits< ::Test::Hello>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_BHEACGDA_INCLUDED__ */

// -*- END -*-
