/*
 * FUN_00647f30 (18 B) -- __stdcall-ish free wrapper (RET 0x4). If *param_1
 * is non-null, calls FUN_004084e0 (operator delete) on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00647f30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_done
        push    eax
        call    FUN_004084e0
        pop     ecx
L_done:
        ret     0x4
    }
}
