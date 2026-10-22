/*
 * FUNC_0040eda0 (31 B) — __thiscall, RET 0x4. Looks up a config value; if
 * missing, creates it via FUN_0040edc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040edc0(void);

__declspec(naked) void FUN_0040eda0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_0040ecc0
        test    eax, eax
        jnz     loc_40EDBA
        push    edi
        mov     ecx, esi
        call    FUN_0040edc0
loc_40EDBA:
        pop     edi
        pop     esi
        ret     0x4
    }
}
