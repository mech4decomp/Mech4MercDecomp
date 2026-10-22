/*
 * FUN_005fd700 (43 B) — __fastcall member teardown.
 *
 * If this->[0x27c] is non-null, calls FUN_0064c620() (thiscall on it),
 * frees it via FUN_004084e0, then zeroes this->[0x27c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0064c620(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_005fd700(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x27c]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_0064c620
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x27c], 0
L1:
        pop     edi
        pop     esi
        ret
    }
}
