// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_GGIFHJAA_INCLUDED__
#define __RIDL_TESTC_H_GGIFHJAA_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/sequence_os_t.h"
#include "tao/x11/corba_ostream.h"

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/struct_pre.erb
class ShapeType
{
public:

  // generated from c++11/templates/cli/hdr/struct_post.erb
  inline ShapeType ();
  ~ShapeType () = default;
  ShapeType (const ShapeType&) = default;
  ShapeType (ShapeType&&) = default;
  explicit inline ShapeType (std::string color,
                      int32_t x,
                      int32_t y,
                      int32_t shapesize);
  inline ShapeType& operator= (const ShapeType& x);
  inline ShapeType& operator= (ShapeType&& x);

  inline void color (const std::string& _color);
  inline void color (std::string&& _color);
  inline const std::string& color () const;
  inline std::string& color ();

  inline void x (int32_t _x);
  inline int32_t x () const;
  inline int32_t& x ();

  inline void y (int32_t _y);
  inline int32_t y () const;
  inline int32_t& y ();

  inline void shapesize (int32_t _shapesize);
  inline int32_t shapesize () const;
  inline int32_t& shapesize ();

  inline void swap (ShapeType& s);

private:
  std::string color_;
  int32_t x_;
  int32_t y_;
  int32_t shapesize_;
};// ShapeType

// generated from c++11/templates/cli/hdr/struct_pre.erb
class Attributes
{
public:

  // generated from c++11/templates/cli/hdr/struct_post.erb
  inline Attributes ();
  ~Attributes () = default;
  Attributes (const Attributes&) = default;
  Attributes (Attributes&&) = default;
  explicit inline Attributes (std::string shape,
                       std::string color,
                       float speed);
  inline Attributes& operator= (const Attributes& x);
  inline Attributes& operator= (Attributes&& x);

  inline void shape (const std::string& _shape);
  inline void shape (std::string&& _shape);
  inline const std::string& shape () const;
  inline std::string& shape ();

  inline void color (const std::string& _color);
  inline void color (std::string&& _color);
  inline const std::string& color () const;
  inline std::string& color ();

  inline void speed (float _speed);
  inline float speed () const;
  inline float& speed ();

  inline void swap (Attributes& s);

private:
  std::string shape_;
  std::string color_;
  float speed_;
};// Attributes

// generated from c++11/templates/cli/hdr/typedef.erb

typedef std::vector < ::ShapeType> ShapeTypeSeq;

// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_SHAPETYPE_TRAITS_)
#define _STRUCT_SHAPETYPE_TRAITS_
    template<>
    struct traits < ::ShapeType>
      : IDL::common_traits< ::ShapeType>
    {
    };
#endif // _STRUCT_SHAPETYPE_TRAITS_

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_ATTRIBUTES_TRAITS_)
#define _STRUCT_ATTRIBUTES_TRAITS_
    template<>
    struct traits < ::Attributes>
      : IDL::common_traits< ::Attributes>
    {
    };
#endif // _STRUCT_ATTRIBUTES_TRAITS_

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < ::ShapeType>
    // MD5            : 577F3F73FFE5DD88BB19C22312215F43
#if !defined(_ALIAS_577F3F73FFE5DD88BB19C22312215F43_TRAITS_DECL_)
#define _ALIAS_577F3F73FFE5DD88BB19C22312215F43_TRAITS_DECL_

    template<>
    struct traits < ::ShapeTypeSeq>
      : IDL::common_traits< ::ShapeTypeSeq>
    {
      typedef std::false_type is_bounded;
      typedef IDL::traits< ::ShapeType> element_traits;
    };

#endif
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::ShapeType& m1, ::ShapeType& m2);

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::Attributes& m1, ::Attributes& m2);
}; // std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline ShapeType::ShapeType ()
           : color_ (std::string())
           , x_ (0)
           , y_ (0)
           , shapesize_ (0)
{
}
inline ShapeType::ShapeType (std::string color,
                             int32_t x,
                             int32_t y,
                             int32_t shapesize)
           : color_ (std::move (color))
           , x_ (std::move (x))
           , y_ (std::move (y))
           , shapesize_ (std::move (shapesize))
{
}

inline void ShapeType::color (const std::string& _color) { this->color_ = _color; }
inline void ShapeType::color (std::string&& _color) { this->color_ = std::move (_color); }
inline const std::string& ShapeType::color () const { return this->color_; }
inline std::string& ShapeType::color () { return this->color_; }

inline void ShapeType::x (int32_t _x) { this->x_ = _x; }
inline int32_t ShapeType::x () const { return this->x_; }
inline int32_t& ShapeType::x () { return this->x_; }

inline void ShapeType::y (int32_t _y) { this->y_ = _y; }
inline int32_t ShapeType::y () const { return this->y_; }
inline int32_t& ShapeType::y () { return this->y_; }

inline void ShapeType::shapesize (int32_t _shapesize) { this->shapesize_ = _shapesize; }
inline int32_t ShapeType::shapesize () const { return this->shapesize_; }
inline int32_t& ShapeType::shapesize () { return this->shapesize_; }

inline ::ShapeType& ShapeType::operator= (const ::ShapeType& x)
{
  if (this != &x) {
    this->color_ = x.color_;
    this->x_ = x.x_;
    this->y_ = x.y_;
    this->shapesize_ = x.shapesize_;
  }
  return *this;
}
inline ::ShapeType& ShapeType::operator= (::ShapeType&& x)
{
  this->color_ = std::move (x.color_);
  this->x_ = std::move (x.x_);
  this->y_ = std::move (x.y_);
  this->shapesize_ = std::move (x.shapesize_);
  return *this;
}

inline void ShapeType::swap (::ShapeType& s)
{
  std::swap (this->color_, s.color_);
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->shapesize_, s.shapesize_);
}

// generated from c++11/templates/cli/inl/struct_inl.erb
inline Attributes::Attributes ()
           : shape_ (std::string())
           , color_ (std::string())
           , speed_ (0.0)
{
}
inline Attributes::Attributes (std::string shape,
                               std::string color,
                               float speed)
           : shape_ (std::move (shape))
           , color_ (std::move (color))
           , speed_ (std::move (speed))
{
}

inline void Attributes::shape (const std::string& _shape) { this->shape_ = _shape; }
inline void Attributes::shape (std::string&& _shape) { this->shape_ = std::move (_shape); }
inline const std::string& Attributes::shape () const { return this->shape_; }
inline std::string& Attributes::shape () { return this->shape_; }

inline void Attributes::color (const std::string& _color) { this->color_ = _color; }
inline void Attributes::color (std::string&& _color) { this->color_ = std::move (_color); }
inline const std::string& Attributes::color () const { return this->color_; }
inline std::string& Attributes::color () { return this->color_; }

inline void Attributes::speed (float _speed) { this->speed_ = _speed; }
inline float Attributes::speed () const { return this->speed_; }
inline float& Attributes::speed () { return this->speed_; }

inline ::Attributes& Attributes::operator= (const ::Attributes& x)
{
  if (this != &x) {
    this->shape_ = x.shape_;
    this->color_ = x.color_;
    this->speed_ = x.speed_;
  }
  return *this;
}
inline ::Attributes& Attributes::operator= (::Attributes&& x)
{
  this->shape_ = std::move (x.shape_);
  this->color_ = std::move (x.color_);
  this->speed_ = std::move (x.speed_);
  return *this;
}

inline void Attributes::swap (::Attributes& s)
{
  std::swap (this->shape_, s.shape_);
  std::swap (this->color_, s.color_);
  std::swap (this->speed_, s.speed_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::ShapeType& m1, ::ShapeType& m2)
  {
    m1.swap (m2);
  }

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::Attributes& m1, ::Attributes& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++11/templates/cli/hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::ShapeType&);

// generated from c++11/templates/cli/hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::Attributes&);

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < ::ShapeType>
// MD5            : 577F3F73FFE5DD88BB19C22312215F43
#if !defined (_ALIAS_OSTREAM_577F3F73FFE5DD88BB19C22312215F43_DECL_)
#define _ALIAS_OSTREAM_577F3F73FFE5DD88BB19C22312215F43_DECL_

std::ostream&
taox11_print_ShapeTypeSeq (
    std::ostream& strm ,
    const ::ShapeTypeSeq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::ShapeTypeSeq& _v)
{
  strm << "std::vector < ::ShapeType>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_577F3F73FFE5DD88BB19C22312215F43_DECL_

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_GGIFHJAA_INCLUDED__

// -*- END -*-
