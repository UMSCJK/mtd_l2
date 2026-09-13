#pragma once

// Общий класс-предок для Triangle и Circle.
// 为 Triangle 和 Circle 抽取的公共基类。
class Form
{
protected:
    const unsigned int m_offset;

public:
    explicit Form(unsigned int offset) : m_offset(offset) {}
    virtual ~Form() {}

    // чисто виртуальная функция / 纯虚函数
    virtual void draw() const = 0;
};

class Triangle : public Form
{
    const unsigned int m_leg_length;

public:
    Triangle(unsigned int offset, unsigned int leg_length)
        : Form(offset), m_leg_length(leg_length) {}

    void draw() const override;
};

class Circle : public Form
{
    const unsigned int m_radius;

public:
    Circle(unsigned int offset, unsigned int radius)
        : Form(offset), m_radius(radius) {}

    void draw() const override;
};
