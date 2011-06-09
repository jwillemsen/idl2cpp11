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

#include <tao/0x/stddef.h>
#include <tao/0x/corba.h>

using namespace corba_0x;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from StubHeaderWriter#enter_interface
  class Hello_stub;
  template <typename T> class Hello_ref;
  typedef Hello_ref < Hello_stub> Hello;

  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Hello_ref < Hello_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    virtual std::string get_string (void);

    // generated from c++/cli_hdr/operation.erb
    virtual void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb

  protected:
    explicit Hello_stub (Hello_proxy_ptr p);

    static const std::string repo_id_;

    static Hello_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Hello_stub (void) = delete;
    Hello_stub& operator=(const Hello_stub&) = delete;
    Hello_stub(const Hello_stub&) = delete;
    Hello_proxy_ptr hello_proxy_;
  }; // Hello_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_ref
    : public virtual corba_0x::CORBA::Object_ref<T>
  {
  public:
    typedef T ref_type;
    Hello_ref ();
    explicit Hello_ref (T *s);
    Hello_ref (std::shared_ptr <T> t);
    Hello_ref (Hello_ref<T> &t);
    Hello_ref (Hello_ref<T> &&t);
    Hello_ref (const Hello_ref<T>& o);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    void operator=(const std::nullptr_t& t);

    static Hello narrow (corba_0x::CORBA::Object obj);
  };

}; // namespace Test

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
