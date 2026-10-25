# CSE 115L Lab 06 — Task Sheet Answers

## E6.1 (1 mark) — predicted, then actual (p = 12, q = 5)
| Expression | Predicted | Actual |
|---|---|---|
| p > q | 1 | 1 |
| p == q | 0 | 0 |
| p % q == 2 | 1 (12 % 5 = 2) | 1 |
| !(p > q) | 0 | 0 |
| p > 10 && q > 10 | 0 (1 && 0) | 0 |
| p > 10 \|\| q > 10 | 1 | 1 |
| !p | 0 (p is non-zero) | 0 |
| p && q | 1 | 1 |

Write the Predicted column BEFORE running anything (Rule 8).

## E6.2 (1 mark) — see e6_2.c
Demonstrate with your own N and one out-of-range value. Sample (stand-in N = 1234):
- 1234 -> Out of range, Even
- 1235 -> Out of range
- 42 -> In range, Even
- -7 -> Out of range

## M6.1 (1 mark) — see m6_1.c (one `if`, no `else`, swap via temp)
Inputs 9.5 then 3.25, and 3.25 then 9.5, both print `3.25 9.50`.

## M6.2 (1 mark) — see m6_2.c
Condition: `(year % 4 == 0 && year % 100 != 0) || year % 400 == 0`
| Year | Answer |
|---|---|
| 2024 | leap year |
| 1900 | not a leap year |
| 2000 | leap year |
| 2026 | not a leap year |

## M6.3 (2 marks) — see m6_3_template.c
Must use YOUR project's rule from the idea submission form; function returns the result;
print record and verdict; one if with two alternatives.

## C6.1 (2 marks) — see c6_1.c
Guard and division are in one condition: `count != 0 && (average = (double)total / count, 1)`.
- total 425, count 6 -> `Average = 70.83`
- total 425, count 0 -> `Cannot compute an average: count is zero.` (no crash)

## C6.2 (2 marks) — three defects (gcc 13.3, -Wall, input `250 1`)
| # | Defect | Warning quoted | Corrected line |
|---|---|---|---|
| 1 | `0 <= mark <= 100` is always true | `comparison of constant '100' with boolean expression is always true [-Wbool-compare]` and `comparisons like 'X<=Y<=Z' do not have their mathematical meaning [-Wparentheses]` | `if (0 <= mark && mark <= 100)` |
| 2 | `=` instead of `==`; **this is the one that changed a variable** (credits 1 became 3) | `suggest parentheses around assignment used as truth value [-Wparentheses]` | `if (credits == 3)` |
| 3 | Semicolon after the condition; PASS prints always | `this 'if' clause does not guard... [-Wmisleading-indentation]` (only because the next line is indented; flush left gives no warning) | `if (mark >= 60)` |

After each fix, output for `250 1`:
- original: in range / three-credit / PASS / `mark 250, credits 3`
- fix 1: three-credit / PASS / `mark 250, credits 3`
- fix 2: PASS / `mark 250, credits 1`
- fix 3 (all fixed): PASS / `mark 250, credits 1` (250 really is >= 60, so PASS is correct). Also run `40 3`: PASS no longer prints, which proves fix 3.
