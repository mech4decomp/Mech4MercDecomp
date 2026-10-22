/*
 * FUN_005f3760 (44 B) — __thiscall, RET 8 (2 stack params).
 *
 * Calls FUN_006fab90("Not implemented") and traps (INT3) if it returns
 * non-zero, otherwise calls FUN_005fbc80(param1,param2) on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006fab90(void);
extern void FUN_005fbc80(void);

__declspec(naked) void __fastcall FUN_005f3760(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      ok
        int     3
ok:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005fbc80
        pop     esi
        pop     ebp
        ret     8
    }
}
