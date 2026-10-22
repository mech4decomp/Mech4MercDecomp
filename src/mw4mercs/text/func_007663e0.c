/*
 * FUN_007663e0 (44 B) — __stdcall, RET 8.
 *
 * Calls FUN_00766290(a,b); if non-zero, calls FUN_006fab90("What is this????")
 * and if that returns non-zero, hits INT3. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00766290(int a, int b);
extern int __cdecl FUN_006fab90(const char *s);

__declspec(naked) void __stdcall FUN_007663e0(int a, int b)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        push    edx
        call    FUN_00766290
        test    al, al
        jz      L_ret
        push    0x7afd00
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_ret
        int     3
L_ret:
        xor     al, al
        pop     ebp
        ret     8
    }
}
