// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_CFCADEGE_INCLUDED__
#define __RIDL_TESTC_H_CFCADEGE_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/sequence_os_t.h"
#include "tao/x11/bounded_vector_t.h"
#include "tao/x11/bounded_type_traits_t.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++11/templates/cli/hdr/struct_pre.erb
  class Simple
  {
  public:

    // generated from c++11/templates/cli/hdr/struct_post.erb
    inline Simple ();
    ~Simple () = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    explicit inline Simple (uint8_t o,
                     int32_t l,
                     std::string s,
                     double d,
                     bool b,
                     char c);
    inline Simple& operator= (const Simple& x);
    inline Simple& operator= (Simple&& x);

    inline void o (uint8_t _o);
    inline uint8_t o () const;
    inline uint8_t& o ();

    inline void l (int32_t _l);
    inline int32_t l () const;
    inline int32_t& l ();

    inline void s (const std::string& _s);
    inline void s (std::string&& _s);
    inline const std::string& s () const;
    inline std::string& s ();

    inline void d (double _d);
    inline double d () const;
    inline double& d ();

    inline void b (bool _b);
    inline bool b () const;
    inline bool& b ();

    inline void c (char _c);
    inline char c () const;
    inline char& c ();

    inline void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
  };// Simple

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef std::vector < Simple> SimpleSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef std::vector < int32_t> LongSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef TAOX11_IDL::bounded_vector < int32_t, 50> BoundedLongSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef std::vector < bool> BoolSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb

  typedef std::vector < std::string> StringSeq;

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
    /// @copybrief Test::Foo::test_long_seq
    virtual ::Test::LongSeq test_long_seq (const ::Test::LongSeq& sin,
                                   ::Test::LongSeq& sinout,
                                   ::Test::LongSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Foo::test_bool_seq
    virtual ::Test::BoolSeq test_bool_seq (const ::Test::BoolSeq& sin,
                                   ::Test::BoolSeq& sinout,
                                   ::Test::BoolSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Foo::test_string_seq
    virtual ::Test::StringSeq test_string_seq (const ::Test::StringSeq& sin,
                                       ::Test::StringSeq& sinout,
                                       ::Test::StringSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Foo::test_struct_seq
    virtual ::Test::SimpleSeq test_struct_seq (const ::Test::SimpleSeq& sin,
                                       ::Test::SimpleSeq& sinout,
                                       ::Test::SimpleSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copybrief Test::Foo::shutdown
    virtual void shutdown ();

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

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_SIMPLE_TRAITS_)
#define _STRUCT_TEST_SIMPLE_TRAITS_
    template<>
    struct traits < ::Test::Simple>
      : IDL::common_traits< ::Test::Simple>
    {
    };
#endif // _STRUCT_TEST_SIMPLE_TRAITS_

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < ::Test::Simple>
    // MD5            : 97E065F0B22B38AFDF68FAC50C0D18D3
#if !defined(_ALIAS_97E065F0B22B38AFDF68FAC50C0D18D3_TRAITS_DECL_)
#define _ALIAS_97E065F0B22B38AFDF68FAC50C0D18D3_TRAITS_DECL_

    template<>
    struct traits < ::Test::SimpleSeq>
      : IDL::common_traits< ::Test::SimpleSeq>
    {
      typedef std::false_type is_bounded;
      typedef IDL::traits< ::Test::Simple> element_traits;
    };

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < int32_t>
    // MD5            : EF22CCD494B5C3FED94E904D67A99E15
#if !defined(_ALIAS_EF22CCD494B5C3FED94E904D67A99E15_TRAITS_DECL_)
#define _ALIAS_EF22CCD494B5C3FED94E904D67A99E15_TRAITS_DECL_

    template<>
    struct traits < ::Test::LongSeq>
      : IDL::common_traits< ::Test::LongSeq>
    {
      typedef std::false_type is_bounded;
      typedef IDL::traits< int32_t> element_traits;
    };

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : TAOX11_IDL::bounded_vector < int32_t, 50>
    // MD5            : EA3216C5DC0F6B49D119DC64CDBA69CA
#if !defined(_ALIAS_EA3216C5DC0F6B49D119DC64CDBA69CA_TRAITS_DECL_)
#define _ALIAS_EA3216C5DC0F6B49D119DC64CDBA69CA_TRAITS_DECL_

    template<>
    struct traits < ::Test::BoundedLongSeq>
      : IDL::common_traits< ::Test::BoundedLongSeq>
      , IDL::bounded_traits< ::Test::BoundedLongSeq>
    {
      typedef std::true_type is_bounded;
      typedef IDL::traits< int32_t> element_traits;
    };

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < bool>
    // MD5            : 9234E6936FE22252495CDEA48F87A0D3
#if !defined(_ALIAS_9234E6936FE22252495CDEA48F87A0D3_TRAITS_DECL_)
#define _ALIAS_9234E6936FE22252495CDEA48F87A0D3_TRAITS_DECL_

    template<>
    struct traits < ::Test::BoolSeq>
      : IDL::common_traits< ::Test::BoolSeq>
    {
      typedef std::false_type is_bounded;
      typedef IDL::traits< bool> element_traits;
    };

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < std::string>
    // MD5            : E501B88938184788967D036078062640
#if !defined(_ALIAS_E501B88938184788967D036078062640_TRAITS_DECL_)
#define _ALIAS_E501B88938184788967D036078062640_TRAITS_DECL_

    template<>
    struct traits < ::Test::StringSeq>
      : IDL::common_traits< ::Test::StringSeq>
    {
      typedef std::false_type is_bounded;
      typedef IDL::traits< std::string> element_traits;
    };

#endif
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
}; // std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline Test::Simple::Simple ()
           : o_ (0)
           , l_ (0)
           , s_ (std::string())
           , d_ (0.0)
           , b_ (false)
           , c_ ('\0')
{
}
inline Test::Simple::Simple (uint8_t o,
                             int32_t l,
                             std::string s,
                             double d,
                             bool b,
                             char c)
           : o_ (std::move (o))
           , l_ (std::move (l))
           , s_ (std::move (s))
           , d_ (std::move (d))
           , b_ (std::move (b))
           , c_ (std::move (c))
{
}

inline void Test::Simple::o (uint8_t _o) { this->o_ = _o; }
inline uint8_t Test::Simple::o () const { return this->o_; }
inline uint8_t& Test::Simple::o () { return this->o_; }

inline void Test::Simple::l (int32_t _l) { this->l_ = _l; }
inline int32_t Test::Simple::l () const { return this->l_; }
inline int32_t& Test::Simple::l () { return this->l_; }

inline void Test::Simple::s (const std::string& _s) { this->s_ = _s; }
inline void Test::Simple::s (std::string&& _s) { this->s_ = std::move (_s); }
inline const std::string& Test::Simple::s () const { return this->s_; }
inline std::string& Test::Simple::s () { return this->s_; }

inline void Test::Simple::d (double _d) { this->d_ = _d; }
inline double Test::Simple::d () const { return this->d_; }
inline double& Test::Simple::d () { return this->d_; }

inline void Test::Simple::b (bool _b) { this->b_ = _b; }
inline bool Test::Simple::b () const { return this->b_; }
inline bool& Test::Simple::b () { return this->b_; }

inline void Test::Simple::c (char _c) { this->c_ = _c; }
inline char Test::Simple::c () const { return this->c_; }
inline char& Test::Simple::c () { return this->c_; }

inline ::Test::Simple& Test::Simple::operator= (const ::Test::Simple& x)
{
  if (this != &x) {
    this->o_ = x.o_;
    this->l_ = x.l_;
    this->s_ = x.s_;
    this->d_ = x.d_;
    this->b_ = x.b_;
    this->c_ = x.c_;
  }
  return *this;
}
inline ::Test::Simple& Test::Simple::operator= (::Test::Simple&& x)
{
  this->o_ = std::move (x.o_);
  this->l_ = std::move (x.l_);
  this->s_ = std::move (x.s_);
  this->d_ = std::move (x.d_);
  this->b_ = std::move (x.b_);
  this->c_ = std::move (x.c_);
  return *this;
}

inline void Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::Test::Simple& m1, ::Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++11/templates/cli/hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::Test::Simple&);

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < ::Test::Simple>
// MD5            : 97E065F0B22B38AFDF68FAC50C0D18D3
#if !defined (_ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_)
#define _ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_

std::ostream&
taox11_print_Test_SimpleSeq (
    std::ostream& strm ,
    const ::Test::SimpleSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::SimpleSeq& _v)
{
  strm << "std::vector < ::Test::Simple>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < int32_t>
// MD5            : EF22CCD494B5C3FED94E904D67A99E15
#if !defined (_ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_)
#define _ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_

std::ostream&
taox11_print_Test_LongSeq (
    std::ostream& strm ,
    const ::Test::LongSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::LongSeq& _v)
{
  strm << "std::vector < int32_t>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : TAOX11_IDL::bounded_vector < int32_t, 50>
// MD5            : EA3216C5DC0F6B49D119DC64CDBA69CA
#if !defined (_ALIAS_OSTREAM_EA3216C5DC0F6B49D119DC64CDBA69CA_DECL_)
#define _ALIAS_OSTREAM_EA3216C5DC0F6B49D119DC64CDBA69CA_DECL_

std::ostream&
taox11_print_Test_BoundedLongSeq (
    std::ostream& strm ,
    const ::Test::BoundedLongSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoundedLongSeq& _v)
{
  strm << "IDL::bounded_vector < int32_t, 50>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_EA3216C5DC0F6B49D119DC64CDBA69CA_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < bool>
// MD5            : 9234E6936FE22252495CDEA48F87A0D3
#if !defined (_ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_)
#define _ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_

std::ostream&
taox11_print_Test_BoolSeq (
    std::ostream& strm ,
    const ::Test::BoolSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoolSeq& _v)
{
  strm << "std::vector < bool>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < std::string>
// MD5            : E501B88938184788967D036078062640
#if !defined (_ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_)
#define _ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_

std::ostream&
taox11_print_Test_StringSeq (
    std::ostream& strm ,
    const ::Test::StringSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::StringSeq& _v)
{
  strm << "std::vector < std::string>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_

// generated from c++11/templates/cli/hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Foo>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_CFCADEGE_INCLUDED__

// -*- END -*-
