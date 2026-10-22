/*
 * FUN_00600570 (792 B) ? __thiscall (ECX=this) with 1 stack param, RET 4.
 * Reallocates three parallel arrays (0x22cc/0x22d4/0x22c4) to a new size,
 * initializes them, then builds a list of objects via a virtual device.
 *
 * __thiscall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern short g_007db0ac;
extern short g_007db0ae;
extern int g_007b8c10;
extern int g_007da848;
extern int g_76d650;         /* vtable */
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void __cdecl FUN_00600570(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x4c
        push    ebx
        mov     ebx, ecx
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [g_007db0ac]
        jnz     L_00597
        mov     dx, word ptr [eax + 0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L_00881
    L_00597:
        push    ebp
        push    esi
        push    edi
        push    0x1
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0x18]
        push    0x4
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x60]
        mov     esi, dword ptr [ebx + 0x22d0]
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        jz      L_00644
        test    eax, eax
        jbe     L_0061d
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     ebp, dword ptr [ebx + 0x22cc]
        add     esp, 0x4
        test    ebp, ebp
        mov     edi, eax
        jz      L_00615
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, esi
        jc      L_005f0
        mov     ecx, esi
    L_005f0:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_0060c
        mov     edx, ebp
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
    L_005ff:
        mov     esi, dword ptr [edx + eax]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_005ff
    L_0060c:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    L_00615:
        mov     dword ptr [ebx + 0x22cc], edi
        jmp     L_00636
    L_0061d:
        mov     eax, dword ptr [ebx + 0x22cc]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x22cc], 0x0
    L_00636:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [ebx + 0x22d0], ecx
    L_00644:
        mov     ebp, dword ptr [ebx + 0x22d8]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jz      L_006d0
        test    eax, eax
        jbe     L_006a9
        lea     edx, [eax*4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x22d4]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      L_006a1
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebp
        jc      L_0067c
        mov     ecx, ebp
    L_0067c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_00698
        mov     edx, edi
        lea     eax, [esi + ecx*4]
        sub     edx, esi
        inc     ecx
    L_0068b:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_0068b
    L_00698:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_006a1:
        mov     dword ptr [ebx + 0x22d4], esi
        jmp     L_006c2
    L_006a9:
        mov     ecx, dword ptr [ebx + 0x22d4]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x22d4], 0x0
    L_006c2:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [ebx + 0x22d8], edx
    L_006d0:
        mov     ebp, dword ptr [ebx + 0x22c8]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jz      L_00758
        test    eax, eax
        jbe     L_00731
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x22c4]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      L_00729
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, ebp
        jc      L_00704
        mov     ecx, ebp
    L_00704:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_00720
        mov     edx, edi
        lea     eax, [esi + ecx*4]
        sub     edx, esi
        inc     ecx
    L_00713:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_00713
    L_00720:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    L_00729:
        mov     dword ptr [ebx + 0x22c4], esi
        jmp     L_0074a
    L_00731:
        mov     eax, dword ptr [ebx + 0x22c4]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x22c4], 0x0
    L_0074a:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [ebx + 0x22c8], ecx
    L_00758:
        xor     ebp, ebp
        xor     ecx, ecx
        cmp     eax, ebp
        mov     dword ptr [ebx + 0x22dc], ebp
        jle     L_0077a
        mov     edx, dword ptr [ebx + 0x22cc]
    L_0076c:
        mov     dword ptr [edx], ebp
        mov     eax, dword ptr [esp + 0x60]
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      L_0076c
    L_0077a:
        xor     ecx, ecx
        cmp     eax, ebp
        jle     L_00875
        mov     edx, dword ptr [ebx + 0x22d4]
    L_0078a:
        mov     dword ptr [edx], 0x3c23d70a
        mov     eax, dword ptr [esp + 0x60]
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      L_0078a
        cmp     eax, ebp
        jle     L_00875
        mov     edi, dword ptr [ebx + 0x22d4]
        mov     eax, dword ptr [ebx + 0x22c4]
        sub     eax, edi
        mov     dword ptr [esp + 0x14], eax
    L_007b6:
        lea     edx, [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x1c]
        push    eax
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00412a00
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0x8
        push    0x4
        push    edi
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0x20]
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_00810
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_004d05d0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     ecx, [esi + 0x10]
        call    FUN_0040f060
        mov     dword ptr [esi], offset g_76d650
        jmp     L_00812
    L_00810:
        xor     esi, esi
    L_00812:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_007da848]
        mov     dword ptr [edx + edi], esi
        mov     eax, dword ptr [esp + 0x10]
        push    0x0
        push    eax
        call    FUN_0048fac0
        test    eax, eax
        jz      L_0083d
        fld     dword ptr [edi]
        mov     ecx, dword ptr [ebx + 0x22cc]
        fstp    dword ptr [eax + 0x38]
        mov     dword ptr [ecx + ebp*4], eax
    L_0083d:
        mov     edx, dword ptr [ebx + 0x22dc]
        mov     eax, dword ptr [esp + 0x10]
        inc     edx
        test    eax, eax
        mov     dword ptr [ebx + 0x22dc], edx
        jz      L_00865
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_00865
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_00865:
        mov     eax, dword ptr [esp + 0x60]
        inc     ebp
        add     edi, 0x4
        cmp     ebp, eax
        jl      L_007b6
    L_00875:
        lea     ecx, [esp + 0x18]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
    L_00881:
        pop     ebx
        add     esp, 0x4c
        ret     4
    }
}
