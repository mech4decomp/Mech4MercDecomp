/*
 * FUN_0068ea80 (1098 B) — config/parameter loader. Uses sprintf (IAT via
 * EBX) and several string-table lookups, then writes results through a
 * vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76b420;          /* 0x0076b420 (IAT - sprintf) */
extern char g_798fa4[];       /* 0x00798fa4 */
extern char g_798f9c[];       /* 0x00798f9c */
extern char g_798f94[];       /* 0x00798f94 */
extern char g_798f8c[];       /* 0x00798f8c */
extern char g_798f80[];       /* 0x00798f80 */
extern char g_798f74[];       /* 0x00798f74 */
extern char g_798f68[];       /* 0x00798f68 */
extern char g_798f58[];       /* 0x00798f58 */
extern char g_798f48[];       /* 0x00798f48 */
extern char g_798f38[];       /* 0x00798f38 */
extern char g_798f2c[];       /* 0x00798f2c */
extern char g_798f20[];       /* 0x00798f20 */
extern char g_798f14[];       /* 0x00798f14 */
extern char g_798f0c[];       /* 0x00798f0c */
extern char g_798f04[];       /* 0x00798f04 */
extern char g_798efc[];       /* 0x00798efc */
extern char g_798ef4[];       /* 0x00798ef4 */
extern char g_798eec[];       /* 0x00798eec */
extern char g_798ee4[];       /* 0x00798ee4 */
extern char g_772c28[];       /* 0x00772c28 */
extern char g_798edc[];       /* 0x00798edc */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411ec0(void);

__declspec(naked) void FUN_0068ea80(void)
{
    __asm {
        sub     esp, 0xe8
        mov     eax, dword ptr [esp + 0xec]
        push    ebx
        mov     ebx, dword ptr [g_76b420]
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0xdc]
        push    offset g_798fa4
        push    ecx
        call    ebx
        mov     ecx, dword ptr [esp + 0x10c]
        add     esp, 0xc
        lea     edx, [esp + 0xd8]
        or      edi, 0xffffffff
        push    edx
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], edi
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      L_8eaf4
        push    0
        lea     eax, [esp + 0x24]
        push    eax
        push    offset g_798f9c
        mov     ecx, esi
        call    FUN_00411cb0
        push    0
        lea     ecx, [esp + 0x28]
        push    ecx
        push    offset g_798f94
        mov     ecx, esi
        call    FUN_00411cb0
L_8eaf4:
        cmp     dword ptr [esp + 0x20], edi
        jz      L_8ee9d
        cmp     dword ptr [esp + 0x24], edi
        jz      L_8ee9d
        push    0
        lea     edx, [esp + 0x20]
        push    edx
        push    offset g_798f8c
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jz      L_8eb4f
        xor     eax, eax
L_8eb21:
        mov     ecx, dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        mov     dword ptr [esp + eax + 0x48], ecx
        mov     edx, ecx
        mov     dword ptr [esp + eax + 0x4c], edx
        fstp    dword ptr [esp + eax + 0x90]
        fld     dword ptr [esp + 0x1c]
        add     eax, 8
        cmp     eax, 0x48
        fstp    dword ptr [esp + eax + 0x8c]
        jl      L_8eb21
        jmp     L_8eb74
L_8eb4f:
        xor     eax, eax
L_8eb56:
        mov     ecx, 0x3f800000
        mov     dword ptr [esp + eax + 0x48], ecx
        mov     dword ptr [esp + eax + 0x4c], ecx
        mov     dword ptr [esp + eax + 0x90], ecx
        mov     dword ptr [esp + eax + 0x94], ecx
        add     eax, 8
        cmp     eax, 0x48
        __emit 0x7C /* jl L_8eb56: MSVC6 miscomputes backward rel-offset (off-by-5) */
        __emit 0xE2
L_8eb74:
        push    ebp
        xor     edi, edi
        lea     ebp, [esp + 0x4c]
L_8eb7b:
        push    edi
        lea     eax, [esp + 0x34]
        push    offset g_798f80
        push    eax
        call    ebx
        add     esp, 0xc
        push    0
        push    ebp
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jz      L_8eba6
        mov     edx, dword ptr [ebp]
        mov     dword ptr [ebp + 4], edx
        jmp     L_8ebe7
L_8eba6:
        push    edi
        lea     eax, [esp + 0x34]
        push    offset g_798f74
        push    eax
        call    ebx
        add     esp, 0xc
        push    0
        push    ebp
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    FUN_00411d60
        push    edi
        lea     edx, [esp + 0x34]
        push    offset g_798f68
        push    edx
        call    ebx
        add     esp, 0xc
        push    0
        lea     eax, [ebp + 4]
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, esi
        call    FUN_00411d60
L_8ebe7:
        inc     edi
        add     ebp, 8
        cmp     edi, 9
        jl      L_8eb7b
        xor     edi, edi
        lea     ebp, [esp + 0x94]
L_8ebf9:
        push    edi
        lea     edx, [esp + 0x34]
        push    offset g_798f58
        push    edx
        call    ebx
        add     esp, 0xc
        push    0
        push    ebp
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_00411d60
        test    al, al
        jz      L_8ec24
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [ebp + 4], ecx
        jmp     L_8ec65
L_8ec24:
        push    edi
        lea     edx, [esp + 0x34]
        push    offset g_798f48
        push    edx
        call    ebx
        add     esp, 0xc
        push    0
        push    ebp
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_00411d60
        push    edi
        lea     ecx, [esp + 0x34]
        push    offset g_798f38
        push    ecx
        call    ebx
        add     esp, 0xc
        push    0
        lea     edx, [ebp + 4]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    FUN_00411d60
L_8ec65:
        inc     edi
        add     ebp, 8
        cmp     edi, 9
        jl      L_8ebf9
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    offset g_798f2c
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00411cb0
        test    al, al
        pop     ebp
        jz      L_8ec9b
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], edx
        jmp     L_8eddc
L_8ec9b:
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_798f20
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        jz      L_8ecca
        push    0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    offset g_798f14
        mov     ecx, esi
        call    FUN_00411cb0
        jmp     L_8eddc
L_8ecca:
        push    0
        lea     edx, [esp + 0x15]
        push    edx
        push    offset g_798f0c
        mov     ecx, esi
        mov     byte ptr [esp + 0x1f], 0
        mov     byte ptr [esp + 0x1c], 0
        mov     byte ptr [esp + 0x1a], 0
        mov     byte ptr [esp + 0x19], 1
        mov     byte ptr [esp + 0x1b], 0
        mov     byte ptr [esp + 0x1d], 0
        mov     byte ptr [esp + 0x1e], 0
        call    FUN_00411ec0
        push    0
        lea     eax, [esp + 0x17]
        push    eax
        push    offset g_798f04
        mov     ecx, esi
        call    FUN_00411ec0
        push    0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    offset g_798efc
        mov     ecx, esi
        call    FUN_00411ec0
        push    0
        lea     edx, [esp + 0x12]
        push    edx
        push    offset g_798ef4
        mov     ecx, esi
        call    FUN_00411ec0
        push    0
        lea     eax, [esp + 0x11]
        push    eax
        push    offset g_798eec
        mov     ecx, esi
        call    FUN_00411ec0
        push    0
        lea     ecx, [esp + 0x13]
        push    ecx
        push    offset g_798ee4
        mov     ecx, esi
        call    FUN_00411ec0
        push    0
        lea     edx, [esp + 0x16]
        push    edx
        push    offset g_772c28
        mov     ecx, esi
        call    FUN_00411ec0
        mov     cl, byte ptr [esp + 0x12]
        mov     dl, byte ptr [esp + 0xf]
        neg     cl
        mov     bl, byte ptr [esp + 0x11]
        sbb     ecx, ecx
        and     ecx, 0x100
        neg     dl
        sbb     edx, edx
        and     edx, 0x20
        or      ecx, edx
        mov     dl, byte ptr [esp + 0xd]
        xor     eax, eax
        test    bl, bl
        setnz   al
        or      ecx, eax
        mov     al, byte ptr [esp + 0xe]
        neg     dl
        sbb     edx, edx
        and     edx, 0x10
        or      ecx, edx
        mov     dl, byte ptr [esp + 0x10]
        neg     al
        sbb     eax, eax
        and     eax, 8
        or      ecx, eax
        mov     al, byte ptr [esp + 0x13]
        neg     dl
        sbb     edx, edx
        and     edx, 4
        or      ecx, edx
        neg     al
        sbb     eax, eax
        and     eax, 2
        or      ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        or      eax, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
L_8eddc:
        push    0
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    offset g_798edc
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_00411cb0
        mov     esi, dword ptr [esp + 0xfc]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     edi, [esp + 0x4c]
        mov     ebx, 9
L_8ee23:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi - 4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 8
        dec     ebx
        jnz     L_8ee23
        lea     edi, [esp + 0x94]
        mov     ebx, 9
L_8ee4c:
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [edi - 4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 8
        dec     ebx
        jnz     L_8ee4c
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xe8
        ret
L_8ee9d:
        mov     esi, dword ptr [esp + 0xfc]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xe8
        ret
    }
}
