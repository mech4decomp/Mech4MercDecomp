/*
 * FUN_00602bc0 (92 B) — __thiscall: lazily initializes a sub-object at
 * this+0x21b8, then conditionally adds a float arg to this+0x2218 (or
 * stores it directly) based on a global flag chain.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_0060ffe0(void);
extern void __cdecl FUN_006100a0(void);

__declspec(naked) void FUN_00602bc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x21e4]
        test    al, al
        jnz     L_602bd8
        lea     ecx, [esi+0x21b8]
        call    FUN_0060ffe0
    L_602bd8:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx+0x17]
        test    al, al
        jz      L_602c0e
        lea     ecx, [esi+0x21b8]
        call    FUN_006100a0
        fadd    dword ptr [esp+8]
        fstp    dword ptr [esi+0x2218]
        pop     esi
        ret     4
    L_602c0e:
        mov     eax, dword ptr [esp+8]
        mov     dword ptr [esi+0x2218], eax
        pop     esi
        ret     4
    }
}
