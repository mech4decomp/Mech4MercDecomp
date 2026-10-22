/*
 * FUN_0046bc10 (39 B) — MLR (MidLevelRenderer) graphics library.
 * __thiscall, RET 0x4. Calls FUN_00491620 twice to copy data into the
 * object at +0x2c and +0x70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_0046bc10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp+0xc]
        lea     eax, [esi+0x2c]
        push    eax
        push    edi
        lea     ecx, [esi+0x24]
        call    FUN_00491620
        lea     ecx, [esi+0x70]
        push    ecx
        push    edi
        lea     ecx, [esi+0x68]
        call    FUN_00491620
        pop     edi
        pop     esi
        ret     0x4
    }
}
