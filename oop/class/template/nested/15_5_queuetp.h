//
// Created by 莫绪旻 on 17/3/25.
//

#ifndef LEARNCPLUS_15_5_QUEUETP_H
#define LEARNCPLUS_15_5_QUEUETP_H

template<class T>
class QueueTP {
private:
    enum {
        Q_SIZE = 10
    };

    /**
     * 内部类使用模板
     */
    class Node {
    public:
        T item;
        Node *next;

        Node(const T &i) : item(i), next(0) {}
    };

    Node *front;
    Node *rear;
    int items;
    const int qsize;
public:
};

#endif //LEARNCPLUS_15_5_QUEUETP_H
