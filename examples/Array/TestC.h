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

#include "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< float, 10 > F;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< std::string, 10 > V;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::array< std::array< std::array< std::string, 3 >, 2 >, 1 > M;

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo_stub;
  class Foo_skel;
  template <typename T> class Foo_ref;
  template <typename T> class Foo_srvref;
  typedef Foo_ref <Foo_stub> Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;

  struct Foo_traits
  {
    typedef Foo_stub stub_type;
    typedef Foo ref_type;
    typedef ref_type* ptr_type;
    typedef const ref_type* const_ptr_type;
    typedef TAOX11_NAMESPACE::ObjVar_T<Foo_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const TAOX11_NAMESPACE::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_FOO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo_stub
    : public virtual TAOX11_NAMESPACE::CORBA::Object_stub
  {
  public:
    friend class Foo_ref <Foo_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    void op (const Test::F& p1,
             Test::V& p2,
             Test::M& p3);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Foo_stub (Foo_proxy_ptr p);
  protected:
    explicit Foo_stub (Foo_proxy_ptr p, bool);
    Foo_stub (void);
    static Foo_stub* narrow (TAOX11_NAMESPACE::CORBA::Object_stub* obj);

  private:
    Foo_stub(const Foo_stub&) = delete;
    Foo_stub& operator=(const Foo_stub&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Foo_ref : public TAOX11_NAMESPACE::CORBA::ObjRef_T<T>
  {
  public:
    explicit Foo_ref (T *s = nullptr);
    Foo_ref (std::shared_ptr <T> &t);
    
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
    Foo_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj.get_shared (); };
    template<bool VAR = true, typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::traits::stub_type*, T*>::value>::type>
    Foo_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj->get_shared (); };
    void operator=(std::nullptr_t t);
    operator TAOX11_NAMESPACE::CORBA::Object_ref <TAOX11_NAMESPACE::CORBA::Object_stub> ();
    static Foo_ref<T> narrow(TAOX11_NAMESPACE::CORBA::Object obj);

    typedef Foo_srvref<Foo_skel> servant_type;
    typedef Foo_skel servant_base_type;
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

#include "TestC.inl"

#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-