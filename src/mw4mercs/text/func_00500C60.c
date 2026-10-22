/*
 * FUN_00500C60 (22 B) — __stdcall (RET 0x8). Adds a member field to an
 * argument and forwards the sum to FUN_00767430.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767430(void);

__declspec(naked) void FUN_00500C60(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        mov     edx, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        add     eax, edx
        push    eax
        call    FUN_00767430
        ret     8
    }
}
