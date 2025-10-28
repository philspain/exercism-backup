#include "simple_linked_list.h"

namespace simple_linked_list {

  std::size_t List::size() const {
    // TODO: Return the correct size of the list.
    return this->current_size;
  }

  void List::push(int entry) {
    // TODO: Implement a function that pushes an Element with `entry` as data to
    // the front of the list.

    Element *new_entry = new Element{entry};
    new_entry->next = this->head;
    this->head = new_entry;
    this->current_size++;
  }

  int List::pop() {
    // TODO: Implement a function that returns the data value of the first
    // element in the list then discard that element.
    if (this->head == nullptr)
      return 0;

    int value = this->head->data;
    this->head = this->head->next;
    this->current_size--;
    return value;
  }

  void List::reverse() {
    // TODO: Implement a function to reverse the order of the elements in the
    // list.
    if (this->head == nullptr)
      return;

    Element *curr = this->head, *prev{nullptr}, *next;
    while (curr != nullptr) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    this->head = prev;
  }

  List::~List() {
    // TODO: Ensure that all resources are freed on destruction
    // delete this->head;
  }

} // namespace simple_linked_list
