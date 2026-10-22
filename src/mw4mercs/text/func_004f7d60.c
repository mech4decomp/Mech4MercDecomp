/*
 * FUN_004f7d60 (768 B) — __thiscall MLR/Adept update helper. Interpolates
 * between source and destination color/position triples by a factor
 * (EBP+8), pushes them through FUN_00480d50, computes a packed color value
 * (FPU quantize) to g_007da85c, and sets flags on a child object.
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

__declspec(naked) void FUN_004f7d60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x2c], 0xbf800000
        mov     dword ptr [ebp - 0x30], 0xbf800000
        mov     dword ptr [ebp - 0x34], 0xbf800000
        mov     dword ptr [ebp - 0x28], 0xbf800000
        fld     dword ptr [eax + 0xc4]
        fsub    dword ptr [esi + 0x1b4]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1b4]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [eax + 0xd0]
        fsub    dword ptr [esi + 0x1bc]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1bc]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [eax + 0xdc]
        fsub    dword ptr [esi + 0x1c4]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1c4]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [eax + 0xc8]
        fsub    dword ptr [esi + 0x1b8]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1b8]
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [eax + 0xd4]
        fsub    dword ptr [esi + 0x1c0]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1c0]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [eax + 0xe0]
        fsub    dword ptr [esi + 0x1c8]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x1c8]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [eax + 0xcc]
        fsub    dword ptr [eax + 0x84]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x84]
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [eax + 0xd8]
        fsub    dword ptr [eax + 0x90]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x90]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [eax + 0xe4]
        fsub    dword ptr [eax + 0x9c]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x9c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [eax + 0x4c]
        fsub    dword ptr [eax + 0x2c]
        fst     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x2c]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [eax + 0x50]
        fsub    dword ptr [eax + 0x30]
        fst     dword ptr [ebp - 0x30]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x30]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [eax + 0x54]
        fsub    dword ptr [eax + 0x34]
        fst     dword ptr [ebp - 0x2c]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x34]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [eax + 0x58]
        mov     ecx, dword ptr [ebp - 0x4]
        fsub    dword ptr [eax + 0x38]
        mov     edx, dword ptr [ebp - 0x8]
        push    ecx
        push    edx
        fst     dword ptr [ebp - 0x28]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [eax + 0x38]
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        push    0x1
        fstp    dword ptr [ebp - 0x28]
        call    FUN_00480d50
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x18]
        push    ecx
        push    edx
        push    eax
        push    0x2
        call    FUN_00480d50
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x24]
        push    ecx
        push    edx
        push    eax
        push    0x3
        call    FUN_00480d50
        mov     ecx, dword ptr [g_007dc6e0]
        mov     eax, dword ptr [ecx + 0x4c]
        add     esp, 0x30
        test    eax, eax
        jz      L8059
        mov     edx, dword ptr [eax + 0x24]
        test    edx, edx
        jz      L8028
        mov     eax, dword ptr [edx + 0x2c4]
        test    eax, eax
        jz      L8028
        mov     eax, dword ptr [ebp - 0x34]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     dword ptr [g_007daa28], eax
        mov     eax, dword ptr [ebp - 0x2c]
        mov     dword ptr [g_007daa2c], ecx
        mov     ecx, dword ptr [ebp - 0x28]
        mov     dword ptr [g_007daa30], eax
        lea     eax, [ebp - 0x34]
        push    ebx
        mov     dword ptr [g_007daa34], ecx
        mov     dword ptr [ebp - 0x24], eax
        fld     dword ptr [g_00775558]
        mov     esi, dword ptr [ebp - 0x24]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x20]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x20]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0x8], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x20]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x20]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x8], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x20]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x20]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x8], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x20]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x20]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x8]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x8], ecx
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [g_007da85c], ecx
        pop     ebx
L8028:
        lea     ecx, [edx + 0x274]
        call    FUN_0041fd80
        test    eax, eax
        jz      L8059
        mov     eax, dword ptr [eax + 0x140]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x8]
        and     edx, 0xffefffff
        or      edx, 0x80000
        or      ecx, 0x180000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x8], ecx
L8059:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
