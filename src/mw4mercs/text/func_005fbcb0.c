/*
 * FUN_005fbcb0 (75 B) — __thiscall. Decodes an obfuscated global pointer
 * (XOR chain via g_007dab44/g_007dab40), checks a flag, and dispatches to a
 * weapon/mech object method (FUN_005a7e40 / FUN_005a7ea0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_004f9400(void);
extern void __cdecl FUN_005fbd40(void);
extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_005a7ea0(void);

__declspec(naked) void FUN_005fbcb0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        call    FUN_004f9400
        test    al, al
        jz      L_bcf9
        mov     eax, dword ptr [esi+0x418]
        test    eax, eax
        jz      L_bcf9
        mov     ecx, esi
        call    FUN_005fbd40
        test    al, al
        mov     ecx, dword ptr [esi+0x418]
        jz      L_bcf4
        call    FUN_005a7e40
        pop     esi
        ret
L_bcf4:
        call    FUN_005a7ea0
L_bcf9:
        pop     esi
        ret
    }
}
