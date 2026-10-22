/*
 * FUN_0041af70 (41 B) — __thiscall. Builds a 48-byte temp via FUN_00419f90,
 * then calls FUN_0041afd0 on it; returns `this` (ECX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419f90(void);
extern void __cdecl FUN_0041afd0(void);

__declspec(naked) void FUN_0041af70(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        sub     esp, 0x30
        push    esi
        mov     esi, ecx
        push    eax
        lea     ecx, [esp+8]
        call    FUN_00419f90
        lea     ecx, [esp+4]
        push    ecx
        mov     ecx, esi
        call    FUN_0041afd0
        mov     eax, esi
        pop     esi
        add     esp, 0x30
        ret     4
    }
}
