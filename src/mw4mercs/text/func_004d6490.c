/*
 * FUN_004d6490 (48 B) — __thiscall. Resolves an obfuscated global
 * (DAT_007dab44 ^ DAT_007dab40 -> +0x10 -> ^0x85739531) and calls
 * FUN_004fcb30(param_1); returns 0 if the result is 0 or -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void __cdecl FUN_004fcb30(void);

__declspec(naked) void FUN_004d6490(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp+4]
        push    ecx
        mov     ecx, dword ptr [eax+0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        jz      L_64bb
        cmp     eax, -1
        jnz     L_64bd
L_64bb:
        xor     eax, eax
L_64bd:
        ret     4
    }
}
