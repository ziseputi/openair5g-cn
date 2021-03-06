/**
* AMF Location Service
* AMF Location Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * GeographicalCoordinates.h
 *
 * 
 */

#ifndef GeographicalCoordinates_H_
#define GeographicalCoordinates_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GeographicalCoordinates
    : public ModelBase
{
public:
    GeographicalCoordinates();
    virtual ~GeographicalCoordinates();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GeographicalCoordinates members

    /// <summary>
    /// 
    /// </summary>
    float getLon() const;
    void setLon(float const value);
        /// <summary>
    /// 
    /// </summary>
    float getLat() const;
    void setLat(float const value);
    
protected:
    float m_Lon;

    float m_Lat;

};

}
}
}
}

#endif /* GeographicalCoordinates_H_ */
