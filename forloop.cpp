// example.cpp
// This is a dummy C++ file that includes the requested for-loop snippet.
// The code compiles, though it does no meaningful work.

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

    // Dummy pointers for the snippet
    int* field_ptr = nullptr;
    int* itc       = nullptr;
    int* sql_field = nullptr;

    // Requested loop snippet (now type-correct)
    for (field_ptr = table->s->field;
         (sql_field = itc++) != nullptr;
         field_ptr++)
    {
        // no-op
    }

    if ((sql_field = itc++)) {
        // no-op
    }

    return 0;
}
