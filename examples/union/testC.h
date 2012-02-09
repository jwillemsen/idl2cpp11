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

// generated from c++/cli_hdr/struct_pre.erb
class Global
{
public:

  // generated from c++/cli_hdr/struct_post.erb
  Global (void);
  ~Global (void) = default;
  Global (const Global&) = default;
  Global (Global&&) = default;
  explicit Global (int32_t x);
  Global& operator= (const Global& x);
  Global& operator= (Global&& x);

  void x (int32_t _x);
  int32_t x (void) const;
  int32_t& x (void);

  void swap (Global& s);

private:
  int32_t x_;
}; // Global

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++/cli_hdr/enum.erb
  enum class DataType : uint32_t
  {
    dtEmpty,
    dtLong,
    dtShort,
    dtString,
    dtPoint,
    dtTrack,
    dtGlobal
  }; // DataType

  // generated from c++/cli_hdr/struct_pre.erb
  class Point
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Point (void);
    ~Point (void) = default;
    Point (const Point&) = default;
    Point (Point&&) = default;
    explicit Point (int32_t x,
                    int32_t y);
    Point& operator= (const Point& x);
    Point& operator= (Point&& x);

    void x (int32_t _x);
    int32_t x (void) const;
    int32_t& x (void);

    void y (int32_t _y);
    int32_t y (void) const;
    int32_t& y (void);

    void swap (Point& s);

  private:
    int32_t x_;
    int32_t y_;
  }; // Point

  // generated from c++/cli_hdr/struct_pre.erb
  class Track
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Track (void);
    ~Track (void) = default;
    Track (const Track&) = default;
    Track (Track&&) = default;
    explicit Track (int32_t id,
                    ::Test::Point p);
    Track& operator= (const Track& x);
    Track& operator= (Track&& x);

    void id (int32_t _id);
    int32_t id (void) const;
    int32_t& id (void);

    void p (const ::Test::Point& _p);
    void p (::Test::Point&& _p);
    const ::Test::Point& p (void) const;
    ::Test::Point& p (void);

    void swap (Track& s);

  private:
    int32_t id_;
    ::Test::Point p_;
  }; // Track

  // generated from c++/cli_hdr/union_pre.erb
  class Data
  {
  public:

    // generated from c++/cli_hdr/union_post.erb
    Data (void);
    Data (const Data&);
    Data (Data&&);
    ~Data (void);
    Data &operator= (const Data&);
    Data &operator= (Data&&);

    void _d (DataType);
    DataType _d (void) const;

    void longData (int32_t _longData);
    int32_t longData (void) const;
    int32_t& longData (void);

    void shortData (int16_t _shortData);
    int16_t shortData (void) const;
    int16_t& shortData (void);

    void stringData (const std::string& _stringData);
    void stringData (std::string&& _stringData);
    const std::string& stringData (void) const;
    std::string& stringData (void);

    void pointData (const ::Test::Point& _pointData);
    void pointData (::Test::Point&& _pointData);
    const ::Test::Point& pointData (void) const;
    ::Test::Point& pointData (void);

    void trackData (const ::Test::Track& _trackData);
    void trackData (::Test::Track&& _trackData);
    const ::Test::Track& trackData (void) const;
    ::Test::Track& trackData (void);

    void globalData (const ::Global& _globalData);
    void globalData (::Global&& _globalData);
    const ::Global& globalData (void) const;
    ::Global& globalData (void);

    void _default (void);

    void swap (Data& s);

  private:
    void _swap_u (Data& s);
    void _clear (void);

    DataType disc_;
    union u_type_
    {
      u_type_ (void);
      ~u_type_ (void);
      int32_t longData_;
      int16_t shortData_;
      std::string stringData_;
      ::Test::Point pointData_;
      ::Test::Track trackData_;
      ::Global globalData_;
    } u_;
  }; // Data

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
    bool pass_union (const ::Test::Data& s);

    // generated from c++/cli_hdr/operation.erb
    ::Test::Data return_union (void);

    // generated from c++/cli_hdr/operation.erb
    bool get_union (::Test::Data& s);

    // generated from c++/cli_hdr/operation.erb
    bool update_union (::Test::Data& s);

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
  void swap (::Global& m1, ::Global& m2);

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Point& m1, ::Test::Point& m2);

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Track& m1, ::Test::Track& m2);

  // generated from c++/cli_hdr/union_std.erb
  template <>
  void swap (::Test::Data& m1, ::Test::Data& m2);
}; // std

// generated from c++/cli_hdr/inline.erb
#include "testC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Global& m1, ::Global& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Point& m1, ::Test::Point& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Track& m1, ::Test::Track& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/union_std.erb
  template <>
  inline void swap (::Test::Data& m1, ::Test::Data& m2)
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
