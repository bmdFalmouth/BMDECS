#include <entity.hpp>

Entity::Entity()
{
    id=0;
}

Entity::Entity(const Entity&& data)
{
    id=data.id;
}