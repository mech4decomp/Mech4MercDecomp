/*
 * FUN_0043e260 (39 B) — MLR mesh copy helper (__thiscall, RET 0x4).
 * Calls FUN_00491620 twice to copy two member arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00491620(void);

__declspec(naked) void FUN_0043e260(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [esi + 0x2c]
        push    eax
        push    edi
        lea     ecx, [esi + 0x24]
        call    FUN_00491620
        lea     ecx, [esi + 0x6c]
        push    ecx
        push    edi
        lea     ecx, [esi + 0x64]
        call    FUN_00491620
        pop     edi
        pop     esi
        ret     0x4
    }
}
