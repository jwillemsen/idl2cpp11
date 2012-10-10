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

  // generated from c++/cli_hdr/struct_pre.erb
  class Variable final
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    inline Variable ();
    ~Variable () = default;
    Variable (const Variable&) = default;
    Variable (Variable&&) = default;
    explicit inline Variable (std::string name);
    inline Variable& operator= (const Variable& x);
    inline Variable& operator= (Variable&& x);

    inline void name (const std::string& _name);
    inline void name (std::string&& _name);
    inline const std::string& name () const;
    inline std::string& name ();

    inline void swap (Variable& s);

  private:
    std::string name_;
  };// Variable
  typedef Variable Variable_idl_t; // IDL traits typename

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_BAR_FWD_)
#define _INTF_TEST_BAR_FWD_
  class Bar;
  typedef Bar Bar_idl_t; // IDL traits typename
  class Bar_proxy;
  typedef Bar_proxy* Bar_proxy_ptr;
  namespace POA
  {
    class Bar;
  };
#endif // !_INTF_TEST_BAR_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_BAR_TRAITS_DECL_)
#define _INTF_TEST_BAR_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Bar>::shared_ptr_type
    object_traits< ::Test::Bar>::lock_shared (
        ::Test::Bar* p);
    template<>
    const Object_proxy*
    object_traits< ::Test::Bar>::to_proxy (
        object_traits< ::Test::Bar>::ref_type);
    template<>
    object_traits< ::Test::Bar>::ref_type
    object_traits< ::Test::Bar>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

  namespace IDL
  {
    template<>
    struct traits < ::Test::Bar> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Bar>>,
      public CORBA::object_traits < ::Test::Bar>
    {
      static constexpr bool local = false;
      static constexpr bool abstract = false;
    };
  };
};
#endif // !_INTF_TEST_BAR_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++/cli_hdr/interface_pre.erb
  class Bar
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_NAMESPACE::IDL::traits< Bar> _traits_type;
    typedef TAOX11_NAMESPACE::IDL::traits< Bar>::ref_type _ref_type;
    //@}

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Bar::op
    virtual void op ();

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_NAMESPACE::IDL::traits< Bar>::ref_type _narrow (
        TAOX11_NAMESPACE::IDL::traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type _taox11_obj)
    {
      return TAOX11_NAMESPACE::IDL::traits< Bar>::narrow (_taox11_obj);
    }

  protected:
    typedef std::shared_ptr<Bar>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Bar (Bar_proxy_ptr p);
    explicit Bar (Bar_proxy_ptr p, bool);
    Bar ();
    ~Bar () = default;

  private:
    Bar(const Bar&) = delete;
    Bar(Bar&&) = delete;
    Bar& operator=(const Bar&) = delete;
    Bar& operator=(Bar&&) = delete;
    Bar_proxy_ptr bar_proxy_;
  }; // Bar

  // generated from c++/cli_hdr/struct_pre.erb
  class Simple final
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    inline Simple ();
    ~Simple () = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    explicit inline Simple (uint8_t o,
                     int32_t l,
                     std::string s,
                     double d,
                     bool b,
                     char c,
                     TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type bar_ref,
                     ::Test::Variable v);
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

    inline void bar_ref (TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type _bar_ref);
    inline TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type bar_ref () const;
    inline TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type& bar_ref ();

    inline void v (const ::Test::Variable& _v);
    inline void v (::Test::Variable&& _v);
    inline const ::Test::Variable& v () const;
    inline ::Test::Variable& v ();

    inline void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
    TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type bar_ref_;
    ::Test::Variable v_;
  };// Simple
  typedef Simple Simple_idl_t; // IDL traits typename

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
    /// @copybrief Test::Foo::pass_struct
    virtual bool pass_struct (const ::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::return_struct
    virtual ::Test::Simple return_struct ();

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::get_struct
    virtual bool get_struct (::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::update_struct
    virtual bool update_struct (::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::shutdown
    virtual void shutdown ();

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

    // generated from c++/cli_hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_VARIABLE_TRAITS_)
#define _STRUCT_TEST_VARIABLE_TRAITS_
    template<>
    struct traits < ::Test::Variable_idl_t>
      : IDL::common_traits< ::Test::Variable>
    {
    };
#endif // _STRUCT_TEST_VARIABLE_TRAITS_

    // generated from c++/cli_hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_SIMPLE_TRAITS_)
#define _STRUCT_TEST_SIMPLE_TRAITS_
    template<>
    struct traits < ::Test::Simple_idl_t>
      : IDL::common_traits< ::Test::Simple>
    {
    };
#endif // _STRUCT_TEST_SIMPLE_TRAITS_
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Variable& m1, ::Test::Variable& m2);

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
}; // std

// generated from c++/cli_inl/struct_inl.erb
inline Test::Variable::Variable ()
           : name_ (std::string())
{
}
inline Test::Variable::Variable (std::string name)
           : name_ (std::move (name))
{
}

inline void Test::Variable::name (const std::string& _name) { this->name_ = _name; }
inline void Test::Variable::name (std::string&& _name) { this->name_ = std::move (_name); }
inline const std::string& Test::Variable::name () const { return this->name_; }
inline std::string& Test::Variable::name () { return this->name_; }

inline ::Test::Variable& Test::Variable::operator= (const ::Test::Variable& x)
{
  if (this != &x) {
    this->name_ = x.name_;
  }
  return *this;
}
inline ::Test::Variable& Test::Variable::operator= (::Test::Variable&& x)
{
  this->name_ = std::move (x.name_);
  return *this;
}

inline void Test::Variable::swap (::Test::Variable& s)
{
  std::swap (this->name_, s.name_);
}

// generated from c++/cli_inl/struct_inl.erb
inline Test::Simple::Simple ()
           : o_ (0)
           , l_ (0)
           , s_ (std::string())
           , d_ (0.0)
           , b_ (false)
           , c_ ('\0')
           , bar_ref_ (nullptr)
           , v_ (::Test::Variable ())
{
}
inline Test::Simple::Simple (uint8_t o,
                             int32_t l,
                             std::string s,
                             double d,
                             bool b,
                             char c,
                             TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type bar_ref,
                             ::Test::Variable v)
           : o_ (std::move (o))
           , l_ (std::move (l))
           , s_ (std::move (s))
           , d_ (std::move (d))
           , b_ (std::move (b))
           , c_ (std::move (c))
           , bar_ref_ (std::move (bar_ref))
           , v_ (std::move (v))
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

inline void Test::Simple::bar_ref (TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type _bar_ref) { this->bar_ref_ = _bar_ref; }
inline TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type Test::Simple::bar_ref () const { return this->bar_ref_; }
inline TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type& Test::Simple::bar_ref () { return this->bar_ref_; }

inline void Test::Simple::v (const ::Test::Variable& _v) { this->v_ = _v; }
inline void Test::Simple::v (::Test::Variable&& _v) { this->v_ = std::move (_v); }
inline const ::Test::Variable& Test::Simple::v () const { return this->v_; }
inline ::Test::Variable& Test::Simple::v () { return this->v_; }

inline ::Test::Simple& Test::Simple::operator= (const ::Test::Simple& x)
{
  if (this != &x) {
    this->o_ = x.o_;
    this->l_ = x.l_;
    this->s_ = x.s_;
    this->d_ = x.d_;
    this->b_ = x.b_;
    this->c_ = x.c_;
    this->bar_ref_ = x.bar_ref_;
    this->v_ = x.v_;
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
  this->bar_ref_ = std::move (x.bar_ref_);
  this->v_ = std::move (x.v_);
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
  std::swap (this->bar_ref_, s.bar_ref_);
  std::swap (this->v_, s.v_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Variable& m1, ::Test::Variable& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Simple& m1, ::Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++/cli_hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::Test::Variable&);

// generated from c++/cli_hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_NAMESPACE::IDL::traits< ::Test::Bar>::ref_type);

// generated from c++/cli_hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::Test::Simple&);

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
