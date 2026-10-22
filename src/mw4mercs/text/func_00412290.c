/*
 * FUN_00412290 (43 B) — container/loader helper (__thiscall, ECX=this).
 * Looks up an entry by name (FUN_00411a10); if not found, creates it via
 * FUN_00411b00, then finalizes via FUN_0041f7b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f7b0(void);

__declspec(naked) void FUN_00412290(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jnz     L1
        push    edi
        mov     ecx, esi
        call    FUN_00411b00
    L1:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f7b0
        pop     edi
        pop     esi
        ret     0x8
    }
}
