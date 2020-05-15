#pragma once

class Unit {
public:
    virtual int health() const = 0;
    virtual int power() const = 0;
};
