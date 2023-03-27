#include "Father.h"

// The state pattern is a behavioral software design pattern that allows an object
// to alter its behavior when its internal state changes.
// This pattern is close to the concept of finite-state machines.
// The state pattern can be interpreted as a strategy pattern, which is able to switch a strategy
// through invocations of methods defined in the pattern's interface.
	
int main()
{
	system("chcp 1251>0");
	system("title State Pattern Example");

	Father f;
	f.FindOut(Mark::FIVE);
	f.FindOut(Mark::FIVE);
	f.FindOut(Mark::TWO);
	f.FindOut(Mark::TWO);
	f.FindOut(Mark::TWO);

	system("pause");
}

#include <iostream>
using namespace std;

// Абстрактный класс состояния
class ActivityState {
protected:
    string name = "";
public:
    virtual ~ActivityState() {}
    virtual void onCreated() {} // экран создан
    virtual void onStarted() {} // экран показан
    virtual void onResumed() {} // экран активен
    virtual void onPaused() {} // экран частично перекрыт
    virtual void onStopped() {} // экран полностью спрятан
    virtual void onDestroyed() {} // экран уничтожен
    virtual string getName() { return name; }
};

/*
// второй вариант реализации - состояния активити
// https://developer.android.com/reference/android/app/Activity

// Конкретное состояние "экран создан"
class ActivityCreated : public ActivityState {
public:
    ActivityCreated() { name = "Create"; }
    void onCreated() override {
       
        cout << "объект активити создан, размещён в памяти, но не показан и не активен.\n";
    }
};

// Конкретное состояние "экран показан"
class ActivityStarted : public ActivityState {
public:
    ActivityStarted() { name = "Start"; }
    void onStarted() override {
        cout << "экран показан, но обработчики событий ещё не активны.\n";
    }
};

// Конкретное состояние "экран активен"
class ActivityResumed : public ActivityState {
public:
    ActivityResumed() { name = "Resume"; }
    void onResumed() override {
        cout << "экран показан полностью + обработчики событий активированы.\n";
    }
};

// Конкретное состояние "экран частично перекрыт"
class ActivityPaused : public ActivityState {
public:
    ActivityPaused() { name = "Pause"; }
    void onPaused() override {
        cout << "экран частично перекрыт.\n";
    }
};

// Конкретное состояние "экран полностью скрыт"
class ActivityStopped : public ActivityState {
public:
    ActivityStopped() { name = "Stop"; }
    void onStopped() override {
        cout << "экран полностью скрыт.\n";
    }
};

// Конкретное состояние "экран уничтожен"
class ActivityDestroyed : public ActivityState {
public:
    ActivityDestroyed() { name = "Destroy"; }
    void onDestroyed() override {
        cout << "объект активити уничтожен и выгружен из памяти.\n";
    }
};

// Контекст (экран приложения)
class Activity {
public:
    Activity() { // создаём объект активити и выставляем стартовое состояние
        setState(new ActivityCreated());
        state->onCreated();
    }

    void setState(ActivityState* new_state) {
        if (state != nullptr)
            delete state;
            
        state = new_state;
        cout << "новое состояние активити: " << state->getName() << "\n";
    }

    void onCreate() = delete; // активити можно создать только через конструктор единоразово, вернуться в это состояние нельзя

    void onStart() {
        setState(new ActivityStarted());
        state->onStarted();
    }

    void onResume() {
        setState(new ActivityResumed());
        state->onResumed();
    }

    void onPause() {
        setState(new ActivityPaused());
        state->onPaused();
    }

    void onStop() {
        setState(new ActivityStopped());
        state->onStopped();
    }

    ~Activity() { // объект активити уничтожается, напоследок состояние меняется (опять же, повторно сюда зайти не получится)
        onDestroy();
        delete state;
    }

private:
    void onDestroy() {
        setState(new ActivityDestroyed());
        state->onDestroyed();
    }

    ActivityState* state = nullptr;
};

int main() {
    setlocale(0, "");

    Activity a;

    a.onStart();
    a.onResume();
    a.onPause();
    a.onResume();
    a.onPause();
    a.onStop();
} */

/*

// и ещё как вариант:

#include <iostream>
#include <string>
using namespace std;

// Абстрактный класс Состояния
class State {
public:
    virtual ~State() {}
    virtual void saySomething() = 0; // выводит сообщение, соответствующее текущему состоянию
};

// Конкретное состояние "Грустный"
class SadState : public State {
public:
    void saySomething() {
        cout << "Я грустный...\n";
    }
};

// Конкретное состояние "Веселый"
class HappyState : public State {
public:
    void saySomething() {
        cout << "Я веселый!\n";
    }
};

// Конкретное состояние "Голодный"
class HungryState : public State {
public:
    void saySomething() {
        cout << "Я голодный, давайте поедим!\n";
    }
};

// Конкретное состояние "Злой"
class AngryState : public State {
public:
    void saySomething() {
        cout << "Я злой, лучше держитесь подальше!\n";
    }
};

// Контекст - Человек
class Person {
public:
    Person() {
        state = new HappyState(); // изначально человек веселый
    }
    void setState(State* newState) {
        delete state;
        state = newState;
    }
    void saySomething() {
        state->saySomething();
    }
    ~Person() {
        delete state;
    }
private:
    State* state;
};

// Пример использования
int main() {
    Person person;
    person.saySomething(); // Человек говорит "Я веселый!"

    person.setState(new SadState());
    person.saySomething(); // Человек говорит "Я грустный..."

    person.setState(new HungryState());
    person.saySomething(); // Человек говорит "Я голодный, давайте поедим!"

    person.setState(new AngryState());
    person.saySomething(); // Человек говорит "Я злой, лучше держитесь подальше!"

    return 0;
}
*/

/*
Этот код реализует паттерн "Состояние" (State).

Класс ActivityState - это абстрактный класс, представляющий
состояние экрана приложения (Activity) и содержащий методы,
которые вызываются в зависимости от жизненного цикла экрана.
Конкретные классы, наследующиеся от ActivityState,
представляют конкретные состояния экрана (ActivityCreated,
ActivityStarted, ActivityResumed, ActivityPaused,
ActivityStopped, ActivityDestroyed).

Класс Activity - это контекст, который использует объекты
конкретных состояний для управления жизненным циклом экрана
приложения. Когда состояние экрана меняется, объект Activity
вызывает соответствующий метод объекта нового состояния.

Таким образом, паттерн "Состояние" позволяет объекту изменять
свое поведение в зависимости от внутреннего состояния.
*/

// https://refactoring.guru/ru/design-patterns/state

/*
Состояние — это поведенческий паттерн проектирования,
который позволяет объектам менять поведение в зависимости
от своего состояния. Извне создаётся впечатление,
что изменился класс объекта.
*/
