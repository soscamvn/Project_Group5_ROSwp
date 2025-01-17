// Generated by gencpp from file ur10e_rg2_moveit/MoverService.msg
// DO NOT EDIT!


#ifndef UR10E_RG2_MOVEIT_MESSAGE_MOVERSERVICE_H
#define UR10E_RG2_MOVEIT_MESSAGE_MOVERSERVICE_H

#include <ros/service_traits.h>


#include <ur10e_rg2_moveit/MoverServiceRequest.h>
#include <ur10e_rg2_moveit/MoverServiceResponse.h>


namespace ur10e_rg2_moveit
{

struct MoverService
{

typedef MoverServiceRequest Request;
typedef MoverServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MoverService
} // namespace ur10e_rg2_moveit


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur10e_rg2_moveit::MoverService > {
  static const char* value()
  {
    return "07e33edf2aa9c8e76159dde43e741ae0";
  }

  static const char* value(const ::ur10e_rg2_moveit::MoverService&) { return value(); }
};

template<>
struct DataType< ::ur10e_rg2_moveit::MoverService > {
  static const char* value()
  {
    return "ur10e_rg2_moveit/MoverService";
  }

  static const char* value(const ::ur10e_rg2_moveit::MoverService&) { return value(); }
};


// service_traits::MD5Sum< ::ur10e_rg2_moveit::MoverServiceRequest> should match
// service_traits::MD5Sum< ::ur10e_rg2_moveit::MoverService >
template<>
struct MD5Sum< ::ur10e_rg2_moveit::MoverServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur10e_rg2_moveit::MoverService >::value();
  }
  static const char* value(const ::ur10e_rg2_moveit::MoverServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur10e_rg2_moveit::MoverServiceRequest> should match
// service_traits::DataType< ::ur10e_rg2_moveit::MoverService >
template<>
struct DataType< ::ur10e_rg2_moveit::MoverServiceRequest>
{
  static const char* value()
  {
    return DataType< ::ur10e_rg2_moveit::MoverService >::value();
  }
  static const char* value(const ::ur10e_rg2_moveit::MoverServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur10e_rg2_moveit::MoverServiceResponse> should match
// service_traits::MD5Sum< ::ur10e_rg2_moveit::MoverService >
template<>
struct MD5Sum< ::ur10e_rg2_moveit::MoverServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur10e_rg2_moveit::MoverService >::value();
  }
  static const char* value(const ::ur10e_rg2_moveit::MoverServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur10e_rg2_moveit::MoverServiceResponse> should match
// service_traits::DataType< ::ur10e_rg2_moveit::MoverService >
template<>
struct DataType< ::ur10e_rg2_moveit::MoverServiceResponse>
{
  static const char* value()
  {
    return DataType< ::ur10e_rg2_moveit::MoverService >::value();
  }
  static const char* value(const ::ur10e_rg2_moveit::MoverServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR10E_RG2_MOVEIT_MESSAGE_MOVERSERVICE_H
