#ifndef SERVER_SERVICE_TABLE_SERVICE_HPP
#define SERVER_SERVICE_TABLE_SERVICE_HPP

#include "server/service/base_service.hpp"

#include "engine/status.hpp"
#include "util/coordinate.hpp"
#include "osrm/osrm.hpp"

#include <string>
#include <vector>

namespace osrm
{
namespace server
{
namespace service
{

class TableService final : public BaseService
{
  public:
    TableService(OSRM& routing_machine) : BaseService(routing_machine) {}

    virtual engine::Status RunQuery(std::vector<util::FixedPointCoordinate> coordinates,
                                    std::string &options,
                                    util::json::Object &json_result) final override;
    virtual unsigned GetVersion() final override { return 1; }
};
}
}
}

#endif
