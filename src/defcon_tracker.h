#ifndef DEFCON_TRACKER_H
#define DEFCON_TRACKER_H

class DefconTracker {
public:
    void setDefconNumber(int num);
    int getDefconNumber();

private:
    int defconNumber = 0;
};

#endif // DEFCON_TRACKER_H