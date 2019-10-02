/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        Duiven, GLD
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTS_H_DFDJFJIC_INCLUDED__
#define __RIDL_TESTS_H_DFDJFJIC_INCLUDED__

#pragma once

#include "testC.h"

#include "tao/x11/portable_server/servantbase.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.8.0). Please re-generate.
#endif

// generated from ServantHeaderWriter#enter_module
namespace Test
{

  // generated from c++11/templates/srv/hdr/interface_pre
  namespace POA
  {
    class Hello_srvproxy;
    typedef Hello_srvproxy* Hello_srvproxy_ptr;

    class Hello
      : public virtual TAOX11_NAMESPACE::PortableServer::Servant
    {
    public:
      /// @name Member types
      //@{
      typedef TAOX11_CORBA::servant_traits< Hello>    _traits_type;
      typedef TAOX11_CORBA::servant_reference< Hello> _ref_type;
      //@}

    protected:
      /// Constructor
      explicit Hello (bool inherited = false);

      /// Destructor
      virtual ~Hello ();

      virtual Servant_proxy_ptr get_proxy () const override;

      template <typename T> friend class TAOX11_CORBA::servant_reference;
    public:

      /// Determine if we are of the type specified by the @a logical_type_id.
      virtual bool _is_a (const std::string& logical_type_id) override;

      /// Returns a strong client reference for the servant you are calling
      IDL::traits< ::Test::Hello>::ref_type _this ();

      virtual const std::string &_interface_repository_id () const override;

      // generated from c++11/templates/srv/hdr/operation
      /// @copydoc test.idl::Test::Hello::get_string
      virtual
      std::string
      get_string () = 0;

    private:
      // generated from c++11/templates/srv/hdr/interface_post
      /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
      //@{
      Hello (const Hello&) = delete;
      Hello (Hello&&) = delete;
      Hello& operator= (const Hello&) = delete;
      Hello& operator= (Hello&&) = delete;
      //@}
      friend class POA::Hello_srvproxy;

      POA::Hello_srvproxy_ptr hello_srvproxy_{};
    };

  } // namespace POA
} // namespace Test


// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits< ::Test::Hello>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      typedef ::Test::POA::Hello
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::Test::POA::Hello>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::Test::POA::Hello>
          weak_ref_type;
      /// Try to narrow the provided reference @a base to a ::Test::Hello
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::Test::POA::Hello*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };
  } // namespace CORBA
} // namespace TAOX11_NAMESPACE

#endif /* __RIDL_TESTS_H_DFDJFJIC_INCLUDED__ */

// -*- END -*-
