#include <string>

#include <version.h>

#include <tend.hpp>

std::string tend::version()
{
	return TEND_VERSION;
}

tend::Entity::Entity(const int id, const std::time_t created, std::optional<std::time_t> updated)
	: id(id), created(created), updated(updated) {};

tend::Alias::Alias(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity, std::string name)
	: Entity(id, created, updated), entity(entity), name(name) {};

tend::Relation::Relation(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity_a, Entity& entity_b)
	: Entity(id, created, updated), entity_a(entity_a), entity_b(entity_b) {};

tend::RelationSnippet::RelationSnippet(const int id, const std::time_t created, std::optional<std::time_t> updated, Relation& relation, std::string data)
	: Entity(id, created, updated), relation(relation), data(data) {};

tend::Snippet::Snippet(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity, std::string data)
	: Entity(id, created, updated), entity(entity), data(data) {};
