#include "Handle.h"


Handle::Handle()
{
	_successful = nullptr;
}

Handle::Handle(Handle * suvvessful)
{
	_successful = suvvessful;
}

Handle::~Handle()
{
}


void Handle::SetSuccessor(Handle * successful)
{
	_successful = successful;
}

Handle * Handle::GetSuccessor()
{

	return nullptr;
}