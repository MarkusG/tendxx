#include <string>
#include <optional>
#include <ctime>

namespace tend
{
	std::string version();

	class Entity
	{
		private:
			int id_;
			time_t created_;
			std::optional<time_t> updated_;

		public:
			int get_Id();
			time_t get_Created();
			std::optional<time_t> get_Updated();
	};

	class Alias : public Entity
	{
		private:
			int entity_id_;
			std::string name_;

		public:
			int get_Entity_Id();
			std::string get_Name();
	};

	class Relation : public Entity
	{
		private:
			int entity_a_id_;
			int entity_b_id_;

		public:
			int get_Entity_A_Id();
			int get_Entity_B_Id();
	};

	class RelationSnippet : public Entity
	{
		private:
			int relation_id_;
			std::string data;

		public:
			int get_Relation_Id();
			std::string get_Data();
	};

	class Snippet : public Entity
	{
		private:
			int entity_id_;
			std::string data;
			
		public:
			int get_Entity_Id();
			std::string get_Data();
	};
} // namespace tend
