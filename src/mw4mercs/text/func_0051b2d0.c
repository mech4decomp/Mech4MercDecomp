/*
 * FUN_0051B2D0 (95 B) — __stdcall, RET 0xc (3 stack params).
 * Walks an obfuscated linked structure rooted at g_007dab44 (pointer XORed
 * with g_007dab40, node field at +0x44 XORed with 0x85739531), and if a
 * non-null sub-object exists at +0x1c, dispatches to FUN_0059d400 /
 * FUN_0059ced0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_007dab44;
extern int  g_007dab40;
extern void __cdecl FUN_0059d400(void);
extern void __cdecl FUN_0059ced0(void);

__declspec(naked) void __stdcall FUN_0051B2D0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L_51b32c
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L_51b32c
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        call    FUN_0059d400
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1c]
        call    FUN_0059ced0
L_51b32c:
        ret     0xc
    }
}
