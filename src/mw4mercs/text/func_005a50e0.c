/*
 * FUN_005a50e0 (44 B) — "Not implemented" stub method.
 *
 * Calls assert with "Not implemented" string, then calls FUN_005f3760.
 * __thiscall (ECX = this), 2 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *fmt);
extern void __cdecl FUN_005f3760(void);

__declspec(naked) void FUN_005a50e0(void)
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
        jz      skip_break
        int     3
skip_break:
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
