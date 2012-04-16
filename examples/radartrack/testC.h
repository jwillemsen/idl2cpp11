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
#include "tao/x11/corba_ostream.h"

using namespace TAOX11_NAMESPACE;

// generated from c++/cli_hdr/typedef.erb
typedef std::vector < uint8_t> octetseq;
struct octetseq_idl_t {}; // IDL traits type-id

// generated from c++/cli_hdr/struct_pre.erb
class RadarTrack final
{
public:

  // generated from c++/cli_hdr/struct_post.erb
  inline RadarTrack (void);
  ~RadarTrack (void) = default;
  RadarTrack (const RadarTrack&) = default;
  RadarTrack (RadarTrack&&) = default;
  explicit inline RadarTrack (std::string id,
                       int32_t x,
                       int32_t y,
                       int32_t z,
                       ::octetseq plot);
  inline RadarTrack& operator= (const RadarTrack& x);
  inline RadarTrack& operator= (RadarTrack&& x);

  inline void id (const std::string& _id);
  inline void id (std::string&& _id);
  inline const std::string& id (void) const;
  inline std::string& id (void);

  inline void x (int32_t _x);
  inline int32_t x (void) const;
  inline int32_t& x (void);

  inline void y (int32_t _y);
  inline int32_t y (void) const;
  inline int32_t& y (void);

  inline void z (int32_t _z);
  inline int32_t z (void) const;
  inline int32_t& z (void);

  inline void plot (const ::octetseq& _plot);
  inline void plot (::octetseq&& _plot);
  inline const ::octetseq& plot (void) const;
  inline ::octetseq& plot (void);

  inline void swap (RadarTrack& s);

private:
  std::string id_;
  int32_t x_;
  int32_t y_;
  int32_t z_;
  ::octetseq plot_;
};// RadarTrack
typedef RadarTrack RadarTrack_idl_t; // IDL traits typename

// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace IDL {

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::octetseq_idl_t>
      : IDL::unbounded_traits< ::octetseq>,
        IDL::alias_traits< ::octetseq_idl_t,
                           ::octetseq>
    {
      typedef uint8_t&   element_cdr_to;
      typedef uint8_t  element_cdr_from;

      typedef IDL::traits< ::uint8_t_idl_t>  element_traits;
    };

    // generated from c++/cli_hdr/struct_idl_traits.erb
#if !defined (_STRUCT_RADARTRACK_TRAITS_)
#define _STRUCT_RADARTRACK_TRAITS_
    template<>
    struct traits < ::RadarTrack_idl_t>
      : IDL::common_traits< ::RadarTrack>
    {
    };
#endif // _STRUCT_RADARTRACK_TRAITS_
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::RadarTrack& m1, ::RadarTrack& m2);
}; // std

// generated from c++/cli_inl/struct_inl.erb
inline RadarTrack::RadarTrack ()
           : id_ (std::string())
           , x_ (0)
           , y_ (0)
           , z_ (0)
           , plot_ (std::vector < uint8_t> ())
{
}
inline RadarTrack::RadarTrack (std::string id,
                               int32_t x,
                               int32_t y,
                               int32_t z,
                               ::octetseq plot)
           : id_ (std::move (id))
           , x_ (std::move (x))
           , y_ (std::move (y))
           , z_ (std::move (z))
           , plot_ (std::move (plot))
{
}

inline void RadarTrack::id (const std::string& _id) { this->id_ = _id; }
inline void RadarTrack::id (std::string&& _id) { this->id_ = std::move (_id); }
inline const std::string& RadarTrack::id (void) const { return this->id_; }
inline std::string& RadarTrack::id (void) { return this->id_; }

inline void RadarTrack::x (int32_t _x) { this->x_ = _x; }
inline int32_t RadarTrack::x (void) const { return this->x_; }
inline int32_t& RadarTrack::x (void) { return this->x_; }

inline void RadarTrack::y (int32_t _y) { this->y_ = _y; }
inline int32_t RadarTrack::y (void) const { return this->y_; }
inline int32_t& RadarTrack::y (void) { return this->y_; }

inline void RadarTrack::z (int32_t _z) { this->z_ = _z; }
inline int32_t RadarTrack::z (void) const { return this->z_; }
inline int32_t& RadarTrack::z (void) { return this->z_; }

inline void RadarTrack::plot (const ::octetseq& _plot) { this->plot_ = _plot; }
inline void RadarTrack::plot (::octetseq&& _plot) { this->plot_ = std::move (_plot); }
inline const ::octetseq& RadarTrack::plot (void) const { return this->plot_; }
inline ::octetseq& RadarTrack::plot (void) { return this->plot_; }

inline ::RadarTrack& RadarTrack::operator= (const ::RadarTrack& x)
{
  if (this != &x) {
    this->id_ = x.id_;
    this->x_ = x.x_;
    this->y_ = x.y_;
    this->z_ = x.z_;
    this->plot_ = x.plot_;
  }
  return *this;
}
inline ::RadarTrack& RadarTrack::operator= (::RadarTrack&& x)
{
  this->id_ = std::move (x.id_);
  this->x_ = std::move (x.x_);
  this->y_ = std::move (x.y_);
  this->z_ = std::move (x.z_);
  this->plot_ = std::move (x.plot_);
  return *this;
}

inline void RadarTrack::swap (::RadarTrack& s)
{
  std::swap (this->id_, s.id_);
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->z_, s.z_);
  std::swap (this->plot_, s.plot_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::RadarTrack& m1, ::RadarTrack& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++/cli_hdr/sequence_os.erb
#if !defined (__TAOX11_OSSTREAM_STD_VECTOR_UINT8_T__DECL__)
#define __TAOX11_OSSTREAM_STD_VECTOR_UINT8_T__DECL__

#define __TAOX11_OSSTREAM_OCTETSEQ_IMPL__
std::ostream&
taox11_print_octetseq (
    std::ostream& strm ,
    const ::octetseq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::octetseq& _v)
{
  return taox11_print_octetseq (strm, _v);
}

#endif // __TAOX11_OSSTREAM_STD_VECTOR_UINT8_T__DECL__

// generated from c++/cli_hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::RadarTrack&);

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-
