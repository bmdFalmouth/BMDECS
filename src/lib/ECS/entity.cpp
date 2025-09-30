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

Entity EntityManager::CreateEntity()
{
    //we should do a runtime check
    if (m_NumberOfLivingEntities + 1 > MAX_ENTITIES)
        return -1;

    Entity e = m_AvailableEntities.front();
    m_AvailableEntities.pop();
    m_NumberOfLivingEntities++;

    return e;
}

void EntityManager::DestroyEntity(Entity e)
{
    //TODO: remove all component info

    //Put entities back in the queue
    m_AvailableEntities.push(e);
    m_NumberOfLivingEntities--;
}

EntityComponentSignature EntityManager::GetSignature(Entity e)
{
    //we should check if the entity is out of range
    return m_Signatures[e];
}

void EntityManager::SetSignature(Entity e, EntityComponentSignature signature)
{
    //again check if the entity is out of range
    m_Signatures[e] = signature;
}