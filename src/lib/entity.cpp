#include <entity.hpp>

EntityManager::EntityManager()
{
    m_NumberOfLivingEntities=0;
    for (Entity id=0;id<MAX_ENTITIES;id++)
    {
        m_AvailableEntities.push(id);
    }
}

EntityManager::~EntityManager()
{

}