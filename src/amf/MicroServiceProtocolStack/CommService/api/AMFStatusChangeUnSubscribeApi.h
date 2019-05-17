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
/*
 * AMFStatusChangeUnSubscribeApi.h
 *
 * 
 */

#ifndef AMFStatusChangeUnSubscribeApi_H_
#define AMFStatusChangeUnSubscribeApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  AMFStatusChangeUnSubscribeApi {
public:
    AMFStatusChangeUnSubscribeApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~AMFStatusChangeUnSubscribeApi() {}
    void init();

    const std::string base = "/namf-comm/v1";

private:
    void setupRoutes();

    void a_mf_status_change_un_subscribe_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void amf_status_change_un_subscribe_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_Communication AMF Status Change UnSubscribe service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="subscriptionId">AMF Status Change Subscription Identifier</param>
    virtual void a_mf_status_change_un_subscribe(const std::string &subscriptionId, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* AMFStatusChangeUnSubscribeApi_H_ */
