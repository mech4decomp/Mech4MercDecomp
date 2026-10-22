/*
 * FUN_004d0e50 (1478 B) — MLR network subsystem: resource registration /
 * effects & sound/texture pool loader. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a80(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004d2b00(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412ca0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_00491f50(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004dbe80(void);
extern void __cdecl FUN_004db9d0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004d0e50(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0040de20(void);

extern unsigned int  g_007db0a4;
extern unsigned char g_007db0a8;
extern unsigned int  g_007da884;
extern unsigned int  g_007b8810;

__declspec(naked) void FUN_004d0e50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c4
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     dword ptr [ebp - 0xc], ecx
        mov     cx, word ptr [eax + 0x1a]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     word ptr [ebp - 0x8], cx
        push    0x772518
        mov     ecx, edi
        mov     word ptr [ebp - 0x6], 0xffff
        call    FUN_00411a80
        cmp     dword ptr [eax], 0
        mov     dword ptr [ebp - 0x10], eax
        jz      L_4d0ec8
        push    0x0
        push    0x77250c
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x24]
        test    eax, eax
        jz      L_4d0ea4
        mov     eax, dword ptr [ebp - 0x44]
        test    eax, eax
        ja      L_4d0eb0
L_4d0ea4:
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2680
L_4d0eb0:
        mov     dx, word ptr [ebp - 0x20]
        mov     ax, word ptr [ebp - 0x1e]
        lea     ecx, [ebp - 0x60]
        mov     word ptr [ebp - 0x8], dx
        mov     word ptr [ebp - 0x6], ax
        call    FUN_004d21c0
L_4d0ec8:
        push    0xc
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_4d0eee
        add     edi, 0x18
        push    edi
        mov     ecx, esi
        call    FUN_004c41d0
        mov     dword ptr [esi], 0x76cc9c
        mov     dword ptr [ebp - 0x14], esi
        jmp     L_4d0ef5
L_4d0eee:
        mov     dword ptr [ebp - 0x14], 0
L_4d0ef5:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_4d1032
        mov     edx, dword ptr [eax]
        test    edx, edx
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        jz      L_4d1032
        mov     edi, dword ptr [edx + 0x14]
        mov     esi, 0x7724f8
        mov     eax, edi
L_4d0f1d:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_4d0f41
        test    cl, cl
        jz      L_4d0f3d
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_4d0f41
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4d0f1d
L_4d0f3d:
        xor     eax, eax
        jmp     L_4d0f46
L_4d0f41:
        sbb     eax, eax
        sbb     eax, -1
L_4d0f46:
        test    eax, eax
        jz      L_4d0ef5
        mov     esi, 0x7724e8
        mov     eax, edi
L_4d0f51:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_4d0f75
        test    cl, cl
        jz      L_4d0f71
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_4d0f75
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4d0f51
L_4d0f71:
        xor     eax, eax
        jmp     L_4d0f7a
L_4d0f75:
        sbb     eax, eax
        sbb     eax, -1
L_4d0f7a:
        test    eax, eax
        jz      L_4d0ef5
        mov     esi, dword ptr [edx + 0x18]
        test    esi, esi
        jnz     L_4d0fa9
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [edx]
        push    edi
        push    ecx
        push    eax
        push    0x7724cc
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L_4d0fa9
        int     3
L_4d0fa9:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx]
        test    al, al
        jz      L_4d0ef5
        push    0x0
        push    esi
        lea     ecx, [ebp - 0xa4]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x68]
        test    eax, eax
        jz      L_4d0fd8
        mov     eax, dword ptr [ebp - 0x88]
        test    eax, eax
        ja      L_4d0fe7
L_4d0fd8:
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0xa4]
        call    FUN_004d2680
L_4d0fe7:
        /* __emit: MSVC6 encodes cmp word ptr [ebp-6],0xffff as imm8 sign-extended (66 83 7D FA FF); ref uses imm16 (66 81 7D FA FF FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x7D
        __emit 0xFA
        __emit 0xFF
        __emit 0xFF
        jnc     L_4d1012
        mov     eax, dword ptr [ebp - 0x64]
        cmp     ax, word ptr [ebp - 0x8]
        jz      L_4d1012
        mov     ecx, dword ptr [ebp - 0x7c]
        movsx   eax, ax
        push    eax
        push    ecx
        push    0x772488
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_4d1012
        int     3
L_4d1012:
        mov     dx, word ptr [ebp - 0x64]
        mov     ax, word ptr [ebp - 0x62]
        lea     ecx, [ebp - 0xa4]
        mov     word ptr [ebp - 0x8], dx
        mov     word ptr [ebp - 0x6], ax
        call    FUN_004d21c0
        jmp     L_4d0ef5
L_4d1032:
        lea     ecx, [ebp - 0x8]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        call    FUN_004d2b00
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_00417a40
        test    eax, eax
        jbe     L_4d111c
        mov     ecx, dword ptr [ebp - 0x10]
        call    FUN_00417a40
        mov     ecx, dword ptr [g_007db0a4]
        mov     edx, dword ptr [ebp - 0xc]
        mov     esi, eax
        mov     eax, dword ptr [edx + 0x14]
        add     esi, ecx
        cmp     esi, eax
        mov     dword ptr [ebp - 0x1c], esi
        jz      L_4d111c
        xor     ebx, ebx
        cmp     esi, ebx
        jbe     L_4d1105
        lea     eax, [esi*4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_4d10aa
        lea     edx, [esi - 1]
        cmp     edx, ebx
        mov     ecx, eax
        jl      L_4d10a8
        inc     edx
L_4d1099:
        mov     word ptr [ecx], 0xffff
        mov     word ptr [ecx + 0x2], bx
        add     ecx, 0x4
        dec     edx
        jnz     L_4d1099
L_4d10a8:
        mov     ebx, eax
L_4d10aa:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [eax + 0x10]
        test    edi, edi
        mov     dword ptr [ebp - 0x18], ebx
        jz      L_4d1100
        mov     eax, dword ptr [eax + 0x14]
        cmp     esi, eax
        mov     ecx, esi
        jc      L_4d10c2
        mov     ecx, eax
L_4d10c2:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_4d10f4
        mov     esi, edi
        lea     eax, [ebx + ecx*4]
        lea     edx, [edi + ecx*4 + 0x2]
        sub     esi, ebx
        inc     ecx
L_4d10d5:
        mov     bx, word ptr [eax + esi]
        mov     word ptr [eax], bx
        mov     bx, word ptr [edx]
        mov     word ptr [eax + 0x2], bx
        dec     ecx
        sub     edx, 0x4
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_4d10d5
        mov     ebx, dword ptr [ebp - 0x18]
        mov     esi, dword ptr [ebp - 0x1c]
L_4d10f4:
        push    edi
        call    FUN_004084e0
        mov     eax, dword ptr [ebp - 0xc]
        add     esp, 0x4
L_4d1100:
        mov     dword ptr [eax + 0x10], ebx
        jmp     L_4d1119
L_4d1105:
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x10], ebx
        mov     eax, edi
L_4d1119:
        mov     dword ptr [eax + 0x14], esi
L_4d111c:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ecx]
        mov     bl, 0x1
L_4d1123:
        test    edi, edi
        jz      L_4d121a
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 0x4]
        jz      L_4d121a
        mov     edx, dword ptr [eax + 0x18]
        push    0x0
        push    edx
        lea     ecx, [ebp - 0xd4]
        call    FUN_0041de80
        mov     esi, dword ptr [ebp - 0xb0]
        push    0x0
        push    esi
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x24]
        test    eax, eax
        jz      L_4d1174
        mov     eax, dword ptr [ebp - 0x44]
        test    eax, eax
        jbe     L_4d1174
        lea     ecx, [ebp - 0x60]
        call    FUN_004d24f0
        test    al, al
        jnz     L_4d11b8
L_4d1174:
        lea     ecx, [ebp - 0x98]
        call    FUN_00412b30
        lea     eax, [ebp - 0xd4]
        push    eax
        lea     ecx, [ebp - 0x98]
        call    FUN_00412bf0
        lea     ecx, [ebp - 0x98]
        push    ecx
        lea     edx, [ebp - 0xd4]
        push    edx
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2680
        lea     ecx, [ebp - 0x98]
        mov     byte ptr [g_007db0a8], bl
        call    FUN_00412b60
L_4d11b8:
        mov     eax, dword ptr [g_007da884]
        push    esi
        lea     ecx, [eax + 0x4]
        call    FUN_00412ca0
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2310
        lea     ecx, [ebp - 0x60]
        push    ecx
        mov     ecx, dword ptr [g_007da884]
        call    FUN_00491f50
        mov     eax, dword ptr [g_007db0a4]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, eax
        inc     eax
        mov     dword ptr [g_007db0a4], eax
        mov     eax, dword ptr [edx + 0x10]
        lea     eax, [eax + ecx*4]
        mov     cx, word ptr [ebp - 0x20]
        mov     word ptr [eax], cx
        mov     dx, word ptr [ebp - 0x1e]
        lea     ecx, [ebp - 0x60]
        mov     word ptr [eax + 0x2], dx
        call    FUN_004d21c0
        lea     ecx, [ebp - 0xd4]
        call    FUN_0041dec0
        jmp     L_4d1123
L_4d121a:
        mov     esi, dword ptr [ebp - 0x10]
        mov     ecx, esi
        call    FUN_00417a40
        test    esi, esi
        mov     edi, eax
        jz      L_4d123a
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4d123a:
        mov     eax, dword ptr [g_007db0a4]
        test    eax, eax
        jbe     L_4d12a7
        test    edi, edi
        jbe     L_4d12a7
        mov     al, byte ptr [g_007db0a8]
        test    al, al
        jz      L_4d12a7
        push    0x0
        push    0x77250c
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2000
        mov     edi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edi + 0x14]
        shl     eax, 0x2
        push    eax
        push    eax
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        lea     ecx, [ebp - 0xc4]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007da884]
        add     ecx, 0x4
        push    ecx
        lea     edx, [ebp - 0xc4]
        push    edx
        lea     ecx, [ebp - 0x60]
        call    FUN_004d2680
        lea     ecx, [ebp - 0xc4]
        call    FUN_0041e710
        lea     ecx, [ebp - 0x60]
        call    FUN_004d21c0
        jmp     L_4d12aa
L_4d12a7:
        mov     edi, dword ptr [ebp - 0xc]
L_4d12aa:
        push    0x0
        lea     ecx, [ebp - 0x1c4]
        call    FUN_0040dd50
        mov     ebx, dword ptr [ebp + 0xc]
        push    0x0
        lea     eax, [ebp - 0x1c4]
        push    eax
        push    0x77247c
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jz      L_4d12e2
        lea     ecx, [ebp - 0x1c4]
        push    ecx
        call    FUN_004dbe80
        add     esp, 0x4
L_4d12e2:
        mov     esi, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esi + 0x8], eax
L_4d12ed:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_4d1311
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x8], edx
        jz      L_4d1311
        mov     edx, dword ptr [ecx + 0x18]
        mov     ecx, dword ptr [ecx + 0x14]
        mov     eax, dword ptr [edi]
        push    edx
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        jmp     L_4d12ed
L_4d1311:
        push    0x0
        lea     ecx, [ebp - 0x174]
        call    FUN_0040dd50
        push    0x0
        lea     edx, [ebp - 0x174]
        push    edx
        push    0x772470
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jz      L_4d1346
        lea     eax, [ebp - 0x174]
        push    eax
        call    FUN_004db9d0
        add     esp, 0x4
L_4d1346:
        push    0x0
        lea     ecx, [ebp - 0x124]
        call    FUN_0040dd50
        push    0x0
        lea     ecx, [ebp - 0x124]
        push    ecx
        push    0x7724f8
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        jz      L_4d13c0
        mov     edx, dword ptr [g_007b8810]
        push    edx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_4d139d
        lea     ecx, [ebp - 0xe0]
        mov     dword ptr [eax + 0x4], ecx
        mov     edx, dword ptr [ebp - 0xe0]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     ecx, eax
        jmp     L_4d139f
L_4d139d:
        xor     ecx, ecx
L_4d139f:
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_4d13b2
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        mov     eax, edx
        jmp     L_4d13b4
L_4d13b2:
        xor     eax, eax
L_4d13b4:
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_004d0e50
L_4d13c0:
        push    0x0
        lea     edx, [ebp - 1]
        push    edx
        push    0x772468
        mov     ecx, ebx
        mov     byte ptr [ebp - 1], 0
        call    FUN_00411ec0
        push    esi
        call    FUN_004084e0
        mov     ecx, dword ptr [ebp + 0x8]
        add     esp, 0x4
        call    FUN_004d2a90
        mov     bl, byte ptr [ebp - 1]
        lea     ecx, [ebp - 0x124]
        call    FUN_0040de20
        lea     ecx, [ebp - 0x174]
        call    FUN_0040de20
        lea     ecx, [ebp - 0x1c4]
        call    FUN_0040de20
        pop     edi
        pop     esi
        mov     al, bl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
