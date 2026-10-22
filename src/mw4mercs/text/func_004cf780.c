/*
 * Stub: returns AL=1, __stdcall RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_004cf780(void)
{
    __asm {
        mov     al, 1
        ret     8
    }
}
