/*--------------------------------------------------------------------
 * hello_receiver_exec.h - CIAO C++11 hello receiver component
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#ifndef CIAO_HELLO_RECEIVER_EXEC_H_
#define CIAO_HELLO_RECEIVER_EXEC_H_

#include "Hello_ReceiverEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "Hello_Receiver_exec_export.h"

namespace CIAO_Hello_Receiver_Impl
{
  class MyFoo_exec_i final : public Hello::CCM_MyFoo
  {
  public:
    MyFoo_exec_i (IDL::traits<Hello::CCM_Receiver_Context>::ref_type ctx);
    virtual ~MyFoo_exec_i ();

    virtual int32_t foo (const std::string& in_str, std::string& answer) override;

    virtual void hello (int32_t& answer) override;

    virtual int16_t rw_attrib () override;

    virtual void rw_attrib (int16_t new_value) override;

    virtual int16_t ro_attrib () override;
  private:
    IDL::traits<Hello::CCM_Receiver_Context>::ref_type ciao_context_;
    bool get_rw_;
    bool get_ro_;
  };

  class Receiver_exec_i final  : public Receiver_Exec
  {
  public:
    Receiver_exec_i ();
    virtual ~Receiver_exec_i ();

    virtual IDL::traits<Hello::CCM_MyFoo>::ref_type get_do_my_foo () override;

    virtual void set_session_context (IDL::traits<Components::SessionContext>::ref_type ctx) override;

    virtual void configuration_complete () override;

    virtual void ccm_activate () override;
    virtual void ccm_passivate () override;
    virtual void ccm_remove () override;

  private:
    IDL::traits<Hello::CCM_Receiver_Context>::ref_type context_;
    IDL::traits<Hello::CCM_MyFoo>::ref_type ciao_do_my_foo_;
  };

  extern "C" HELLO_RECEIVER_EXEC_Export IDL::traits<Components::EnterpriseComponent>::ref_type
  create_Hello_AMI_Receiver_Impl ();
}

#endif /* ifndef */
