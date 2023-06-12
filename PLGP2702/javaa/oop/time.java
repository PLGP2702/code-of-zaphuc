package oop;
public class time {
    private static int hour;
    private static int minute;
    private static int second;
    
    public time(int hour, int minute, int second)
    {
        time.hour = hour;
        time.minute = minute;
        time.second = second;
    }

    public int gethour()
    {
        return hour;
    }

    public void setHour(int hour)
    {
        time.hour = hour;
    }

    public int getminute()
    {
        return minute;
    }

    public void setminute(int minute)
    {
        time.minute = minute;
    }

    public int getsesond()
    {
        return second;
    }

    public void setsecond(int second)
    {
        time.second = second;
    }

    @Override
    public String toString() {
        // TODO Auto-generated method stub
        return String.format("%02d:%02d:%02d",hour, minute, second);
    }

    public static void main(String[] args) {
        time time = new time(hour, minute, second);

        oop.time.second++;
        oop.time.minute += oop.time.second/60;
        oop.time.hour += oop.time.minute/60;
        oop.time.hour += oop.time.hour/24;
        oop.time.minute = oop.time.minute%60;
        oop.time.second = oop.time.second%60;
    }
}