/*
 * FUN_005fbd00 (47 B) — __thiscall. Decodes an obfuscated global pointer
 * (XOR chain via g_007dab44/g_007dab40), checks a byte flag, and tail-jumps
 * to FUN_005a7ea0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_005a7ea0(void);

__declspec(naked) void FUN_005fbd00(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x20]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax+0x169]
        test    dl, dl
        jz      L_bd2e
        mov     ecx, dword ptr [ecx+0x418]
        test    ecx, ecx
        jz      L_bd2e
        jmp     FUN_005a7ea0
L_bd2e:
        ret
    }
}
