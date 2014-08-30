
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_transport_SocketTransport__
#define __gnu_classpath_jdwp_transport_SocketTransport__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace transport
        {
            class SocketTransport;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class Socket;
    }
  }
}

class gnu::classpath::jdwp::transport::SocketTransport : public ::java::lang::Object
{

public: // actually package-private
  SocketTransport();
public:
  virtual void configure(::java::util::HashMap *);
  virtual void initialize();
  virtual void shutdown();
  virtual ::java::io::InputStream * getInputStream();
  virtual ::java::io::OutputStream * getOutputStream();
  static ::java::lang::String * NAME;
private:
  static ::java::lang::String * _PROPERTY_ADDRESS;
  static ::java::lang::String * _PROPERTY_SERVER;
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) _port;
  ::java::lang::String * _host;
  jboolean _server;
  ::java::net::Socket * _socket;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_transport_SocketTransport__