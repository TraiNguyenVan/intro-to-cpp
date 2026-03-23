// Vector.h
class Vector {
public:
    // Constructors and destructor
    Vector(int s);
    ~Vector();

    // Copy operations (Rule of Three/Five)
    Vector(const Vector& other);
    Vector& operator=(const Vector& other);

    // Move operations (Rule of Five)
    Vector(Vector&& other) noexcept;
    Vector& operator=(Vector&& other) noexcept;

    // Element access with bounds checking
    double& operator[](int i);
    const double& operator[](int i) const;

    int size() const;

private:
    double* elem;
    int sz;
};
