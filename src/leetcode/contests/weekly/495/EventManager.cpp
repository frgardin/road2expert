#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

class EventManager
{

private:
    struct Event
    {
        int id;
        int priority;
    };

    struct Comparator
    {
        bool operator()(const Event &a, const Event &b) const
        {
            if (a.priority == b.priority)
            {
                return a.id < b.id;
            }
            return a.priority > b.priority;
        }
    };
    set<Event, Comparator> eventSet;
    unordered_map<int, Event> eventMap;

public:
    EventManager(vector<vector<int>> &events)
    {
        eventSet.clear();
        eventMap.clear();

        for (auto v : events)
        {
            Event e;
            e.id = v.at(0);
            e.priority = v.at(1);
            eventSet.insert(e);
            eventMap.insert({e.id, e});
        }
    }

    void updatePriority(int eventId, int newPriority)
    {
        if (eventMap.count(eventId) > 0)
        {
            auto &event = eventMap.at(eventId);
            eventSet.erase(event);
            event.priority = newPriority;
            eventSet.insert(event);
        }
    }

    int pollHighest()
    {
        if (eventSet.size() > 0)
        {
            auto event = eventSet.begin();
            int id = event->id;
            eventSet.erase(event);
            return id;
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */