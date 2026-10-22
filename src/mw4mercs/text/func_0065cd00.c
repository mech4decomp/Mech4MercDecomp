/*
 * FUN_0065CD00 (190 B) — __cdecl (2 params) that builds several strings
 * via FUN_004125e0 / FUN_00412740, decrementing a refcount byte at
 * param_2-1 and freeing when it hits zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_0065cd00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    0x794ccc
        mov     ecx, esi
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_47
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_47
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_47:
        call    FUN_007047f0
        test    al, 0x1
        mov     eax, 0x771d60
        jnz     l_5a
        mov     eax, 0x794cc8
    l_5a:
        push    eax
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_8a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_8a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_8a:
        mov     ecx, dword ptr [esi]
        push    0x794cb4
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     esi
        jz      l_bd
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_bd
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_bd:
        ret
    }
}
