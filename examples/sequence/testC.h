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

    void o (uint8_t _o);
    uint8_t o (void) const;
    uint8_t& o (void);

    void l (int32_t _l);
    int32_t l (void) const;
    int32_t& l (void);

    void s (const std::string& _s);
    void s (std::string&& _s);
    const std::string& s (void) const;
    std::string& s (void);

    void d (double _d);
    double d (void) const;
    double& d (void);

    void b (bool _b);
    bool b (void) const;
    bool& b (void);

    void c (char _c);
    char c (void) const;
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
  class Foo;
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
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::to_reference (
        ::Test::Foo*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Foo>::to_proxy (
        const object_traits< ::Test::Foo>::ref_type&);
    template<>
    object_traits< ::Test::Foo>::ref_type object_traits< ::Test::Foo>::narrow (
    	 const object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type&);
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
    friend struct TAOX11_CORBA::object_traits< Foo>;

    typedef TAOX11_CORBA::object_traits< Foo> _traits_type;
    typedef TAOX11_CORBA::object_reference< Foo> _ref_type;

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    ::Test::LongSeq test_long_seq (const ::Test::LongSeq& sin,
                                   ::Test::LongSeq& sinout,
                                   ::Test::LongSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    ::Test::BoolSeq test_bool_seq (const ::Test::BoolSeq& sin,
                                   ::Test::BoolSeq& sinout,
                                   ::Test::BoolSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    ::Test::StringSeq test_string_seq (const ::Test::StringSeq& sin,
                                       ::Test::StringSeq& sinout,
                                       ::Test::StringSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    ::Test::SimpleSeq test_struct_seq (const ::Test::SimpleSeq& sin,
                                       ::Test::SimpleSeq& sinout,
                                       ::Test::SimpleSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Foo> narrow (
        const TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object>& obj)
    {
      return TAOX11_CORBA::object_traits< Foo>::narrow (obj);
    }

    explicit Foo (Foo_proxy_ptr p);
  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    explicit Foo (Foo_proxy_ptr p, bool);
    Foo (void);
    ~Foo (void) = default;

    _shared_ptr_type _reference ()
    { return std::dynamic_pointer_cast<Foo> (this->_get_reference ()); }

  private:
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
}; // std

// generated from c++/cli_hdr/inline.erb
#include "testC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Simple& m1, ::Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
