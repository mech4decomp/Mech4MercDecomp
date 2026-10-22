/*
 * FUN_0047ec20 (1412 B) — MLR cube/box geometry builder (RET 0). Allocates
 * buffers, builds 8 cube corners via FUN_0040c9c0/FUN_0040c410, fills an
 * index buffer, and uploads via virtual calls. Returns the object in ESI.
 *
 * CFLAGS: /O1
 */

extern int g_007da5ec;
extern int g_007da5e4;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0047a680(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0047ec20(void)
{
    __asm {
        mov     eax, dword ptr [g_007da5ec]
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x68
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_47ec52
        mov     ecx, dword ptr [g_007da5e4]
        push    ecx
        mov     ecx, eax
        call    FUN_0047a680
        mov     esi, eax
        jmp     L_47ec54
L_47ec52:
        xor     esi, esi
L_47ec54:
        mov     ebx, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [ebx + 0x14]
        cmp     ebp, 0x8
        mov     dword ptr [esp + 0x14], ebx
        jz      L_47ecf2
        push    0x60
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_47ec8e
        push    0x454eb0
        push    0x8
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_47ec9a
L_47ec8e:
        mov     dword ptr [esp + 0x10], 0x0
        mov     ecx, dword ptr [esp + 0x10]
L_47ec9a:
        mov     edx, dword ptr [ebx + 0x10]
        test    edx, edx
        jz      L_47ece8
        cmp     ebp, 0x8
        mov     eax, 0x8
        ja      L_47ecad
        mov     eax, ebp
L_47ecad:
        mov     edi, eax
        dec     eax
        test    edi, edi
        jz      L_47ecd8
        lea     edi, [eax + eax*2]
        mov     ebx, edx
        lea     edi, [ecx + edi*4]
        sub     ebx, ecx
        lea     ebp, [eax + 0x1]
L_47ecc1:
        lea     edx, [ebx + edi]
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebp
        sub     edi, 0xc
        test    ebp, ebp
        ja      L_47ecc1
        mov     ebx, dword ptr [esp + 0x14]
L_47ecd8:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 0x4
L_47ece8:
        mov     dword ptr [ebx + 0x10], ecx
        mov     dword ptr [ebx + 0x14], 0x8
L_47ecf2:
        fld     dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x2c]
        fchs
        push    edi
        fstp    dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x20]
        mov     ebp, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        call    FUN_0040c9c0
        mov     ebx, dword ptr [ebx + 0x10]
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        push    edi
        push    ebp
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0xc]
        call    FUN_0040c410
        push    ebp
        push    ebp
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebx + 0x18]
        call    FUN_0040c410
        push    ebp
        push    ebp
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebx + 0x24]
        call    FUN_0040c410
        push    edi
        push    edi
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0x30]
        call    FUN_0040c410
        push    edi
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     edx, [esp + 0x1c]
        push    edx
        lea     ecx, [ebx + 0x3c]
        call    FUN_0040c410
        push    ebp
        push    edi
        push    edi
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [ebx + 0x48]
        call    FUN_0040c410
        push    ebp
        push    edi
        push    ebp
        lea     ecx, [esp + 0x28]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [ebx + 0x54]
        call    FUN_0040c410
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [edi + 0xc]
        cmp     ebx, 0x6
        jz      L_47ee20
        push    0x6
        call    FUN_004084d0
        mov     ecx, dword ptr [edi + 0x8]
        add     esp, 0x4
        test    ecx, ecx
        mov     ebp, eax
        jz      L_47ee16
        cmp     ebx, 0x6
        mov     eax, 0x6
        ja      L_47edf9
        mov     eax, ebx
L_47edf9:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_47ee0d
L_47ee00:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_47ee00
L_47ee0d:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_47ee16:
        mov     dword ptr [edi + 0x8], ebp
        mov     dword ptr [edi + 0xc], 0x6
L_47ee20:
        mov     eax, dword ptr [edi + 0x8]
        mov     edx, eax
        push    0x1
        mov     ecx, 0x4040404
        mov     dword ptr [edx], ecx
        mov     word ptr [edx + 0x4], cx
        mov     edx, dword ptr [esi]
        push    0x6
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [edi + 0x10]
        mov     eax, dword ptr [esi]
        push    0x8
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edi, dword ptr [esi + 0xc]
        mov     ebx, dword ptr [edi + 0x4]
        cmp     ebx, 0x18
        jz      L_47ee98
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [edi]
        add     esp, 0x4
        test    ecx, ecx
        mov     ebp, eax
        jz      L_47ee8f
        cmp     ebx, 0x18
        mov     eax, 0x18
        ja      L_47ee72
        mov     eax, ebx
L_47ee72:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_47ee86
L_47ee79:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_47ee79
L_47ee86:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_47ee8f:
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x4], 0x18
L_47ee98:
        mov     eax, dword ptr [edi]
        mov     byte ptr [eax], 0x0
        mov     byte ptr [eax + 0x1], 0x2
        mov     byte ptr [eax + 0x2], 0x6
        mov     cl, 0x5
        mov     byte ptr [eax + 0x3], cl
        mov     byte ptr [eax + 0x4], 0x0
        mov     byte ptr [eax + 0x5], cl
        mov     bl, 0x4
        mov     byte ptr [eax + 0x6], bl
        mov     byte ptr [eax + 0x7], 0x1
        mov     byte ptr [eax + 0x8], cl
        mov     byte ptr [eax + 0x9], 0x6
        mov     dl, 0x7
        mov     byte ptr [eax + 0xa], dl
        mov     byte ptr [eax + 0xb], bl
        mov     byte ptr [eax + 0xc], 0x2
        mov     cl, 0x3
        mov     byte ptr [eax + 0xd], cl
        mov     byte ptr [eax + 0xe], dl
        mov     byte ptr [eax + 0xf], 0x6
        mov     byte ptr [eax + 0x10], 0x1
        mov     byte ptr [eax + 0x11], bl
        mov     byte ptr [eax + 0x12], dl
        mov     edx, dword ptr [esi]
        mov     byte ptr [eax + 0x13], cl
        mov     byte ptr [eax + 0x14], 0x0
        mov     byte ptr [eax + 0x15], 0x1
        mov     byte ptr [eax + 0x16], cl
        push    0x18
        push    eax
        mov     ecx, esi
        mov     byte ptr [eax + 0x17], 0x2
        call    dword ptr [edx + 0x88]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x94]
        mov     edi, dword ptr [esi + 0xc]
        mov     ebx, dword ptr [edi + 0x1c]
        add     edi, 0x18
        cmp     ebx, 0x8
        jz      L_47ef85
        push    0x40
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 0x4
        test    ebp, ebp
        jz      L_47ef3b
        push    0x423b70
        push    0x8
        push    0x8
        push    ebp
        call    FUN_00406c90
        jmp     L_47ef3d
L_47ef3b:
        xor     ebp, ebp
L_47ef3d:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_47ef7c
        cmp     ebx, 0x8
        jbe     L_47ef4d
        mov     ebx, 0x8
L_47ef4d:
        mov     edx, ebx
        dec     ebx
        test    edx, edx
        jz      L_47ef71
        lea     eax, [ebp + ebx*8]
        sub     ecx, ebp
        lea     edx, [ebx + 0x1]
L_47ef5d:
        mov     ebx, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_47ef5d
L_47ef71:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_47ef7c:
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x4], 0x8
L_47ef85:
        mov     eax, dword ptr [edi]
        mov     ebx, dword ptr [esp + 0x30]
        test    ebx, ebx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
        jz      L_47f189
        mov     eax, dword ptr [esi]
        push    0x0
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebx], 0x3fff
        jbe     L_47f189
        mov     eax, dword ptr [edi]
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [esp + 0x18], 0x0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [esp + 0x18], 0x3e800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [esp + 0x14], 0x3f800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [esp + 0x14], 0x0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [esp + 0x18], 0x3f800000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x2c], edx
        mov     dword ptr [esp + 0x14], 0x3e800000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], edx
        mov     dword ptr [esp + 0x14], 0x3f400000
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], 0x3f400000
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
L_47f189:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x8
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x2c]
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
