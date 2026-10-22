/*
 * FUN_00520C40 (818 B) — Campaign new game / load game function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Reads pointers from the param struct, checks whether a save file
 * exists (via IAT 0x0076B298), and either loads it or creates a new
 * campaign database (FUN_004d2d00) and populates it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0051fe70(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00547490(void);
extern void __cdecl FUN_00547560(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_0061aa30(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);

extern void *g_0076b298; /* 0x0076B298 — IAT entry (file-exists check) */
extern int    DAT_007db0b8; /* 0x007DB0B8 */
extern int    DAT_007dd230; /* 0x007DD230 */

__declspec(naked) void __cdecl FUN_00520c40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x4]
        sub     esp, 0xe8
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [edx]
        push    esi
        mov     esi, dword ptr [ecx]
        push    eax
        mov     ecx, ebx
        call    FUN_0051fe70
        push    0x77a0c8
        lea     ecx, [esp + 0xc]
        call    FUN_00412570
        push    0x76c5a8
        push    esi
        call    dword ptr [g_0076b298]
        add     esp, 0x8
        test    eax, eax
        jnz     l_520dc8
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_520c9d
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    FUN_006fb780
    l_520c9d:
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_520cd1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520cd1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520cd1:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x76c5a8
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_520d09
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520d09
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520d09:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_520f49
        push    0x1
        push    esi
        call    FUN_00547490
        add     esp, 0x8
        test    al, al
        jz      l_520dc8
        mov     eax, dword ptr [esp + 0x8]
        push    0x1
        push    eax
        call    FUN_00547560
        add     esp, 0x8
        test    al, al
        jz      l_520dc8
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_006fb780
        mov     byte ptr [esp + 0x10], al
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      l_520d62
        inc     byte ptr [eax - 1]
    l_520d62:
        mov     edx, dword ptr [esp + 0xc]
        push    0x77a0bc
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_520d9a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520d9a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520d9a:
        mov     eax, dword ptr [esp + 0xc]
        push    0x0
        push    eax
        call    FUN_00547560
        add     esp, 0x8
        test    al, al
        jnz     l_520de7
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_520dc8
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520dc8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520dc8:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_520f64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520f64
        jmp     l_520f5b

    l_520de7:
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        push    0x0
        push    0x1
        push    0x0
        push    0x3f
        push    0x7
        push    0x0
        push    ecx
        mov     ecx, dword ptr [DAT_007db0b8]
        call    FUN_004d2d00
        mov     esi, eax
        push    0x0
        lea     ecx, [esp + 0x48]
        mov     dword ptr [ebx + 0x40ee4], esi
        call    FUN_0041ee70
        push    0x0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0xbc]
        call    FUN_004d2110
        mov     edi, dword ptr [ebx + 0x40ee8]
        lea     edx, [esp + 0x44]
        push    edx
        mov     ecx, edi
        call    FUN_0061aa30
        push    0x0
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0xb8]
        call    FUN_004d2680
        push    0x0
        push    esi
        push    0x77a158
        lea     ecx, [esp + 0x78]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [DAT_007dd230]
        call    FUN_0050a5c0
        mov     edx, dword ptr [esp + 0x1c]
        push    0x0
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0xc]
        push    0x0
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x74]
        mov     dword ptr [esp + 0x2c], 0xffffffec
        call    FUN_004d2680
        mov     ecx, esi
        call    FUN_004d2a90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x6c]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xb0]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x44]
        call    FUN_0041ef60
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_520eea
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520eea
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520eea:
        test    esi, esi
        jz      l_520f00
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     dword ptr [ebx + 0x40ee4], 0x0
    l_520f00:
        test    edi, edi
        jz      l_520f16
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax]
        mov     dword ptr [ebx + 0x40ee8], 0x0
    l_520f16:
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0xc]
        and     esi, 0xff
        test    eax, eax
        pop     edi
        jz      l_520f3c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520f3c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520f3c:
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0xe8
        ret     8

    l_520f49:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_520f64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_520f64
    l_520f5b:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_520f64:
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0xe8
        ret     8
    }
}
