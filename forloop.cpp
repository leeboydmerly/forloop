// example.cpp
// This is a dummy C++ file that includes the requested for‑loop snippet.
// The code may not perform any meaningful work, but it compiles.

#include <cstddef>

struct S {
    int* field;
};

struct Table {
    S* s;
};

int main() {
    // Set up dummy instances
    S s_instance;
    s_instance.field = nullptr;
    Table table_instance;
    table_instance.s = &s_instance;
    Table* table = &table_instance;

    // Dummy pointers and variable for the snippet
    int* field_ptr = nullptr;
    int* itc = nullptr;
    int sql_field = 0;

    // Requested loop snippet
    for (field_ptr = table->s->field; (sql_field = itc++); field_ptr++) {
        // no-op
    }

    return 0;
}
