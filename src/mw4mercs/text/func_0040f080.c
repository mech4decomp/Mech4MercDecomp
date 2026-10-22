/*
 * FUNC_0040f080 (17 B) — __stdcall, RET 0x4. Pushes param_1 onto the stack
 * and tail-calls FUN_0040f120.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f120(void);

__declspec(naked) void FUN_0040f080(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        call    FUN_0040f120
        ret     0x4
    }
}
