class led{
    led();
    ofstream ledout[5];

    void On(LED_TYPE type);
    void Off(LED_TYPE type);
    void Out();
};