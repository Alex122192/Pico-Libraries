class 
Ultrasonic {
    private:
    int Echo;
    int Trig; 
    float t;
    void time_on();

    public:
    Ultrasonic(int Echo ,int Trig);
    float get_distance_cm();
    float get_distance_in();
};