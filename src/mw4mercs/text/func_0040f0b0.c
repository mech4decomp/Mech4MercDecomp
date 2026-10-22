/*
 * FUN_0040f0b0 (17 B) — __thiscall wrapper: stores arg into a temp slot
 * on the stack and tail-calls FUN_0040f1c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f1c0(void);

__declspec(naked) void FUN_0040f0b0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        call    FUN_0040f1c0
        ret     4
    }
}
