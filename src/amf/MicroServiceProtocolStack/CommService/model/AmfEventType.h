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
 * AmfEventType.h
 *
 * 
 */

#ifndef AmfEventType_H_
#define AmfEventType_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AmfEventType
    : public ModelBase
{
public:
    AmfEventType();
    virtual ~AmfEventType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AmfEventType members


protected:
};

}
}
}
}

#endif /* AmfEventType_H_ */