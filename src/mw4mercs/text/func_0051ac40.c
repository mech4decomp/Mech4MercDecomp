/*
 * Stub: returns EAX=0, __stdcall RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0051ac40(void)
{
    __asm {
        xor     eax, eax
        ret     0xc
    }
}
