/*
 * FUN_0063b9c0 (30 B) — __thiscall constructor/init. Clears a global
 * flag, zeroes two members, then calls FUN_0063b9e0 and FUN_0063bdd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007f2d28;

extern void __cdecl FUN_0063b9e0(void);
extern void __cdecl FUN_0063bdd0(void);

__declspec(naked) void FUN_0063b9c0(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     byte ptr [g_007f2d28], al
        mov     dword ptr [esi+0x18], eax
        mov     byte ptr [esi+0x1c], al
        call    FUN_0063b9e0
        mov     ecx, esi
        call    FUN_0063bdd0
        pop     esi
        ret
    }
}
