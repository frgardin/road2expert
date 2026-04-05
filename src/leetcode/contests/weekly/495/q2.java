import java.util.*;

class EventManager {

    static class Event {
        int id;
        int priority;

        public Event(int id, int priority) {
            this.id = id;
            this.priority = priority;
        }
    }
    
    private TreeSet<Event> eventSet;
    private Map<Integer, Event> eventMap;
    
    public EventManager(int[][] events) {
        this.eventSet = new TreeSet<>((a, b) -> b.priority == a.priority ? 
                                              a.id - b.id : b.priority - a.priority);
        this.eventMap = new HashMap<>();
        
        for (int[] eventData : events) {
            Event event =  new Event(eventData[0], eventData[1]);
            this.eventSet.add(event);
            this.eventMap.put(event.id, event);
        }        
    }
    
    public void updatePriority(int eventId, int newPriority) {
        if (eventMap.containsKey(eventId)) {
            Event event = eventMap.get(eventId);
            eventSet.remove(event);
            event.priority = newPriority;
            eventSet.add(event);
        }
    }
    
    public int pollHighest() {
        if (eventSet.isEmpty()) {
            return -1;
        }
        return eventSet.pollFirst().id;
    }
}

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager obj = new EventManager(events);
 * obj.updatePriority(eventId,newPriority);
 * int param_2 = obj.pollHighest();
 */