// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_FGACAHJF_INCLUDED__
#define __RIDL_TESTC_H_FGACAHJF_INCLUDED__


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

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;
#endif // !_INTF_TEST_HELLO_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

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
      typedef std::false_type is_local;
      typedef std::false_type is_abstract;
    };
  };
};
#endif // !_INTF_TEST_HELLO_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FACTORY_FWD_)
#define _INTF_TEST_HELLO_FACTORY_FWD_
  class Hello_Factory;
  class Hello_Factory_proxy;
  typedef Hello_Factory_proxy* Hello_Factory_proxy_ptr;
#endif // !_INTF_TEST_HELLO_FACTORY_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_HELLO_FACTORY_TRAITS_DECL_)
#define _INTF_TEST_HELLO_FACTORY_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Hello_Factory>::shared_ptr_type
    object_traits< ::Test::Hello_Factory>::lock_shared (
        ::Test::Hello_Factory* p);
    template<>
    const Object_proxy*
    object_traits< ::Test::Hello_Factory>::to_proxy (
        object_traits< ::Test::Hello_Factory>::ref_type);
    template<>
    object_traits< ::Test::Hello_Factory>::ref_type
    object_traits< ::Test::Hello_Factory>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

  namespace IDL
  {
    template<>
    struct traits < ::Test::Hello_Factory> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Hello_Factory>>,
      public CORBA::object_traits < ::Test::Hello_Factory>
    {
      typedef std::false_type is_local;
      typedef std::false_type is_abstract;
    };
  };
};
#endif // !_INTF_TEST_HELLO_FACTORY_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  class Hello_Factory
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Hello_Factory>           _traits_type;
    typedef TAOX11_IDL::traits< Hello_Factory>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Hello_Factory::get_hello
    virtual TAOX11_IDL::traits< ::Test::Hello>::ref_type get_hello ();

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Hello_Factory::get_hello_2
    virtual void get_hello_2 (TAOX11_IDL::traits< ::Test::Hello>::ref_type& hello_obj);

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Hello_Factory>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Hello_Factory (Hello_Factory_proxy_ptr p);
    explicit Hello_Factory (Hello_Factory_proxy_ptr p, bool);
    Hello_Factory ();
    ~Hello_Factory () = default;

  private:
    Hello_Factory(const Hello_Factory&) = delete;
    Hello_Factory(Hello_Factory&&) = delete;
    Hello_Factory& operator=(const Hello_Factory&) = delete;
    Hello_Factory& operator=(Hello_Factory&&) = delete;
    Hello_Factory_proxy_ptr hello_factory_proxy_;
  }; // Hello_Factory

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  class Hello
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Hello>           _traits_type;
    typedef TAOX11_IDL::traits< Hello>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Hello::get_string
    virtual std::string get_string ();

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Hello::shutdown
    virtual void shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Hello>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Hello (Hello_proxy_ptr p);
    explicit Hello (Hello_proxy_ptr p, bool);
    Hello ();
    ~Hello () = default;

  private:
    Hello(const Hello&) = delete;
    Hello(Hello&&) = delete;
    Hello& operator=(const Hello&) = delete;
    Hello& operator=(Hello&&) = delete;
    Hello_proxy_ptr hello_proxy_;
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

// generated from c++11/templates/cli/hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Hello_Factory>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_FGACAHJF_INCLUDED__

// -*- END -*-
