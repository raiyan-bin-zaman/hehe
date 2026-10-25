#include <stdio.h>

/* TEMPLATE: replace the record fields and the rule with YOUR project's
   classifying rule from your idea-submission form.
   Example domain here: a stock item that is "due for attention"
   when quantity is below its reorder level. */

#define REORDER_LEVEL 10

/* returns 1 if the record needs attention, 0 otherwise */
int needs_attention(int quantity)
{
    int result;

    if (quantity < REORDER_LEVEL)
        result = 1;
    else
        result = 0;

    return result;
}

int main(void)
{
    int id = 101;          /* use a record from your Version 3 */
    int quantity = 7;

    printf("Record: id %d, quantity %d\n", id, quantity);

    if (needs_attention(quantity))
        printf("Verdict: DUE FOR ATTENTION\n");
    else
        printf("Verdict: OK\n");

    return 0;
}

/* https://claude.ai/share/7e64f3d6-bff6-48a6-9682-b384360199d6 */
