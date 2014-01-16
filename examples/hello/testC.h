// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_IJFDAIJH_INCLUDED__
#define __RIDL_TESTC_H_IJFDAIJH_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.3.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc Test
namespace Test
{

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;
#endif // !_INTF_TEST_HELLO_FWD_
  // generated from Base::CodeWriter#at_global_scope
}; // Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
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
    const Object_proxy*
    object_traits< ::Test::Hello>::to_proxy (
        object_traits< ::Test::Hello>::ref_type);
    template<>
    object_traits< ::Test::Hello>::ref_type
    object_traits< ::Test::Hello>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

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
    };
  };
};
#endif // !_INTF_TEST_HELLO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  /// @copydoc Test::Hello
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

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Hello::get_string
    virtual std::string get_string ();

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Hello::shutdown
    virtual void shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Hello>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Hello (Hello_proxy_ptr p);
    explicit Hello (Hello_proxy_ptr p, bool);
    /// Default constructor
    Hello ();
    /// Destructor
    ~Hello () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Hello(const Hello&) = delete;
    Hello(Hello&&) = delete;
    Hello& operator=(const Hello&) = delete;
    Hello& operator=(Hello&&) = delete;
    Hello_proxy_ptr hello_proxy_;
    //@}
  }; // Hello
}; // namespace Test


// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {
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
    TAOX11_IDL::traits< ::Test::Hello>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_IJFDAIJH_INCLUDED__ */

// -*- END -*-
