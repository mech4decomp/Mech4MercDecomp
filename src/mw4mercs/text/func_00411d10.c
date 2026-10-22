/*
 * FUN_00411d10 (43 B) — __thiscall: FUN_00411a10(arg0); if null falls
 * back to FUN_00411b00(arg0). Then FUN_0041f230(arg1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_00411b00(void);
extern void __cdecl FUN_0041f230(void);

__declspec(naked) void FUN_00411d10(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jnz     L_411d2a
        push    edi
        mov     ecx, esi
        call    FUN_00411b00
L_411d2a:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f230
        pop     edi
        pop     esi
        ret     0x8
    }
}
