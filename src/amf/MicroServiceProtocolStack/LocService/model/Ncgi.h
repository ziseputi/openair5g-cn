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
 * Ncgi.h
 *
 * 
 */

#ifndef Ncgi_H_
#define Ncgi_H_


#include "ModelBase.h"

#include <string>
#include "PlmnId.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Ncgi
    : public ModelBase
{
public:
    Ncgi();
    virtual ~Ncgi();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Ncgi members

    /// <summary>
    /// 
    /// </summary>
    PlmnId getPlmnId() const;
    void setPlmnId(PlmnId const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getNrCellId() const;
    void setNrCellId(std::string const& value);
    
protected:
    PlmnId m_PlmnId;

    std::string m_NrCellId;

};

}
}
}
}

#endif /* Ncgi_H_ */
