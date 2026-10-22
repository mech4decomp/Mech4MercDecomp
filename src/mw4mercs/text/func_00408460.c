/*
 * FUN_00408460 (16 B) — frees a node if non-NULL (calls FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00408460(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_40846f
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_40846f:
        ret
    }
}
