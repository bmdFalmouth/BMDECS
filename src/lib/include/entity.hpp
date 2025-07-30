struct Entity
{
    unsigned int id;
    
    Entity();
    ~Entity(){};

    Entity(const Entity& data)=default;
    Entity(const Entity&& data);
};