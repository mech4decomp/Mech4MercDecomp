/*
 * FUN_004eddf0 (1502 B) — __thiscall (ECX=this, RET 0x8). MLR model
 * (billboard/quad) constructor: loads a model file, allocates a texture
 * object, registers it in the quad-stack list, computes screen-space
 * X/Y/Width/Height and UV coordinates (with FPU math + range asserts),
 * and fills vertex buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern int g_007daa38;
extern int g_007b87ec;
extern int g_007da848;
extern int g_007dc7fc;
extern int g_00858940;
extern int g_00858944;
extern float g_00774ba0;
extern float g_00774b70;
extern float g_0076d064;
extern float g_0076c5b0;

extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b8420(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004eda20(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004c8a50(void);
extern void __cdecl FUN_004161f0(void);
extern void __cdecl FUN_004ba320(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_004122e0(void);
extern void __cdecl FUN_00411ec0(void);

__declspec(naked) void FUN_004eddf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     dword ptr [ebp - 0x14], edi
        call    FUN_004d5b10
        mov     esi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [edi + 0x10]
        xor     ebx, ebx
        mov     dword ptr [ecx], ebx
        push    edx
        mov     dword ptr [edi], 0x774a50
        call    FUN_00412780
        push    ebx
        lea     ecx, [ebp - 0x78]
        call    FUN_0040dd50
        push    0x1
        lea     eax, [ebp - 0x78]
        push    eax
        push    0x774ba4
        mov     ecx, esi
        call    FUN_00412390
        mov     ecx, dword ptr [g_007b8810]
        push    ecx
        push    0xc
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_alloc_null
        lea     edx, [ebp - 0x34]
        mov     dword ptr [eax + 0x4], edx
        mov     ecx, dword ptr [ebp - 0x34]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax], 0x76cd64
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_alloc_cont
L_alloc_null:
        mov     dword ptr [ebp - 0xc], ebx
L_alloc_cont:
        mov     edx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edx + 0x8]
        cmp     eax, ebx
        jz      L_skip
        mov     ebx, dword ptr [eax]
L_skip:
        mov     eax, dword ptr [ebx + 0x14]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_00412570
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        test    eax, eax
        jz      L_tex_null
        mov     ecx, dword ptr [g_007b87ec]
        push    ecx
        push    ebx
        mov     ecx, eax
        call    FUN_004b8420
        mov     esi, eax
        jmp     L_tex_cont
L_tex_null:
        xor     esi, esi
L_tex_cont:
        push    0x1
        lea     edx, [ebp - 0x10]
        push    edx
        push    0x770aa8
        mov     ecx, ebx
        mov     dword ptr [edi + 0x14], esi
        call    FUN_00411bf0
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    eax
        call    FUN_0048fac0
        test    eax, eax
        jnz     L_tex2
        mov     ecx, dword ptr [ebp - 0x10]
        push    eax
        push    ecx
        mov     ecx, dword ptr [g_007da848]
        call    FUN_0048f380
L_tex2:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ebp - 0xc]
        and     ecx, 0xffffc000
        mov     dword ptr [esi], ecx
        or      dword ptr [esi + 0x8], 0x3fff
        mov     edi, dword ptr [esi]
        or      edi, edx
        push    eax
        mov     dword ptr [esi], edi
        call    FUN_004084e0
        mov     eax, dword ptr [g_007dc7fc]
        mov     ebx, dword ptr [eax]
        add     esp, 0x4
        xor     al, al
L_loop:
        test    ebx, ebx
        jz      L_loop_null
        mov     edi, dword ptr [ebx]
        mov     ebx, dword ptr [ebx + 0x4]
        jmp     L_loop_cont
L_loop_null:
        xor     edi, edi
L_loop_cont:
        test    edi, edi
        jz      L_loop_done
        test    al, al
        jnz     L_edf74
        lea     ecx, [edi + 0x10]
        call    FUN_0041fd80
        cmp     dword ptr [eax + 0x140], esi
        setz    al
        jmp     L_loop
L_loop_done:
        test    al, al
        jnz     L_edf74
        push    0x48
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc2_null
        push    0xa
        mov     ecx, eax
        call    FUN_004eda20
        mov     edi, eax
        jmp     L_alloc2_cont
L_alloc2_null:
        xor     edi, edi
L_alloc2_cont:
        mov     ecx, dword ptr [g_007dc7fc]
        push    edi
        call    FUN_004179b0
        lea     ecx, [edi + 0x10]
        call    FUN_0041fd80
        push    esi
        mov     ecx, eax
        call    FUN_004c8a50
L_edf74:
        mov     esi, dword ptr [edi + 0x44]
        lea     ecx, [edi + 0x18]
        call    FUN_004161f0
        lea     ecx, [edi + 0x10]
        call    FUN_0041fd80
        mov     ebx, dword ptr [ebp - 0x14]
        lea     ecx, [ebx + 0x24]
        push    ecx
        lea     edx, [ebx + 0x20]
        push    edx
        lea     ecx, [ebx + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x10]
        lea     edi, [ebx + 0x18]
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_004ba320
        mov     eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jz      L_str_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_str_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_str_skip:
        lea     ecx, [ebp - 0x78]
        call    FUN_0040de20
        mov     esi, dword ptr [ebp + 0xc]
        push    0x1
        lea     edx, [ebp - 0x8]
        push    edx
        push    0x7749d8
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        mov     ecx, dword ptr [g_00858940]
        jl      L_xbad
        cmp     eax, ecx
        jg      L_xbad
        fild    dword ptr [ebp - 0x8]
        fmul    dword ptr [g_00774ba0]
        fst     dword ptr [ebp - 0x68]
        fstp    dword ptr [ebp - 0x58]
        jmp     L_xok
L_xbad:
        mov     eax, dword ptr [ebx + 0x10]
        push    ecx
        push    eax
        push    0x774b74
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_xok
        int     3
L_xok:
        push    0x1
        lea     ecx, [ebp - 0x8]
        push    ecx
        push    0x7749a4
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        mov     ecx, dword ptr [g_00858944]
        jl      L_ybad
        cmp     eax, ecx
        jg      L_ybad
        fild    dword ptr [ebp - 0x8]
        fmul    dword ptr [g_00774b70]
        fst     dword ptr [ebp - 0x64]
        fstp    dword ptr [ebp - 0x34]
        jmp     L_yok
L_ybad:
        mov     edx, dword ptr [ebx + 0x10]
        push    ecx
        push    edx
        push    0x774b44
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_yok
        int     3
L_yok:
        push    0x1
        lea     eax, [ebp - 0x8]
        push    eax
        push    0x774b3c
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jge     L_wcalc
        mov     ecx, dword ptr [ebx + 0x10]
        push    ecx
        push    0x774b24
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_hstart
        int     3
        jmp     L_hstart
L_wcalc:
        fild    dword ptr [ebp - 0x8]
        fidiv   dword ptr [g_00858940]
        fadd    dword ptr [ebp - 0x68]
        fst     dword ptr [ebp - 0x48]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_wskip
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        push    0x774afc
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_wskip
        int     3
L_wskip:
        mov     eax, dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x38], eax
L_hstart:
        push    0x1
        lea     ecx, [ebp - 0x8]
        push    ecx
        push    0x774af4
        mov     ecx, esi
        call    FUN_00411cb0
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jge     L_hcalc
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        push    0x774adc
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_after_h
        int     3
        jmp     L_after_h
L_hcalc:
        fild    dword ptr [ebp - 0x8]
        fidiv   dword ptr [g_00858944]
        fadd    dword ptr [ebp - 0x64]
        fst     dword ptr [ebp - 0x54]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_hskip
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        push    0x774ab0
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_hskip
        int     3
L_hskip:
        mov     ecx, dword ptr [ebp - 0x54]
        mov     dword ptr [ebp - 0x44], ecx
L_after_h:
        mov     edi, dword ptr [edi]
        push    0x0
        mov     ecx, 0x10
        lea     esi, [ebp - 0x68]
        lea     edx, [ebp - 0x4]
        mov     dword ptr [ebp - 0x60], 0x0
        mov     dword ptr [ebp - 0x5c], 0x3f800000
        mov     dword ptr [ebp - 0x50], 0x0
        mov     dword ptr [ebp - 0x4c], 0x3f800000
        mov     dword ptr [ebp - 0x40], 0x0
        mov     dword ptr [ebp - 0x3c], 0x3f800000
        mov     dword ptr [ebp - 0x30], 0x0
        mov     dword ptr [ebp - 0x2c], 0x3f800000
        rep     movsd
        mov     esi, dword ptr [ebp + 0xc]
        push    edx
        push    0x774aa8
        mov     ecx, esi
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_00411d60
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_uv1_bad
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_uv1_ok
L_uv1_bad:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        push    0x774a88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_uv1_ok
        int     3
L_uv1_ok:
        mov     ecx, dword ptr [ebp - 0x4]
        push    0x0
        lea     eax, [ebp - 0x4]
        mov     edx, ecx
        push    eax
        mov     dword ptr [ebp - 0x48], ecx
        push    0x774a80
        mov     ecx, esi
        mov     dword ptr [ebp - 0x40], edx
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_00411d60
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_uv2_bad
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_uv2_ok
L_uv2_bad:
        mov     ecx, dword ptr [ebx + 0x10]
        push    ecx
        push    0x774a88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_uv2_ok
        int     3
L_uv2_ok:
        mov     edx, dword ptr [ebp - 0x4]
        push    0x0
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     eax, edx
        push    0x774a78
        mov     ecx, esi
        mov     dword ptr [ebp - 0x44], edx
        mov     dword ptr [ebp - 0x2c], eax
        mov     dword ptr [ebp - 0x4], 0x3f800000
        call    FUN_00411d60
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_uv3_bad
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_uv3_ok
L_uv3_bad:
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        push    0x774a88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_uv3_ok
        int     3
L_uv3_ok:
        mov     eax, dword ptr [ebp - 0x4]
        push    0x0
        mov     ecx, eax
        lea     edx, [ebp - 0x4]
        push    edx
        mov     dword ptr [ebp - 0x30], ecx
        push    0x774a70
        mov     ecx, esi
        mov     dword ptr [ebp - 0x38], eax
        mov     dword ptr [ebp - 0x4], 0x3f800000
        call    FUN_00411d60
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_uv4_bad
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [g_0076d064]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_uv4_ok
L_uv4_bad:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        push    0x774a88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_uv4_ok
        int     3
L_uv4_ok:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edi, dword ptr [ebx + 0x20]
        mov     edx, ecx
        mov     dword ptr [ebp - 0x3c], ecx
        mov     dword ptr [ebp - 0x34], edx
        mov     ecx, 0x8
        lea     esi, [ebp - 0x48]
        rep     movsd
        lea     eax, [ebp - 0x64]
        mov     edx, 0x4
        mov     ecx, 0xbf800000
L_fill:
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax - 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        add     eax, 0x10
        dec     edx
        jnz     L_fill
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x1
        lea     eax, [ebp - 0x28]
        push    eax
        push    0x774a64
        mov     dword ptr [ebp - 0x20], 0xbf800000
        mov     dword ptr [ebp - 0x24], 0xbf800000
        mov     dword ptr [ebp - 0x28], 0xbf800000
        mov     dword ptr [ebp - 0x1c], 0xbf800000
        call    FUN_004122e0
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [ebp - 0x20]
        mov     edi, dword ptr [ebx + 0x1c]
        mov     dword ptr [ebp - 0x68], ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x64], edx
        mov     edx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x5c], ecx
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x60], eax
        mov     eax, dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x58], edx
        mov     edx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x50], ecx
        mov     ecx, dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x54], eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x4c], edx
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x44], ecx
        mov     ecx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x48], eax
        mov     eax, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x40], edx
        mov     edx, dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x38], ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x3c], eax
        mov     eax, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x2c], ecx
        push    0x0
        lea     edx, [ebp + 0xb]
        mov     dword ptr [ebp - 0x30], eax
        mov     ecx, 0x10
        lea     esi, [ebp - 0x68]
        rep     movsd
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        push    0x7749e4
        mov     byte ptr [ebp + 0xb], 0x1
        call    FUN_00411ec0
        mov     eax, dword ptr [ebx + 0x24]
        mov     cl, byte ptr [ebp + 0xb]
        pop     edi
        mov     byte ptr [eax], cl
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
