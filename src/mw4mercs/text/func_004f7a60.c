/*
 * FUN_004f7a60 (764 B) — __thiscall MLR/Adept update helper. Pushes three
 * color/position triples through FUN_00480d50, then computes a packed color
 * value (FPU quantize) and stores it to g_007da85c, and sets flags on a
 * child object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daa28;
extern int g_007daa2c;
extern int g_007daa30;
extern int g_007daa34;
extern float g_00775558;
extern int g_007da85c;
extern int g_007dc6e0;

extern void __cdecl FUN_00480d50(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_004f7a60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov     edx, dword ptr [esi + 0x1b8]
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x84]
        mov     eax, dword ptr [esi + 0x1b4]
        push    ecx
        push    edx
        push    eax
        push    0x1
        call    FUN_00480d50
        mov     ecx, dword ptr [edi + 0x90]
        mov     edx, dword ptr [esi + 0x1c0]
        mov     eax, dword ptr [esi + 0x1bc]
        push    ecx
        push    edx
        push    eax
        push    0x2
        call    FUN_00480d50
        mov     ecx, dword ptr [edi + 0x9c]
        mov     edx, dword ptr [esi + 0x1c8]
        mov     eax, dword ptr [esi + 0x1c4]
        push    ecx
        push    edx
        push    eax
        push    0x3
        call    FUN_00480d50
        mov     ecx, dword ptr [g_007dc6e0]
        mov     eax, dword ptr [ecx + 0x4c]
        add     esp, 0x30
        test    eax, eax
        jz      L7D56
        mov     edx, dword ptr [eax + 0x24]
        test    edx, edx
        jz      L7D56
        mov     eax, dword ptr [edx + 0x2c4]
        test    eax, eax
        push    ebx
        jz      L7D2A
        mov     al, byte ptr [esi + 0x169]
        test    al, al
        jz      L7C17
        mov     ecx, dword ptr [edi + 0x5c]
        lea     eax, [edi + 0x5c]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [g_007daa2c], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x8], eax
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [g_007daa30], ecx
        mov     dword ptr [g_007daa34], eax
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp - 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x4], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        jmp     L7D24
L7C17:
        mov     ecx, dword ptr [edi + 0x2c]
        lea     eax, [edi + 0x2c]
        mov     dword ptr [g_007daa28], ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [g_007daa2c], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0xc], eax
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [g_007daa30], ecx
        mov     dword ptr [g_007daa34], eax
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp - 0xc]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x4], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x8]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [ebp - 0x4]
L7D24:
        mov     dword ptr [g_007da85c], ecx
L7D2A:
        lea     ecx, [edx + 0x274]
        call    FUN_0041fd80
        test    eax, eax
        pop     ebx
        jz      L7D56
        mov     eax, dword ptr [eax + 0x140]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x8]
        and     edx, 0xffe7ffff
        or      ecx, 0x180000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x8], ecx
L7D56:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
