/*
 * FUN_00682790 (8 B) — thunk: loads [ecx+4] into ecx, tail-jumps to FUN_005C1C10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1c10(void);

__declspec(naked) void FUN_00682790(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 4]
        jmp     FUN_005c1c10
    }
}
