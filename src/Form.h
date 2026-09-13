#pragma once

class Triangle
{
    unsigned int m_offset;
    const unsigned int m_leg_length;

public:
    Triangle(unsigned int offset, unsigned int leg_length) : m_offset(offset), m_leg_length(leg_length) {}
    void setOffset(unsigned int offset) { m_offset = offset; }
    void draw() const;
};

class Circle
{
    unsigned int m_offset;
    const unsigned int m_radius;

public:
    Circle(unsigned int offset, unsigned int radius) : m_offset(offset), m_radius(radius) {}
    void setOffset(unsigned int offset) { m_offset = offset; }
    void draw() const;
};
