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

#include "tao/0x/stddef.h"
#include "tao/0x/corba.h"
#include "tao/0x/system_exception.h"
#include "tao/0x/orb.h"
#include "tao/0x/object_member_t.h"

using namespace corba_0x;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from c++/cli_hdr/struct_pre.erb
  class Simple
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Simple (void);
    ~Simple (void) = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    explicit Simple (uint8_t o,
                     int32_t l,
                     std::string s,
                     double d,
                     bool b,
                     char c);
    Simple& operator= (const Simple& x);
    Simple& operator= (Simple&& x);

    void o (const uint8_t& _o);
    void o (uint8_t&& _o);
    const uint8_t& o (void) const;
    uint8_t& o (void);

    void l (const int32_t& _l);
    void l (int32_t&& _l);
    const int32_t& l (void) const;
    int32_t& l (void);

    void s (const std::string& _s);
    void s (std::string&& _s);
    const std::string& s (void) const;
    std::string& s (void);

    void d (const double& _d);
    void d (double&& _d);
    const double& d (void) const;
    double& d (void);

    void b (const bool& _b);
    void b (bool&& _b);
    const bool& b (void) const;
    bool& b (void);

    void c (const char& _c);
    void c (char&& _c);
    const char& c (void) const;
    char& c (void);

    void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
  }; // Simple

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < Simple> SimpleSeq;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < int32_t> LongSeq;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < bool> BoolSeq;

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < std::string> StringSeq;

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
    typedef corba_0x::CORBA::ObjMember_T<Foo_traits, ref_type>  member_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
  };
#endif // !_INTF_TEST_FOO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Foo_ref <Foo_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    Test::LongSeq test_long_seq (const Test::LongSeq& sin,
                                 Test::LongSeq& sinout,
                                 Test::LongSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    Test::BoolSeq test_bool_seq (const Test::BoolSeq& sin,
                                 Test::BoolSeq& sinout,
                                 Test::BoolSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    Test::StringSeq test_string_seq (const Test::StringSeq& sin,
                                     Test::StringSeq& sinout,
                                     Test::StringSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    Test::SimpleSeq test_struct_seq (const Test::SimpleSeq& sin,
                                     Test::SimpleSeq& sinout,
                                     Test::SimpleSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Foo_stub (Foo_proxy_ptr p);
  protected:
    static Foo_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Foo_stub (void) = delete;
    Foo_stub(const Foo_stub&) = delete;
    Foo_stub& operator=(const Foo_stub&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Foo_ref : public corba_0x::CORBA::ObjRef_T<T>
  {
  public:
    explicit Foo_ref (T *s = nullptr);
    Foo_ref (std::shared_ptr <T> &t);
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
      Foo_ref (_Tp1 obj) : corba_0x::CORBA::ObjRef_T<T> (obj.get()) {};
    void operator=(std::nullptr_t t);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    static Foo narrow(corba_0x::CORBA::Object obj);

    typedef Foo_srvref<Foo_skel> servant_type;
    typedef Foo_skel servant_base_type;
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (Test::Simple& m1, Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
