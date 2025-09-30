//https://austinmorlan.com/posts/entity_component_system/

#include <inttypes.h>
#include <array>
#include <queue>
#include <bitset>
#include <array>

#include "component.hpp"

using Entity = uint32_t;

const Entity MAX_ENTITIES = 10000;

using EntityComponentSignature = std::bitset<MAX_COMPONENTS>;

class EntityManager
{
    public:
        EntityManager();
        ~EntityManager();

        Entity CreateEntity();
        void DestroyEntity(Entity e);

        void SetSignature(Entity e, EntityComponentSignature signature);
        EntityComponentSignature GetSignature(Entity e);
    private:
        std::queue<Entity> m_AvailableEntities;
        uint32_t m_NumberOfLivingEntities;
        
        std::array<EntityComponentSignature, MAX_ENTITIES> m_Signatures;
};

