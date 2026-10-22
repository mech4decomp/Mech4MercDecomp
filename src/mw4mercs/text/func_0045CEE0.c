/*
 * FUN_0045CEE0 (1373 B) — MLR data-block function (block 0x45C1A0).
 * Builds an MLR object: allocates a 0x60-byte buffer, fills a 0x24-byte
 * byte table, allocates a 0x40-byte buffer of 8-element structs, and
 * initializes a 0x40-byte float/vector array. Calls through the object's
 * vtable (offsets 0xc/0x14/0x24/0x2c/0x88/0x94).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_006f49a0(void);

extern unsigned int g_7b958c;
extern unsigned int g_7d98f8;

__declspec(naked) void FUN_0045CEE0(void)
{
    __asm {
        mov     eax, dword ptr [g_7b958c]
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_cf11
        mov     ecx, dword ptr [g_7d98f8]
        push    ecx
        mov     ecx, eax
        call    FUN_00458560
        mov     ebx, eax
        jmp     L_cf13
    L_cf11:
        xor     ebx, ebx
    L_cf13:
        push    ebp
        mov     ebp, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [ebp + 0x14]
        add     ebp, 0x10
        cmp     edi, 8
        mov     dword ptr [esp + 0x14], ebp
        je      L_cfb5
        push    0x60
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_cf51
        push    0x454eb0
        push    8
        push    0xc
        push    esi
        call    FUN_00406c90
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_cf5d
    L_cf51:
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, dword ptr [esp + 0x10]
    L_cf5d:
        mov     edx, dword ptr [ebp]
        test    edx, edx
        je      L_cfab
        cmp     edi, 8
        mov     eax, 8
        ja      L_cf70
        mov     eax, edi
    L_cf70:
        mov     esi, eax
        dec     eax
        test    esi, esi
        je      L_cf9b
        lea     esi, [eax + eax*2]
        mov     ebp, edx
        lea     esi, [ecx + esi*4]
        sub     ebp, ecx
        lea     edi, [eax + 1]
    L_cf84:
        lea     edx, [esi + ebp]
        push    edx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_cf84
        mov     ebp, dword ptr [esp + 0x14]
    L_cf9b:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 4
    L_cfab:
        mov     dword ptr [ebp], ecx
        mov     dword ptr [ebp + 4], 8
    L_cfb5:
        fld     dword ptr [esp + 0x2c]
        mov     esi, dword ptr [esp + 0x2c]
        fchs
        push    esi
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x20]
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        push    esi
        call    FUN_0040c9c0
        mov     ebp, dword ptr [ebp]
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, ebp
        call    FUN_0040c410
        push    esi
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebp + 0xc]
        call    FUN_0040c410
        push    edi
        push    edi
        push    esi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebp + 0x18]
        call    FUN_0040c410
        push    edi
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebp + 0x24]
        call    FUN_0040c410
        push    esi
        push    esi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebp + 0x30]
        call    FUN_0040c410
        push    esi
        push    esi
        push    esi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebp + 0x3c]
        call    FUN_0040c410
        push    edi
        push    esi
        push    esi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebp + 0x48]
        call    FUN_0040c410
        push    edi
        push    esi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebp + 0x54]
        call    FUN_0040c410
        mov     edx, dword ptr [ebx]
        push    1
        push    0xc
        push    0
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebx]
        push    8
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        mov     esi, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [esi + 4]
        cmp     edi, 0x24
        je      L_d105
        push    0x24
        call    FUN_004084d0
        mov     ebp, dword ptr [esi]
        add     esp, 4
        test    ebp, ebp
        mov     ecx, eax
        mov     dword ptr [esp + 0x2c], ecx
        je      L_d0fc
        cmp     edi, 0x24
        mov     eax, 0x24
        ja      L_d0db
        mov     eax, edi
    L_d0db:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_d0ef
    L_d0e2:
        mov     dl, byte ptr [eax + ebp]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_d0e2
    L_d0ef:
        push    ebp
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 4
    L_d0fc:
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 4], 0x24
    L_d105:
        mov     eax, dword ptr [esi]
        mov     byte ptr [eax], 0
        mov     byte ptr [eax + 1], 2
        mov     byte ptr [eax + 2], 6
        mov     byte ptr [eax + 3], 0
        mov     byte ptr [eax + 4], 6
        mov     dl, 5
        mov     byte ptr [eax + 5], dl
        mov     byte ptr [eax + 6], 0
        mov     byte ptr [eax + 7], dl
        mov     byte ptr [eax + 8], 4
        mov     byte ptr [eax + 9], 0
        mov     byte ptr [eax + 0xa], 4
        mov     byte ptr [eax + 0xb], 1
        mov     byte ptr [eax + 0xc], dl
        mov     byte ptr [eax + 0xd], 6
        mov     cl, 7
        mov     byte ptr [eax + 0xe], cl
        mov     byte ptr [eax + 0xf], dl
        mov     byte ptr [eax + 0x10], cl
        mov     byte ptr [eax + 0x11], 4
        mov     byte ptr [eax + 0x12], 2
        mov     dl, 3
        mov     byte ptr [eax + 0x13], dl
        mov     byte ptr [eax + 0x14], cl
        mov     byte ptr [eax + 0x15], 2
        mov     byte ptr [eax + 0x16], cl
        mov     byte ptr [eax + 0x17], 6
        mov     byte ptr [eax + 0x18], 1
        mov     byte ptr [eax + 0x19], 4
        mov     byte ptr [eax + 0x1a], cl
        mov     byte ptr [eax + 0x1b], 1
        mov     byte ptr [eax + 0x1c], cl
        mov     byte ptr [eax + 0x1d], dl
        mov     byte ptr [eax + 0x1e], 0
        mov     byte ptr [eax + 0x1f], 1
        mov     byte ptr [eax + 0x20], dl
        mov     byte ptr [eax + 0x21], 0
        mov     byte ptr [eax + 0x22], dl
        mov     edx, dword ptr [ebx]
        push    0x24
        push    eax
        mov     ecx, ebx
        mov     byte ptr [eax + 0x23], 2
        call    dword ptr [edx + 0x88]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x94]
        mov     esi, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [esi + 0x1c]
        add     esi, 0x18
        cmp     edi, 8
        je      L_d21e
        push    0x40
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_d1d4
        push    0x423b70
        push    8
        push    8
        push    ebp
        call    FUN_00406c90
        jmp     L_d1d6
    L_d1d4:
        xor     ebp, ebp
    L_d1d6:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        je      L_d215
        cmp     edi, 8
        jbe     L_d1e6
        mov     edi, 8
    L_d1e6:
        mov     edx, edi
        dec     edi
        test    edx, edx
        je      L_d20a
        lea     eax, [ebp + edi*8]
        sub     ecx, ebp
        lea     edx, [edi + 1]
    L_d1f6:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_d1f6
    L_d20a:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_d215:
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 4], 8
    L_d21e:
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [esp + 0x30]
        test    edi, edi
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
        pop     ebp
        je      L_d423
        mov     eax, dword ptr [ebx]
        push    0
        push    edi
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        test    dword ptr [edi], 0x3fff
        jbe     L_d423
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x14], 0
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [esp + 0x10], 0x3f800000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [esp + 0x14], 0
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esp + 0x10], 0x3e800000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [esp + 0x10], 0x3f400000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [esp + 0x10], 0x3f800000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [esp + 0x10], 0
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [esp + 0x10], 0x3e800000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [esp + 0x10], 0x3f400000
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
    L_d423:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ebx]
        push    8
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x2c]
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x18
        ret
    }
}
