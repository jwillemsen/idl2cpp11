/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_GACCEAAH_INCLUDED__
#define __RIDL_TESTC_H_GACCEAAH_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/bounded_vector_t.h"
#include "tao/x11/bounded_type_traits_t.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 1
#error This file was generated with another RIDL C++11 backend version (1.8.1). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/struct_pre

  /// @copydoc test.idl::Test::Simple
  class Simple
  {
  public:
    // generated from c++11/templates/cli/hdr/struct_post
    Simple () = default;
    ~Simple () = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    /// Constructor which accepts value for all members
    explicit inline Simple (
      uint8_t o,
      int32_t l,
      std::string s,
      double d,
      bool b,
      char c);
    Simple& operator= (const Simple&) = default;
    Simple& operator= (Simple&&) = default;

    /// @copydoc test.idl::Test::Simple::o
    //@{
    inline void o (uint8_t _x11_o) { this->o_ = _x11_o; }
    inline uint8_t o () const { return this->o_; }
    inline uint8_t& o () { return this->o_; }
    //@}

    /// @copydoc test.idl::Test::Simple::l
    //@{
    inline void l (int32_t _x11_l) { this->l_ = _x11_l; }
    inline int32_t l () const { return this->l_; }
    inline int32_t& l () { return this->l_; }
    //@}

    /// @copydoc test.idl::Test::Simple::s
    //@{
    inline void s (const std::string& _x11_s) { this->s_ = _x11_s; }
    inline void s (std::string&& _x11_s) { this->s_ = std::move (_x11_s); }
    inline const std::string& s () const { return this->s_; }
    inline std::string& s () { return this->s_; }
    //@}

    /// @copydoc test.idl::Test::Simple::d
    //@{
    inline void d (double _x11_d) { this->d_ = _x11_d; }
    inline double d () const { return this->d_; }
    inline double& d () { return this->d_; }
    //@}

    /// @copydoc test.idl::Test::Simple::b
    //@{
    inline void b (bool _x11_b) { this->b_ = _x11_b; }
    inline bool b () const { return this->b_; }
    inline bool& b () { return this->b_; }
    //@}

    /// @copydoc test.idl::Test::Simple::c
    //@{
    inline void c (char _x11_c) { this->c_ = _x11_c; }
    inline char c () const { return this->c_; }
    inline char& c () { return this->c_; }
    //@}

    /// Exchange the value of two structures in an efficient matter
    inline void swap (Simple& s);

  private:
    uint8_t o_{};
    int32_t l_{};
    std::string s_{};
    double d_{};
    bool b_{};
    char c_{};
  };// Simple

  inline void swap (::Test::Simple& m1, ::Test::Simple& m2) { m1.swap (m2); }


  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::SimpleSeq
  using SimpleSeq = std::vector<Simple>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::LongSeq
  using LongSeq = std::vector<int32_t>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::BoundedLongSeq
  using BoundedLongSeq = TAOX11_NAMESPACE::IDL::bounded_vector<int32_t, 50>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::BoolSeq
  using BoolSeq = std::vector<bool>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::StringSeq
  using StringSeq = std::vector<std::string>;

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd
#if !defined (_INTF_TEST__FOO_FWD_)
#define _INTF_TEST__FOO_FWD_
  class Foo;
  class Foo_proxy;
  using Foo_proxy_ptr = Foo_proxy*;
#endif // !_INTF_TEST__FOO_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits
#if !defined (_INTF_TEST__FOO_TRAITS_DECL_)
#define _INTF_TEST__FOO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits<::Test::Foo>::shared_ptr_type
    object_traits<::Test::Foo>::lock_shared (::Test::Foo* p);
    template<>
    object_traits<::Test::Foo>::ref_type
    object_traits<::Test::Foo>::narrow (object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits <::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference <::Test::Foo>>,
      public CORBA::object_traits <::Test::Foo>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      using is_local = std::false_type;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      using is_abstract = std::false_type;

      template <typename OStrm_, typename Formatter = formatter<::Test::Foo, OStrm_>>
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
#endif // !_INTF_TEST__FOO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre
  /// @copydoc test.idl::Test::Foo
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    using _traits_type = TAOX11_IDL::traits<Foo>;
    /// Strong reference type
    using _ref_type = TAOX11_IDL::traits<Foo>::ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::test_long_seq
    virtual ::Test::LongSeq
    test_long_seq (
        const ::Test::LongSeq& sin,
        ::Test::LongSeq& sinout,
        ::Test::LongSeq& sout);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::test_bool_seq
    virtual ::Test::BoolSeq
    test_bool_seq (
        const ::Test::BoolSeq& sin,
        ::Test::BoolSeq& sinout,
        ::Test::BoolSeq& sout);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::test_string_seq
    virtual ::Test::StringSeq
    test_string_seq (
        const ::Test::StringSeq& sin,
        ::Test::StringSeq& sinout,
        ::Test::StringSeq& sout);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::test_struct_seq
    virtual ::Test::SimpleSeq
    test_struct_seq (
        const ::Test::SimpleSeq& sin,
        ::Test::SimpleSeq& sinout,
        ::Test::SimpleSeq& sout);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::shutdown
    virtual void
    shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post
  protected:
    using _shared_ptr_type = std::shared_ptr<Foo>;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p, bool inherited = false);
    /// Default constructor
    Foo () = default;
    /// Destructor
    ~Foo () override = default;

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

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_TEST__SIMPLE_TRAITS_)
#define _STRUCT_TEST__SIMPLE_TRAITS_
    template<>
    struct traits <::Test::Simple>
      : IDL::common_traits<::Test::Simple>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(OStrm_& os_, in_type val_, Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter<::Test::Simple, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Simple>::__Writer<Fmt>);
#endif // _STRUCT_TEST__SIMPLE_TRAITS_

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector< ::Test::Simple>
    // MD5            : 1817E99034D17AC88FEC57E1A31DB103
#if !defined(_ALIAS_1817E99034D17AC88FEC57E1A31DB103_TRAITS_DECL_)
#define _ALIAS_1817E99034D17AC88FEC57E1A31DB103_TRAITS_DECL_

    template<>
    struct traits <::Test::SimpleSeq>
      : IDL::common_traits<::Test::SimpleSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<::Test::Simple>;

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

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::SimpleSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::SimpleSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::SimpleSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::SimpleSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector< int32_t>
    // MD5            : AED4359583036BE059570E400BF55053
#if !defined(_ALIAS_AED4359583036BE059570E400BF55053_TRAITS_DECL_)
#define _ALIAS_AED4359583036BE059570E400BF55053_TRAITS_DECL_

    template<>
    struct traits <::Test::LongSeq>
      : IDL::common_traits<::Test::LongSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<int32_t>;

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

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::LongSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::LongSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::LongSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::LongSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : TAOX11_NAMESPACE::IDL::bounded_vector<int32_t, 50>
    // MD5            : 7A475C4C37327B16760A3F2C0D8B7475
#if !defined(_ALIAS_7A475C4C37327B16760A3F2C0D8B7475_TRAITS_DECL_)
#define _ALIAS_7A475C4C37327B16760A3F2C0D8B7475_TRAITS_DECL_

    template<>
    struct traits <::Test::BoundedLongSeq>
      : IDL::common_traits<::Test::BoundedLongSeq>
      , IDL::bounded_traits<::Test::BoundedLongSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::true_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<int32_t>;

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

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::BoundedLongSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::BoundedLongSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::BoundedLongSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::BoundedLongSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector< bool>
    // MD5            : 8737878B15D8C3312172ACA78C5A85AC
#if !defined(_ALIAS_8737878B15D8C3312172ACA78C5A85AC_TRAITS_DECL_)
#define _ALIAS_8737878B15D8C3312172ACA78C5A85AC_TRAITS_DECL_

    template<>
    struct traits <::Test::BoolSeq>
      : IDL::common_traits<::Test::BoolSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<bool>;

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

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::BoolSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::BoolSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::BoolSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::BoolSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector< std::string>
    // MD5            : 3009A6FE2C460CA5E2399F8510369B17
#if !defined(_ALIAS_3009A6FE2C460CA5E2399F8510369B17_TRAITS_DECL_)
#define _ALIAS_3009A6FE2C460CA5E2399F8510369B17_TRAITS_DECL_

    template<>
    struct traits <::Test::StringSeq>
      : IDL::common_traits<::Test::StringSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<std::string>;

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

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::StringSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::StringSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::StringSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::StringSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/interface_idl_traits
#if !defined (_INTF_FMT_TEST__FOO_TRAITS_DECL_)
#define _INTF_FMT_TEST__FOO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter<::Test::Foo, OStrm_>
    {
      OStrm_& operator ()(OStrm_& , IDL::traits< ::Test::Foo>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Foo>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST__FOO_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter<::Test::Simple, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Simple& val_)
      {
        os_ << "Test::Simple"
            << '{'
            << "o=" << IDL::traits<uint8_t>::write(val_.o ())
            << ",l=" << IDL::traits<int32_t>::write(val_.l ())
            << ",s=" << IDL::traits<std::string>::write(val_.s ())
            << ",d=" << IDL::traits<double>::write(val_.d ())
            << ",b=" << IDL::traits<bool>::write(val_.b ())
            << ",c=" << IDL::traits<char>::write(val_.c ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Simple>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Simple>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Simple, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Simple>::write_on (os, w.val_, formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def
    template <typename OStrm_>
    inline OStrm_&
    formatter<::Test::Foo, OStrm_>::operator ()(OStrm_& os_, IDL::traits< ::Test::Foo>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (std::move (val_), "Test::Foo");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Foo>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Foo>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Foo, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Foo>::write_on (os, w.val_, formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/inl/struct_inl
inline ::Test::Simple::Simple (
  uint8_t o,
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

inline void ::Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Test::Simple& _v)
{
  return IDL::traits<::Test::Simple>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector< ::Test::Simple>
// MD5            : 1817E99034D17AC88FEC57E1A31DB103
#if !defined (_ALIAS_OSTREAM_1817E99034D17AC88FEC57E1A31DB103_DECL_)
#define _ALIAS_OSTREAM_1817E99034D17AC88FEC57E1A31DB103_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::SimpleSeq& _v)
{
  return IDL::traits<::Test::SimpleSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_1817E99034D17AC88FEC57E1A31DB103_DECL_

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector< int32_t>
// MD5            : AED4359583036BE059570E400BF55053
#if !defined (_ALIAS_OSTREAM_AED4359583036BE059570E400BF55053_DECL_)
#define _ALIAS_OSTREAM_AED4359583036BE059570E400BF55053_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::LongSeq& _v)
{
  return IDL::traits<::Test::LongSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_AED4359583036BE059570E400BF55053_DECL_

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : TAOX11_NAMESPACE::IDL::bounded_vector<int32_t, 50>
// MD5            : 7A475C4C37327B16760A3F2C0D8B7475
#if !defined (_ALIAS_OSTREAM_7A475C4C37327B16760A3F2C0D8B7475_DECL_)
#define _ALIAS_OSTREAM_7A475C4C37327B16760A3F2C0D8B7475_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoundedLongSeq& _v)
{
  return IDL::traits<::Test::BoundedLongSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_7A475C4C37327B16760A3F2C0D8B7475_DECL_

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector< bool>
// MD5            : 8737878B15D8C3312172ACA78C5A85AC
#if !defined (_ALIAS_OSTREAM_8737878B15D8C3312172ACA78C5A85AC_DECL_)
#define _ALIAS_OSTREAM_8737878B15D8C3312172ACA78C5A85AC_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoolSeq& _v)
{
  return IDL::traits<::Test::BoolSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_8737878B15D8C3312172ACA78C5A85AC_DECL_

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector< std::string>
// MD5            : 3009A6FE2C460CA5E2399F8510369B17
#if !defined (_ALIAS_OSTREAM_3009A6FE2C460CA5E2399F8510369B17_DECL_)
#define _ALIAS_OSTREAM_3009A6FE2C460CA5E2399F8510369B17_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::StringSeq& _v)
{
  return IDL::traits<::Test::StringSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_3009A6FE2C460CA5E2399F8510369B17_DECL_

// generated from c++11/templates/cli/hdr/interface_os
inline std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::Test::Foo>::ref_type _v)
{
  return IDL::traits<::Test::Foo>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_GACCEAAH_INCLUDED__ */

// -*- END -*-
