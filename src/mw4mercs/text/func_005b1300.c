/*
 * FUN_005b1300 (44 B) — __thiscall (ECX = this), RET 0x8 (2 stack args).
 * Asserts "Not implemented" (0x76d414), then calls FUN_005b43f0(param1,param2).
 *
 * Disassembly:
 *   55                push    ebp
 *   8B EC             mov     ebp, esp
 *   56                push    esi
 *   68 14 D4 76 00    push    0x76d414
 *   8B F1             mov     esi, ecx
 *   E8 80 98 14 00    call    FUN_006fab90
 *   83 C4 04          add     esp, 0x4
 *   85 C0             test    eax, eax
 *   74 01             jz      l_ok
 *   CC                int     3
 * l_ok:
 *   8B 45 0C          mov     eax, [ebp+0xc]
 *   8B 4D 08          mov     ecx, [ebp+0x8]
 *   50                push    eax
 *   51                push    ecx
 *   8B CE             mov     ecx, esi
 *   E8 C9 30 00 00    call    FUN_005b43f0
 *   5E                pop     esi
 *   5D                pop     ebp
 *   C2 08 00          ret     0x8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006fab90(const char *);
extern void __fastcall FUN_005b43f0(int, int);

__declspec(naked) void __fastcall FUN_005b1300(void)
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
        jz      l_ok
        int     3
    l_ok:
        mov     eax, [ebp+0xc]
        mov     ecx, [ebp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005b43f0
        pop     esi
        pop     ebp
        ret     0x8
    }
}
