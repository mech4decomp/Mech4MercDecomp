/*
 * FUN_10010800 (27 B) - __stdcall. Calls FUN_1001c740; if it returns 0, sets
 * the object's "in use" flag at +0x1c to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001c740(void);

__declspec(naked) void FUN_10010800(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, esi
        call    FUN_1001c740
        test    eax, eax
        jnz     L1
        mov     dword ptr [esi + 0x1c], 0x1
L1:
        pop     esi
        ret     0x4
    }
}
