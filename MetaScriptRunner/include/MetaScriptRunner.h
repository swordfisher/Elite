/* 
* @Author: sxf
* @Date:   2015-11-05 21:21:50
* @Last Modified by:   sxf
* @Last Modified time: 2015-11-11 19:29:45
*/


#ifndef META_SCRIPT_RUNNER_H
#define META_SCRIPT_RUNNER_H

#include "ScriptRunner.h"
#include "oolua/oolua.h"

using namespace std;

class MetaScriptRunner : public ScriptRunner
{
public:
	virtual void Init();
	virtual Node* getRoot();
	virtual void Finished();
	static MetaScriptRunner* Create();

	bool run_file (string const &filename);
	bool load_file (string const &filename);
	bool load_chunk (string const &chunk);
	bool run_chunk (string const &chunk);
protected:
	OOLUA::Script vm;
	Node* root;

	MetaScriptRunner();
	~MetaScriptRunner();
};





#endif // META_SCRIPT_RUNNER_H