/*
 * FUN_005f07f0 (44 B) — __thiscall (ECX=this), RET 8 (two stack params).
 *
 * Calls assert-style FUN_006fab90("Not implemented"); if it returns
 * non-zero, traps (INT3). Then calls FUN_004d94d0 with the two params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006fab90(const char *s);
extern void __fastcall FUN_004d94d0(void *a, void *b);

__declspec(naked) void __stdcall FUN_005f07f0(void *p1, void *p2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76D414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L1
        int     3
L1:
        mov     eax, dword ptr [ebp + 0xC]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004d94d0
        pop     esi
        pop     ebp
        ret     8
    }
}
