/*
 * FUN_004616f0 (39 B) — MLR __thiscall helper. Calls FUN_00491620 twice
 * to transform/copy the [this+0x2c] and [this+0x74] 6-dword blocks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491620(void);

__declspec(naked) void FUN_004616f0(void)
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
        lea     ecx, [esi+0x74]
        push    ecx
        push    edi
        lea     ecx, [esi+0x6c]
        call    FUN_00491620
        pop     edi
        pop     esi
        ret     0x4
    }
}
