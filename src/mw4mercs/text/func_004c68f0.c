/*
 * FUN_004C68F0 (47 B) — Thiscall cleanup helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416130(void *this, int param);
extern void FUN_00415380(void *this);
extern int DAT_007daa38;

__declspec(naked) void __fastcall FUN_004c68f0(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        jz      l_skip_vcall

        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0xc]

    l_skip_vcall:
        mov     eax, dword ptr [esi + 0x140]
        test    eax, eax
        jz      l_skip_free

        mov     ecx, dword ptr [DAT_007daa38]

        push    eax
        call    FUN_00416130

    l_skip_free:
        mov     ecx, esi
        call    FUN_00415380

        pop     esi
        ret
    }
}
