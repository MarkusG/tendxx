#include <string>
#include <optional>
#include <ctime>

namespace tend {

std::string version();

struct Entity
{
		int id;
		std::time_t created;
		std::optional<std::time_t> updated;

		Entity(const int id, const std::time_t created, std::optional<std::time_t> updated);
};

struct Alias : public Entity
{
		Entity& entity;
		std::string name;

		Alias(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity, std::string name);
};

struct Relation : public Entity
{
		Entity& entity_a;
		Entity& entity_b;

		Relation(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity_a, Entity& entity_b);
};

struct RelationSnippet : public Entity
{
		Relation& relation;
		std::string data;

		RelationSnippet(const int id, const std::time_t created, std::optional<std::time_t> updated, Relation& relation, std::string data);
};

struct Snippet : public Entity
{
		Entity& entity;
		std::string data;

		Snippet(const int id, const std::time_t created, std::optional<std::time_t> updated, Entity& entity, std::string data);
};

} // namespace tend
