/*
 * FUN_00436210 (464 B) — in-.text data block: one __thiscall (this in
 * ecx) function at 0x36210 (RET 8) + 2 nop pad. Allocates a 0x30-byte
 * node (FUN_004084d0), initializes a vector (FUN_00423c40), computes a
 * transform via FUN_00428810 / FUN_00428830 / FUN_00428730, then for
 * each active element (bitmap at g_7da600) does a 3D dot-product test
 * (FPU) and sets a visibility flag byte. Returns via vtable calls
 * [eax+0x34] / [eax+0x98].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00423c40(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428730(void);
extern int  g_7da600;

__declspec(naked) void __stdcall FUN_00436210(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jne     L_25a
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        je      L_255
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax + 0x10], edi
        mov     dword ptr [eax + 0x14], edi
        mov     dword ptr [eax + 0x18], edi
        mov     dword ptr [eax + 0x1c], edi
        mov     dword ptr [eax + 0x20], edi
        mov     dword ptr [eax + 0x24], edi
        mov     dword ptr [eax + 0x28], edi
        mov     dword ptr [eax + 0x2c], edi
        jmp     L_257
    L_255:
        xor     eax, eax
    L_257:
        mov     dword ptr [esi + 0xc], eax
    L_25a:
        cmp     dword ptr [esi + 0xac], edi
        jne     L_294
        mov     ebx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x18]
        lea     ebp, [ebx + 0x20]
        push    eax
        mov     ecx, ebp
        call    FUN_00423c40
        mov     ecx, dword ptr [ebp + 4]
        cmp     ecx, edi
        jbe     L_282
        mov     edi, dword ptr [ebp]
        or      eax, 0xffffffff
        rep stosd
    L_282:
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [ebx + 0x24]
        mov     dword ptr [esi + 0xa8], ecx
        mov     dword ptr [esi + 0xac], edx
    L_294:
        mov     edi, dword ptr [esp + 0x54]
        fld     dword ptr [esp + 0x58]
        mov     eax, dword ptr [edi + 0xc]
        fmul    dword ptr [esp + 0x58]
        mov     ecx, dword ptr [edi + 0x1c]
        mov     edx, dword ptr [edi + 0x2c]
        mov     ebx, dword ptr [esi + 0xac]
        fstp    dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x38]
        mov     dword ptr [esp + 0x18], ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], edx
        call    FUN_00428810
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, edi
        call    FUN_00428830
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, edi
        call    FUN_00428730
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x34], edx
        push    ecx
        lea     edx, [esp + 0x18]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esi]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        test    eax, eax
        je      L_3ce
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x98]
        test    eax, eax
        je      L_3ce
        xor     ebp, ebp
        xor     ecx, ecx
        cmp     ebx, ebp
        jle     L_3c0
    L_332:
        mov     eax, dword ptr [g_7da600]
        mov     edi, dword ptr [eax]
        xor     edx, edx
    L_33b:
        cmp     byte ptr [edi + ecx], 0
        jbe     L_3b4
        mov     eax, dword ptr [esi + 0x14]
        fld     dword ptr [eax + edx]
        add     eax, edx
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x1c]
        fld     st(0)
        fmul    dword ptr [esp + 0x40]
        fld     st(2)
        fmul    dword ptr [esp + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x38]
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x58]
        fmul    dword ptr [esp + 0x4c]
        fxch    st(1)
        fmul    dword ptr [esp + 0x48]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x44]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fstp    st(1)
        fld     st(0)
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x58]
        fmul    dword ptr [esp + 0x58]
        faddp   st(1), st(0)
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        je      L_3b4
        mov     eax, dword ptr [esi + 0xc]
        mov     eax, dword ptr [eax + 0x20]
        or      byte ptr [eax + ecx*4 + 3], 0xff
        lea     eax, [eax + ecx*4]
    L_3b4:
        inc     ecx
        add     edx, 0xc
        cmp     ecx, ebx
        jl      L_33b
    L_3c0:
        pop     edi
        mov     word ptr [esi + 0x56], bp
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     8
    L_3ce:
        pop     edi
        mov     word ptr [esi + 0x56], 0
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     8
        nop
        nop
    }
}
