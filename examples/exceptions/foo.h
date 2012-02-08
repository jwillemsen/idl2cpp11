#ifndef FOO_H
#define FOO_H
#include /**/ "ace/pre.h"

#include "testS.h"

/// Implement the Test::Foo interface
class Foo : public virtual CORBA::servant_traits<Test::Foo>::base_type
{
public:
  /// Constructor
  Foo (CORBA::object_reference<CORBA::ORB> orb);

  // = The skeleton methods
  virtual void do_it ();

  virtual int32_t a_number(void);

  virtual std::string a_string(void);
  virtual void a_string(const std::string& _v);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::object_reference<CORBA::ORB> orb_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */