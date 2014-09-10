#pragma once

#include <wal.h>

class StrConfig: public iIntrusiveCounter
{
	wal::cstrhash<std::vector<char> > varHash;
public:
	StrConfig();
	bool Load( const char* s );
	std::vector<char> GetConfig();
	void Set( const char* name, const char* value );
	void Set( const char* name, unsigned value );

	const char* GetStrVal( const char* name );
	int GetIntVal( const char* name ); //<0 - not found

	void Clear();
	~StrConfig();
};
