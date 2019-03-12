/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
*
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "UEContextTransferApiImpl.h"
#include<iostream>

extern std::unordered_map<std::string,org::openapitools::server::model::UeContext> RecordUEContext;

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

UEContextTransferApiImpl::UEContextTransferApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : UEContextTransferApi(rtr)
    { }

void UEContextTransferApiImpl::u_e_context_transfer(const std::string &ueContextId, const UeContextTransferReqData &ueContextTransferReqData, Pistache::Http::ResponseWriter &response) {
    std::cout<<"ueContextId:"<<ueContextId<<"\nUEContextTransferReqData:"<<ueContextTransferReqData.toJson()<<std::endl;
    if(RecordUEContext.find(ueContextId)!=RecordUEContext.end())
    {
        response.send(Pistache::Http::Code::Ok, "UEContextTransferStart\n");
        //do the transfer operation.

        //
    }else
    {
        using std::string;
        string ResponseContent = "{\"cause\":\"CONTEXT_NOT_FOUND\"}";
        response.send(
                Pistache::Http::Code::Not_Found,
                ResponseContent,
                Pistache::Http::Mime::MediaType(Pistache::Http::Mime::Type::Application,Pistache::Http::Mime::Subtype::Json)
                );
    }
}

}
}
}
}
