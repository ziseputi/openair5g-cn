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


#include "AmfStatusInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

AmfStatusInfo::AmfStatusInfo()
{
    
}

AmfStatusInfo::~AmfStatusInfo()
{
}

void AmfStatusInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json AmfStatusInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["guamis"] = ModelBase::toJson(m_Guamis);
    val["statusChange"] = ModelBase::toJson(m_StatusChange);
    

    return val;
}

void AmfStatusInfo::fromJson(const nlohmann::json& val)
{
    
}


Guami AmfStatusInfo::getGuamis() const
{
    return m_Guamis;
}
void AmfStatusInfo::setGuamis(Guami const& value)
{
    m_Guamis = value;
    
}
StatusChange AmfStatusInfo::getStatusChange() const
{
    return m_StatusChange;
}
void AmfStatusInfo::setStatusChange(StatusChange const& value)
{
    m_StatusChange = value;
    
}

}
}
}
}
