
#ifndef FINAL_MEHDI_BASESTATE_H
#define FINAL_MEHDI_BASESTATE_H


class BaseState {
public:
    virtual void HandleInput() = 0;
    virtual void Update() = 0;
    virtual void Render() = 0;
};


#endif //FINAL_MEHDI_BASESTATE_H
