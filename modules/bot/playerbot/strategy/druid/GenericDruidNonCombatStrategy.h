#pragma once

#include "../generic/NonCombatStrategy.h"

namespace BotAI
{
    class GenericDruidNonCombatStrategy : public NonCombatStrategy
    {
    public:
        GenericDruidNonCombatStrategy(PlayerbotAI* ai);
        virtual string getName() { return "nc"; }

    public:
        virtual void InitTriggers(std::list<TriggerNode*> &triggers);
    };
}
