// -*- C++ -*-
/**
 * @file    hello_sender_exec.h
 * @author  Johnny Willemsen
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */
#ifndef __RIDL_HELLO_SENDER_EXEC_H_IJCECFCD_INCLUDED__
#define __RIDL_HELLO_SENDER_EXEC_H_IJCECFCD_INCLUDED__

//@@{__RIDL_REGEN_MARKER__} - HEADER_END : hello_sender_impl.h[Header]

#include "hello_senderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "hello_sender_exec_export.h"


//@@{__RIDL_REGEN_MARKER__} - BEGIN : hello_sender_impl.h[user_includes]
#include "ace/Task.h"
//@@{__RIDL_REGEN_MARKER__} - END : hello_sender_impl.h[user_includes]

//@@{__RIDL_REGEN_MARKER__} - BEGIN : hello_sender_impl.h[user_global_decl]
// Your declarations here
//@@{__RIDL_REGEN_MARKER__} - END : hello_sender_impl.h[user_global_decl]

/// Namespace for implementation of Hello::Sender component
namespace CIAO_Hello_Sender_Impl
{
  /// Forward declarations
  class Sender_exec_i;

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl[user_namespace_decl]
  class foo_generator : public ACE_Task_Base
  {
  public:
    foo_generator() = default;
    void set_context(IDL::traits<Hello::CCM_Sender_Context>::ref_type context);
    virtual int svc() override;

  private:
    IDL::traits<Hello::CCM_Sender_Context>::ref_type context_;
  };

  /// Worker thread for synchronous invocations
  class bar_generator : public ACE_Task_Base
  {
  public:
    bar_generator () = default;
    void set_context(IDL::traits<Hello::CCM_Sender_Context>::ref_type context);
    virtual int svc () override;

  private:
    IDL::traits<Hello::CCM_Sender_Context>::ref_type context_;
  };
  //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl[user_namespace_decl]


  /// Component Executor Implementation Class : Sender_exec_i
  class Sender_exec_i final
    : public virtual IDL::traits< Sender_Exec>::base_type
  {
  public:
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl::Sender_exec_i[ctor]
    /// Constructor
    Sender_exec_i ();
    //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl::Sender_exec_i[ctor]
    /// Destructor
    virtual ~Sender_exec_i ();

    /** @name Component port operations. */
    //@{

    //@}

    /** @name Session component operations */
    //@{

    /// Setter for container context for this component
    /// @param[in] ctx Component context
    virtual void set_session_context (IDL::traits<Components::SessionContext>::ref_type ctx) override;

    /// Component state change method to configuration_complete state
    virtual void configuration_complete () override;

    /// Component state change method to activated state
    virtual void ccm_activate () override;

    /// Component state change method to passivated state
    virtual void ccm_passivate () override;

    /// Component state change method to removed state
    virtual void ccm_remove () override;
    //@}

    /** @name User defined public operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl::Sender_exec_i[user_public_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl::Sender_exec_i[user_public_ops]
    //@}

  private:
    /// Context for component instance.
    IDL::traits< ::Hello::CCM_Sender_Context >::ref_type context_;

    /** @name Component facets. */
    //@{
    //@}

    /** @name User defined members. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl::Sender_exec_i[user_members]
    foo_generator foo_gen_;
    bar_generator bar_gen_;
    //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl::Sender_exec_i[user_members]
    //@}

    /** @name User defined private operations. */
    //@{
    //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl::Sender_exec_i[user_private_ops]
    // Your code here
    //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl::Sender_exec_i[user_private_ops]
    //@}

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Sender_exec_i(const Sender_exec_i&) = delete;
    Sender_exec_i(Sender_exec_i&&) = delete;
    Sender_exec_i& operator=(const Sender_exec_i&) = delete;
    Sender_exec_i& operator=(Sender_exec_i&&) = delete;
    //@}
  };

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl[user_namespace_end_decl]
  //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl[user_namespace_end_decl]

  //@@{__RIDL_REGEN_MARKER__} - BEGIN : CIAO_Hello_Sender_Impl[factory]
  extern "C" HELLO_SENDER_EXEC_Export  IDL::traits<Components::EnterpriseComponent>::ref_type
  create_Hello_Sender_Impl ();
  //@@{__RIDL_REGEN_MARKER__} - END : CIAO_Hello_Sender_Impl[factory]

} // namespace CIAO_Hello_Sender_Impl
//@@{__RIDL_REGEN_MARKER__} - BEGIN : hello_sender_impl.h[Footer]

#endif /* __RIDL_HELLO_SENDER_EXEC_H_IJCECFCD_INCLUDED__ */

// Your footer (code) here
// -*- END -*-