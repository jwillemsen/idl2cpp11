/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Westervoort, GLD
 *        The Netherlands
 *        http://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_GBDCAJGI_INCLUDED__
#define __RIDL_TESTC_H_GBDCAJGI_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/user_exception.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 7 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.7.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/except_pre.erb
  /// @copydoc test.idl::Test::FooEx
  class FooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual void _raise () const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;


    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate () const override;

    // generated from c++11/templates/cli/hdr/except_post.erb
    FooEx ();
    virtual ~FooEx () throw () = default;
    FooEx (const FooEx&) = default;
    FooEx (FooEx&&) = default;
    explicit FooEx (
                    std::string message);
    FooEx& operator= (const FooEx&) = default;
    FooEx& operator= (FooEx&&) = default;

    /// @copydoc test.idl::Test::FooEx::message
    //@{
    void message (const std::string& _x11_message) { this->message_ = _x11_message; }
    void message (std::string&& _x11_message)  { this->message_ = std::move (_x11_message); }
    const std::string& message () const { return this->message_; }
    std::string& message () { return this->message_; };
    //@}

  protected:
    virtual void _info (std::ostream&) const override;

  private:
    std::string message_;
  }; // class FooEx

  // generated from c++11/templates/cli/hdr/except_pre.erb
  /// @copydoc test.idl::Test::BooEx
  class BooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual void _raise () const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;


    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate () const override;

    // generated from c++11/templates/cli/hdr/except_post.erb
    BooEx ();
    virtual ~BooEx () throw () = default;
    BooEx (const BooEx&) = default;
    BooEx (BooEx&&) = default;
    explicit BooEx (
                    int32_t id);
    BooEx& operator= (const BooEx&) = default;
    BooEx& operator= (BooEx&&) = default;

    /// @copydoc test.idl::Test::BooEx::id
    //@{
    void id (int32_t _x11_id) { this->id_ = _x11_id; }
    int32_t id () const { return this->id_; }
    int32_t& id () { return this->id_; };
    //@}

  protected:
    virtual void _info (std::ostream&) const override;

  private:
    int32_t id_ {};
  }; // class BooEx

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
#endif // !_INTF_TEST_FOO_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

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
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits < ::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Foo>>,
      public CORBA::object_traits < ::Test::Foo>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      typedef std::false_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;

      template <typename OStrm_, typename Formatter = formatter< ::Test::Foo, OStrm_>>
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
#endif // !_INTF_TEST_FOO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  /// @copydoc test.idl::Test::Foo
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Foo>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Foo>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc test.idl::Test::Foo::do_it
    virtual
    void
    do_it ();

    // generated from c++11/templates/cli/hdr/attribute.erb
    /// @copydoc test.idl::Test::Foo::a_number
    virtual
    int32_t
    a_number ();

    // generated from c++11/templates/cli/hdr/attribute.erb
    /// @copydoc test.idl::Test::Foo::a_string
    //@{
    virtual
    std::string
    a_string ();

    virtual
    void
    a_string (
        const std::string& _v);
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc test.idl::Test::Foo::shutdown
    virtual
    void
    shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Foo> _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p, bool inherited = false);
    /// Default constructor
    Foo () = default;
    /// Destructor
    ~Foo () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    //@}
    Foo_proxy_ptr foo_proxy_ {};
  }; // class Foo
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_FOOEX_TRAITS_)
#define _STRUCT_TEST_FOOEX_TRAITS_
    template<>
    struct traits < ::Test::FooEx>
      : IDL::common_traits< ::Test::FooEx>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter< ::Test::FooEx, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::FooEx>::__Writer<Fmt>);
#endif // _STRUCT_TEST_FOOEX_TRAITS_

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_BOOEX_TRAITS_)
#define _STRUCT_TEST_BOOEX_TRAITS_
    template<>
    struct traits < ::Test::BooEx>
      : IDL::common_traits< ::Test::BooEx>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter< ::Test::BooEx, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::BooEx>::__Writer<Fmt>);
#endif // _STRUCT_TEST_BOOEX_TRAITS_

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_TEST_FOO_TRAITS_DECL_)
#define _INTF_FMT_TEST_FOO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Foo, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          IDL::traits< ::Test::Foo>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Foo>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_FOO_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def.erb
    template <typename OStrm_>
    struct formatter< ::Test::FooEx, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::FooEx& val_)
      {
        os_ << "Test::FooEx"
            << '{'
            << "message=" << IDL::traits< std::string>::write(val_.message ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::FooEx>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::FooEx>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::FooEx, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::FooEx>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def.erb
    template <typename OStrm_>
    struct formatter< ::Test::BooEx, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::BooEx& val_)
      {
        os_ << "Test::BooEx"
            << '{'
            << "id=" << IDL::traits< int32_t>::write(val_.id ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::BooEx>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::BooEx>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::BooEx, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::BooEx>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Foo, OStrm_>::operator ()(
          OStrm_& os_,
          IDL::traits< ::Test::Foo>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               std::move (val_),
               "Test::Foo");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Foo>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Foo>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Foo, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Foo>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/inl/except_inl.erb
inline Test::FooEx::FooEx ()
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/FooEx:1.0", "FooEx")
{
}

inline Test::FooEx::FooEx (
                      std::string message)
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/FooEx:1.0", "FooEx")
  , message_ (std::move (message))
{
}

// generated from c++11/templates/cli/inl/except_inl.erb
inline Test::BooEx::BooEx ()
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/BooEx:1.0", "BooEx")
{
}

inline Test::BooEx::BooEx (
                      int32_t id)
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/BooEx:1.0", "BooEx")
  , id_ (std::move (id))
{
}

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::Test::Foo>::ref_type _v)
{
  return IDL::traits< ::Test::Foo>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_GBDCAJGI_INCLUDED__ */

// -*- END -*-
