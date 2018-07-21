#ifndef FT_LIST
#define FT_LIST

#include <unistd.h>

struct typedef			s_list
{
	void 				*data;
	struct s_list		*next;
}						t_list;

#endif
