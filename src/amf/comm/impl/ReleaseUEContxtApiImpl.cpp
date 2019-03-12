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

#include "ReleaseUEContxtApiImpl.h"
#include "CreateUEContxtApiImpl.h"
#include <unordered_map>
#include <iostream>



/// <summary>
///
/// </summary>

extern std::unordered_map<std::string, org::openapitools::server::model::UeContext> RecordUEContext;

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

ReleaseUEContxtApiImpl::ReleaseUEContxtApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : ReleaseUEContxtApi(rtr)
    { }

void ReleaseUEContxtApiImpl::release_ue_context(const std::string &ueContextId, const UEContextRelease &uEContextRelease, Pistache::Http::ResponseWriter &response) {
    std::cout<<"Received:\nueContextId:"<<ueContextId<<"\nUEContextRelease:"<<uEContextRelease.toJson()<<std::endl;

    if(RecordUEContext.find(ueContextId)!=RecordUEContext.end())
    {
        RecordUEContext.erase(ueContextId);
        std::cout<<"Release:\nueContextId:"<<ueContextId<<"\nUEContextRelease"<<std::endl;
        response.send(Pistache::Http::Code::No_Content, "ReleaseUeContext\n");
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
