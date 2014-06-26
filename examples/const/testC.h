// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_HFDCHEBE_INCLUDED__
#define __RIDL_TESTC_H_HFDCHEBE_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/bounded_string_t.h"
#include "tao/x11/bounded_type_traits_t.h"
#include "tao/x11/fixed_t.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 2
#error This file was generated with another RIDL C++11 backend version (1.3.2). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc Test
namespace Test
{

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ch_val
  constexpr char ch_val = 'a';

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::wch_val
  constexpr wchar_t wch_val = L'X';

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::oct_val
  constexpr uint8_t oct_val = 123;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::sh_val
  constexpr int16_t sh_val = -1023;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ush_val
  constexpr uint16_t ush_val = 1023U;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::l_val
  constexpr int32_t l_val = -81234;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ul_val
  constexpr uint32_t ul_val = 81234UL;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ll_val
  constexpr int64_t ll_val = -12345678LL;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ull_val
  constexpr uint64_t ull_val = 12345678ULL;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::f_val
  constexpr float f_val = 1.23F;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::d_val
  constexpr double d_val = 454.23;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ld_val
  constexpr long double ld_val = 678.91L;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::b_val
  constexpr bool b_val = true;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::s_val
  const std::string s_val = "text";

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::ws_val
  const std::wstring ws_val = L"widestring\n \xbf \xfe0e";

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::TCounter
  typedef int32_t TCounter;

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::TName
  typedef TAOX11_IDL::bounded_basic_string<char, 30> TName;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::count
  constexpr TCounter count = 99;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::name
  const TName name = "wilco";

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::double_count
  constexpr TCounter double_count = (::Test::count * 2);

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::fixed_type
  typedef TAOX11_NAMESPACE::IDL::Fixed <10, 3> fixed_type;

  // generated from StubHeaderWriter#visit_const
  /// @copydoc Test::pi2
  const fixed_type pi2;
} // namespace Test


// generated from StubHeaderWriter#enter_interface

// generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_A_FWD_)
#define _INTF_A_FWD_
class A;
class A_proxy;
typedef A_proxy* A_proxy_ptr;
#endif // !_INTF_A_FWD_

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
#if !defined (_INTF_A_TRAITS_DECL_)
#define _INTF_A_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::A>::shared_ptr_type
    object_traits< ::A>::lock_shared (
        ::A* p);
    template<>
    const Object_proxy*
    object_traits< ::A>::to_proxy (
        object_traits< ::A>::ref_type);
    template<>
    object_traits< ::A>::ref_type
    object_traits< ::A>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits < ::A> :
      public IDL::common_byval_traits <CORBA::object_reference < ::A>>,
      public CORBA::object_traits < ::A>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      typedef std::false_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;

      template <typename OStrm_, typename Formatter = formatter< ::A, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_A_TRAITS_DECL_

// generated from c++11/templates/cli/hdr/interface_pre.erb
/// @copydoc A
class A
  : public virtual TAOX11_NAMESPACE::CORBA::Object
{
public:
  template <typename T> friend struct TAOX11_CORBA::object_traits;

  /// @name Member types
  //@{
  typedef TAOX11_IDL::traits< A>           _traits_type;
  /// Strong reference type
  typedef TAOX11_IDL::traits< A>::ref_type _ref_type;
  //@}

  // generated from StubHeaderWriter#visit_const
  /// @copydoc A::pi
  static constexpr float pi = 3.14159F;

  // generated from c++11/templates/cli/hdr/interface_post.erb
protected:
  typedef std::shared_ptr<A>   _shared_ptr_type;

  template <typename _Tp1, typename, typename ...Args>
  friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

  explicit A (A_proxy_ptr p);
  explicit A (A_proxy_ptr p, bool);
  /// Default constructor
  A ();
  /// Destructor
  ~A () = default;

private:
  /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
  //@{
  A(const A&) = delete;
  A(A&&) = delete;
  A& operator=(const A&) = delete;
  A& operator=(A&&) = delete;
  A_proxy_ptr a_proxy_;
  //@}
}; // A

// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/string_idl_traits.erb
    // Unaliased type : TAOX11_IDL::bounded_basic_string<char, 30>
    // MD5            : 4FC4252C9D149C59A6F97B9D11EF60DC
#if !defined(_ALIAS_4FC4252C9D149C59A6F97B9D11EF60DC_TRAITS_DECL_)
#define _ALIAS_4FC4252C9D149C59A6F97B9D11EF60DC_TRAITS_DECL_

    template<>
    struct traits < TAOX11_IDL::bounded_basic_string<char, 30>>
      : IDL::common_traits< TAOX11_IDL::bounded_basic_string<char, 30>>
      , IDL::bounded_traits< TAOX11_IDL::bounded_basic_string<char, 30>>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this string is declared as bounded
      typedef std::true_type is_bounded;
      /// IDL::traits<> for the element of the string
      typedef IDL::traits<char> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< TAOX11_IDL::bounded_basic_string<char, 30>>::__Writer<Fmt> w)
    {
      typedef IDL::traits< TAOX11_IDL::bounded_basic_string<char, 30>>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< TAOX11_IDL::bounded_basic_string<char, 30>, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< TAOX11_IDL::bounded_basic_string<char, 30>>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/fixed_idl_traits.erb
    // Unaliased type : TAOX11_NAMESPACE::IDL::Fixed <10, 3>
    // MD5            : 26C447B68D082EEA72A00BE046CE87A7
#if !defined(_ALIAS_26C447B68D082EEA72A00BE046CE87A7_TRAITS_DECL_)
#define _ALIAS_26C447B68D082EEA72A00BE046CE87A7_TRAITS_DECL_

    template<>
    struct traits < TAOX11_NAMESPACE::IDL::Fixed <10, 3>>
      : IDL::common_traits< TAOX11_NAMESPACE::IDL::Fixed <10, 3>>
    {
      typedef std::integral_constant< uint16_t, 10 > digits;
      typedef std::integral_constant< uint16_t, 3 > scale;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_>
    struct formatter< TAOX11_NAMESPACE::IDL::Fixed <10, 3>, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const TAOX11_NAMESPACE::IDL::Fixed <10, 3>& val_)
      {
        os_ << "IDL::Fixed <10, 3> "
          << val_.to_string ();
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< TAOX11_NAMESPACE::IDL::Fixed <10, 3>>::__Writer<Fmt> w)
    {
      typedef IDL::traits< TAOX11_NAMESPACE::IDL::Fixed <10, 3>>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< TAOX11_NAMESPACE::IDL::Fixed <10, 3>, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< TAOX11_NAMESPACE::IDL::Fixed <10, 3>>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_A_TRAITS_DECL_)
#define _INTF_FMT_A_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::A, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          TAOX11_IDL::traits< ::A>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::A>::__Writer<Fmt>);
#endif // !_INTF_FMT_A_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::A, OStrm_>::operator ()(
          OStrm_& os_,
          TAOX11_IDL::traits< ::A>::ref_type val_)
    {
      return os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
                        val_,
                        "A");
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::A>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::A>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::A, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::A>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
} // namespace std

// generated from StubHeaderStdWriter#pre_visit
namespace std {
} // namespace std

// generated from c++11/templates/cli/hdr/fixed_os.erb
// Unaliased type : TAOX11_NAMESPACE::IDL::Fixed <10, 3>
// MD5            : 26C447B68D082EEA72A00BE046CE87A7
#if !defined (_ALIAS_OSTREAM_26C447B68D082EEA72A00BE046CE87A7_DECL_)
#define _ALIAS_OSTREAM_26C447B68D082EEA72A00BE046CE87A7_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const TAOX11_NAMESPACE::IDL::Fixed <10, 3>& _v)
{
  return IDL::traits< TAOX11_NAMESPACE::IDL::Fixed <10, 3>>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_26C447B68D082EEA72A00BE046CE87A7_DECL_

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::A>::ref_type _v)
{
  return IDL::traits< ::A>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_HFDCHEBE_INCLUDED__ */

// -*- END -*-
