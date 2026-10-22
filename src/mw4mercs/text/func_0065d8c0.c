/*
 * FUN_0065D8C0 (93 B) — Obfuscated dispatch helper.
 *
 * __cdecl, no params. XORs two globals to derive an object pointer,
 * checks a magic field, and conditionally calls FUN_00415230 /
 * FUN_00602460 then tail-jumps to FUN_006968E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f26b0;
extern char __cdecl FUN_00415230(void);
extern void __cdecl FUN_00602460(void);
extern void __cdecl FUN_006968e0(void);

__declspec(naked) int __cdecl FUN_0065d8c0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        jz      l_91a
        mov     ecx, dword ptr [g_007f26b0]
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx + 4]
        call    FUN_00415230
        test    al, al
        jz      l_91a
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        call    FUN_00602460
        mov     ecx, eax
        jmp     FUN_006968e0
    l_91a:
        xor     al, al
        ret
    }
}
