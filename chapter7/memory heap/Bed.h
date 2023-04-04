class Bed
{
    private:
       int num_bed;
       int *length;
       int *width;

    public:
        Bed(){};
        Bed(int len);
        ~Bed()
        {
          delete[] length;
          delete[] width;
          length = nullptr;
          width = nullptr;
        }
        void price();
        void print_inf();
        void set_bed(int len);

};