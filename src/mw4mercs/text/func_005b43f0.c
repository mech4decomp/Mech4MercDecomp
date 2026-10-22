/*
 * FUN_005b43f0 (44 B) — __thiscall method, RET 8 (2 stack params).
 *
 * Calls FUN_006fab90("Not implemented") (assert-style); if nonzero, INT3.
 * Otherwise calls FUN_005f3760(this, param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(void *msg);
extern void __stdcall FUN_005f3760(void);

__declspec(naked) void __stdcall FUN_005b43f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      ok
        int     3
ok:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f3760
        pop     esi
        pop     ebp
        ret     0x8
    }
}
