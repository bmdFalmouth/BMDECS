//https://austinmorlan.com/posts/entity_component_system/

#include <inttypes.h>
#include <array>
#include <queue>

using Entity = uint32_t;

const Entity MAX_ENTITIES = 10000;

class EntityManager
{
    public:
        EntityManager();
        ~EntityManager();
    private:
        std::queue<Entity> m_AvailableEntities;
        uint32_t m_NumberOfLivingEntities;
};

