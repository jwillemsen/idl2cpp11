/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_ECEACGGA_INCLUDED__
#define __RIDL_TESTC_H_ECEACGGA_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 9 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.9.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/bitset
/// @copydoc test.idl::MyBitset
/// @todo THIS MAPPING IS NOT COMPLETE
class MyBitset
{
public:
  MyBitset () = default;
  ~MyBitset () noexcept = default;
  MyBitset (const MyBitset&) = default;
  MyBitset (MyBitset&&) = default;
  MyBitset& operator= (const MyBitset&) = default;
  MyBitset& operator= (MyBitset&&) = default;
  /// Constructor which accepts value for all members
  explicit inline MyBitset (
    bool x,
    int8_t a,
    int16_t d,
    int64_t tt);

  inline void x (bool _x11_x) { this->_taox11_mybitset.x = _x11_x; }
  inline bool x () const { return this->_taox11_mybitset.x; }
  inline void a (int8_t _x11_a) { this->_taox11_mybitset.a = _x11_a; }
  inline int8_t a () const { return this->_taox11_mybitset.a; }
  inline void d (int16_t _x11_d) { this->_taox11_mybitset.d = _x11_d; }
  inline int16_t d () const { return this->_taox11_mybitset.d; }
  inline void tt (int64_t _x11_tt) { this->_taox11_mybitset.tt = _x11_tt; }
  inline int64_t tt () const { return this->_taox11_mybitset.tt; }

  /// Exchange the value of two bitsets in an efficient matter
  inline void swap (::MyBitset& s);

private:
  struct
  {
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    bool x : 1;
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    int8_t a : 3;
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    int16_t d : 12;
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    int64_t tt : 33;
  } _taox11_mybitset;
}; // MyBitset

inline void swap (::MyBitset& m1, ::MyBitset& m2) { m1.swap (m2); }


// generated from c++11/templates/cli/hdr/bitset
/// @copydoc test.idl::MyBitset2
/// @todo THIS MAPPING IS NOT COMPLETE
class MyBitset2 : public MyBitset
{
public:
  MyBitset2 () = default;
  ~MyBitset2 () noexcept = default;
  MyBitset2 (const MyBitset2&) = default;
  MyBitset2 (MyBitset2&&) = default;
  MyBitset2& operator= (const MyBitset2&) = default;
  MyBitset2& operator= (MyBitset2&&) = default;
  using MyBitset::MyBitset;
  /// Constructor which accepts value for all members
  explicit inline MyBitset2 (
    MyBitset _base,
    int8_t c);

  inline void c (int8_t _x11_c) { this->_taox11_mybitset2.c = _x11_c; }
  inline int8_t c () const { return this->_taox11_mybitset2.c; }

  /// Exchange the value of two bitsets in an efficient matter
  inline void swap (::MyBitset2& s);

private:
  struct
  {
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    int8_t c : 3;
    /// @copydoc #{bitfield.doc_scoped_name}::#{bitfield.name}
    int8_t  : 2;
  } _taox11_mybitset2;
}; // MyBitset2

inline void swap (::MyBitset2& m1, ::MyBitset2& m2) { m1.swap (m2); }


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/bitset_idl_traits
  template<>
  struct traits <::MyBitset>
    : IDL::common_byval_traits<::MyBitset>
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
  struct formatter<::MyBitset, OStrm_>
  {
    inline OStrm_& operator ()(OStrm_& os_, const ::MyBitset& val_)
    {
      os_ << "MyBitset{"
          << "x=" << IDL::traits<bool>::write(val_.x ())
          << ",a=" << IDL::traits<int8_t>::write(val_.a ())
          << ",d=" << IDL::traits<int16_t>::write(val_.d ())
          << ",tt=" << IDL::traits<int64_t>::write(val_.tt ())
          << '}';
      return os_;
    }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(OStrm_& os, IDL::traits<::MyBitset>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::MyBitset>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::MyBitset, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::MyBitset>::write_on (os, w.val_, formatter_t ());
  }

  // generated from c++11/templates/cli/hdr/bitset_idl_traits
  template<>
  struct traits <::MyBitset2>
    : IDL::common_byval_traits<::MyBitset2>
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
  struct formatter<::MyBitset2, OStrm_>
  {
    inline OStrm_& operator ()(OStrm_& os_, const ::MyBitset2& val_)
    {
      os_ << "MyBitset2{"
          << "c=" << IDL::traits<int8_t>::write(val_.c ())
          << '}';
      return os_;
    }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(OStrm_& os, IDL::traits<::MyBitset2>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::MyBitset2>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::MyBitset2, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::MyBitset2>::write_on (os, w.val_, formatter_t ());
  }
} // namespace TAOX11_NAMESPACE::IDL

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{
} // namespace TAOX11_NAMESPACE::IDL

// generated from c++11/templates/cli/inl/bitset_inl
inline ::MyBitset::MyBitset (
  bool x,
  int8_t a,
  int16_t d,
  int64_t tt)
  : _taox11_mybitset { x, a, d, tt }
{
}

inline void ::MyBitset::swap (::MyBitset& s)
{
  std::swap (this->_taox11_mybitset, s._taox11_mybitset);
}

// generated from c++11/templates/cli/inl/bitset_inl
inline ::MyBitset2::MyBitset2 (
  MyBitset _base,
  int8_t c)
  : MyBitset (std::move(_base))
  , _taox11_mybitset2 { c }
{
}

inline void ::MyBitset2::swap (::MyBitset2& s)
{
  std::swap (this->_taox11_mybitset2, s._taox11_mybitset2);
}

// generated from c++11/templates/cli/hdr/bitset_os
inline std::ostream& operator<< (std::ostream& strm, const ::MyBitset& _v)
{
  return IDL::traits<::MyBitset>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/bitset_os
inline std::ostream& operator<< (std::ostream& strm, const ::MyBitset2& _v)
{
  return IDL::traits<::MyBitset2>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_ECEACGGA_INCLUDED__ */

// -*- END -*-
