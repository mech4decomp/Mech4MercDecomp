/*
 * FUN_005e6790 (44 B) — __thiscall (ECX=this, RET 8, two params). Calls
 * FUN_006fab90("Not implemented"); if non-zero, traps (INT3). Otherwise
 * calls FUN_005e7b90(this, p1, p2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern void FUN_005e7b90(void);

__declspec(naked) void __stdcall FUN_005e6790(void)
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
        jz      L1
        int     3
L1:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005e7b90
        pop     esi
        pop     ebp
        ret     0x8
    }
}
