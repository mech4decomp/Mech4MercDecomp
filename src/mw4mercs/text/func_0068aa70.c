/*
 * FUN_0068aa70 (30 B) — __thiscall destructor. Calls FUN_0068aa90,
 * frees the object via FUN_004084e0 if flag bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0068aa90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* FUN_0068aa70(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0068aa90
        test    byte ptr [esp+8], 1
        jz      L_68aa88
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_68aa88:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
