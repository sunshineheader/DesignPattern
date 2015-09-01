#pragma once
class Handle
{
public:
	virtual~Handle();
	virtual void HandleRequest() = 0;
	void SetSuccessor(Handle * successful);
	Handle * GetSuccessor();
protected:
	Handle();
	Handle(Handle * successful);
private:
	Handle *_successful;
};

