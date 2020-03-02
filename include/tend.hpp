#include <string>
#include <ctime>

namespace tend
{
	std::string version();

	class Entity
	{
		private:
			int id_;
			time_t created_;

		public:
			int get_Id();
			time_t get_Time();
	};
}
