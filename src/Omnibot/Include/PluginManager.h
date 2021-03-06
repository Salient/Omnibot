#ifndef _PLUGIN_MANAGER_
#define _PLUGIN_MANAGER_

#include <string>
#include "../../Minibot/Include/ircInterface.h"
#include "../../Minibot/Include/ircNotifyClasses.h"
#include "PluginFactory.h"
#include "OmniPluginInterface.h"
#include "PluginUtils.h"
#include "NickManager.h"
#include <vector>

class OmniPlugin;
class PluginUtils;
class PluginFactory;

class PluginManager{
	public:
		PluginManager(ircInterface*, NickManager&);
		virtual ~PluginManager();
		bool load(std::string);
		bool unload(std::string);
		
		void pushMessage(ircMessage& );

	private:
		PluginUtils* _utils;
		std::vector<OmniPlugin*> _plugins;
		PluginFactory* _factory;

};

#endif
