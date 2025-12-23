#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string num;
    string sex;
    string phone;
    Student *next;
};

Student *head = nullptr;

void addStudent();
void showAll();
void deleteStudent();
void findStudent();
void modifyStudent();
void countStudents(); // 新增统计人数

int main() {
    int choice;
    while (true) {
        cout << "\n==== 通讯录管理系统 ====\n";
        cout << "1. 添加信息\n";
        cout << "2. 显示全部\n";
        cout << "3. 删除信息\n";
        cout << "4. 查找信息\n";
        cout << "5. 修改信息\n";
        cout << "6. 统计人数\n";   // 新增选项
        cout << "7. 退出\n";
        cout << "请选择(1~7): ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: showAll(); break;
            case 3: deleteStudent(); break;
            case 4: findStudent(); break;
            case 5: modifyStudent(); break;
            case 6: countStudents(); break; // 调用统计人数
            case 7: return 0;
            default: cout << "输入错误！\n";
        }
    }
    return 0;
}

void addStudent() {
    Student *p = new Student;
    cout << "姓名: "; cin >> p->name;
    cout << "学号: "; cin >> p->num;
    cout << "性别: "; cin >> p->sex;
    cout << "手机号: "; cin >> p->phone;

    p->next = nullptr;
    if (head == nullptr) {
        head = p;
    } else {
        Student *q = head;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = p;
    }
    cout << "添加成功！\n";
}

void showAll() {
    if (head == nullptr) {
        cout << "无记录！\n";
        return;
    }
    Student *p = head;
    while (p != nullptr) {
        cout << "姓名:" << p->name 
             << "\t学号:" << p->num 
             << "\t性别:" << p->sex 
             << "\t手机号:" << p->phone << "\n";
        p = p->next;
    }
}

void deleteStudent() {
    if (!head) {
        cout << "无记录！\n";
        return;
    }
    string name;
    cout << "输入要删除的姓名: ";
    cin >> name;

    Student *p = head;
    Student *prev = nullptr;
    while (p && p->name != name) {
        prev = p;
        p = p->next;
    }
    if (p == nullptr) {
        cout << "未找到该用户！\n";
        return;
    }
    if (prev == nullptr) {
        head = p->next;
    } else {
        prev->next = p->next;
    }
    delete p;
    cout << "删除成功！\n";
}

void findStudent() {
    if (!head) {
        cout << "无记录！\n";
        return;
    }
    string name;
    cout << "输入要查找的姓名: ";
    cin >> name;

    Student *p = head;
    while (p != nullptr) {
        if (p->name == name) {
            cout << "找到: " 
                 << p->name << " " 
                 << p->num << " " 
                 << p->sex << " " 
                 << p->phone << "\n";
            return;
        }
        p = p->next;
    }
    cout << "未找到记录！\n";
}

void modifyStudent() {
    if (!head) {
        cout << "无记录！\n";
        return;
    }
    string name;
    cout << "输入要修改的姓名: ";
    cin >> name;

    Student *p = head;
    while (p != nullptr) {
        if (p->name == name) {
            cout << "新学号: "; cin >> p->num;
            cout << "新性别: "; cin >> p->sex;
            cout << "新手机号: "; cin >> p->phone;
            cout << "修改成功！\n";
            return;
        }
        p = p->next;
    }
    cout << "未找到记录！\n";
}

// 统计当前通讯录人数
void countStudents() {
    int count = 0;
    Student *p = head;
    while (p != nullptr) {
        count++;
        p = p->next;
    }
    cout << "当前通讯录人数: " << count << "\n";
}
