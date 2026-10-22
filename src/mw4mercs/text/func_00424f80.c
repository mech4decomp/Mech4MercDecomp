/*
 * FUN_00424f80 (extent 0x424f80-0x427674) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076de14;
extern float  g_0076de18;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9618;
extern int    g_007b961c;
extern int    g_007b9620;
extern int    g_007b9634;
extern int    g_007b9638;
extern int    g_007b963c;
extern int    g_007b9640;
extern int    g_007d98fc;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da608;
extern int    g_007da65c;
extern int    g_007da660;
extern int    g_007da66c;
extern int    g_007da670;
extern int    g_007da680;
extern int    g_007da684;
extern int    g_007da688;
extern int    g_007da68c;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00459210(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00424f80(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x68]
        test    eax, eax
        mov    dword ptr [ebp - 0xc], edi
        jne    L_4fc8
        mov    eax, dword ptr [ebp + 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    ecx
        lea    edx, [ebp + 0xc]
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, edi
        call    FUN_00459210
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_4fc8:
        mov    eax, dword ptr [edi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0x7c], 0
        jg    L_4fe5
        mov    byte ptr [edi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_4fe5:
        cmp    word ptr [edi + 0x56], 0
        mov    ecx, dword ptr [edi + 0x18]
        mov    dword ptr [ebp - 0x34], ecx
        jne    L_4ffc
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x98]
L_4ffc:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [edi + 0x14]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x18], ebx
        je    L_5096
        mov    eax, dword ptr [ebp - 0x34]
        test    eax, eax
        mov    dword ptr [ebp - 0x30], 0
        jle    L_50d8
L_5038:
        cmp    byte ptr [ebx], 0
        je    L_506d
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x18]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    ebx, dword ptr [edx]
        add    ebx, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp - 0x18]
L_506d:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp + 0x18]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, dword ptr [ebp - 0x34]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_5038
        jmp    L_50d8
L_5096:
        mov    eax, dword ptr [ebp - 0x34]
        test    eax, eax
        jle    L_50d8
        mov    dword ptr [ebp + 0x14], eax
L_50a0:
        cmp    byte ptr [ebx], 0
        je    L_50b9
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_50b9:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0x40]
        add    eax, 0x10
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_50a0
L_50d8:
        mov    eax, dword ptr [edi + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0x90], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x84], 0
        mov    dword ptr [ebp - 0x94], 0
        je    L_51d3
        test    eax, eax
        jle    L_51d3
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_51d3
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_514c
        mov    dword ptr [g_007da864], 1
        jmp    L_51a7
L_514c:
        cmp    eax, 0x80
        jl    L_515f
        mov    dword ptr [g_007da864], 2
        jmp    L_51a7
L_515f:
        cmp    eax, 0x40
        jl    L_5170
        mov    dword ptr [g_007da864], 4
        jmp    L_51a7
L_5170:
        cmp    eax, 0x20
        jl    L_5181
        mov    dword ptr [g_007da864], 8
        jmp    L_51a7
L_5181:
        cmp    eax, 0x10
        jl    L_5192
        mov    dword ptr [g_007da864], 0x10
        jmp    L_51a7
L_5192:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_51a7:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_527a
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_527a
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x84], edx
        mov    dword ptr [ebp - 0x94], eax
L_51d3:
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edi + 0x58]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x3c], eax
        mov    dword ptr [ebp - 0x70], eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x14], eax
        jle    L_6e23
L_51f7:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x30]
        lea    eax, [ecx + edx]
        cmp    byte ptr [eax], 0
        mov    dword ptr [ebp + 0x18], eax
        je    L_6e03
        mov    eax, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [eax + 0x48]
        mov    edx, dword ptr [ebp - 0x14]
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + edx]
        xor    eax, eax
        mov    al, byte ptr [ebx + edx + 1]
        mov    dword ptr [ebp - 0x74], ebx
        mov    esi, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + edx + 2]
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x64], edi
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [eax + esi*4]
        mov    esi, dword ptr [ebp + 8]
        mov    esi, dword ptr [eax + esi*4]
        mov    eax, dword ptr [eax + edi*4]
        mov    edi, eax
        and    edi, esi
        mov    dword ptr [g_007b961c], ecx
        or    eax, esi
        mov    esi, dword ptr [g_007b961c]
        and    ecx, edi
        or    esi, eax
        test    ecx, ecx
        mov    dword ptr [g_007b9620], ecx
        mov    dword ptr [g_007b961c], esi
        je    L_5283
        mov    edx, dword ptr [ebp + 0x18]
        mov    byte ptr [edx], 0
        jmp    L_6e03
L_527a:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_51d3
L_5283:
        test    esi, esi
        jne    L_52af
        mov    eax, dword ptr [ebp - 0x7c]
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x64]
        inc    eax
        mov    dword ptr [ebp - 0x7c], eax
        mov    eax, dword ptr [g_007da600]
        mov    eax, dword ptr [eax]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_6e03
L_52af:
        mov    ecx, dword ptr [esi*4 + 0x7b2478]
        xor    eax, eax
        cmp    ecx, 1
        mov    dword ptr [ebp - 0x1c], eax
        jne    L_5f32
        lea    edi, [edx + 3]
        cmp    edx, edi
        mov    ecx, edx
        mov    dword ptr [ebp - 0x74], edi
        jge    L_5f1e
        jmp    L_52d9
L_52d6:
        mov    edx, dword ptr [ebp - 0x14]
L_52d9:
        mov    eax, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edi
        mov    dword ptr [ebp - 0xbc], ecx
        mov    esi, ebx
        mov    dword ptr [ebp - 8], esi
        jge    L_52f6
        mov    edx, ecx
L_52f6:
        mov    edi, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + edx]
        mov    edx, dword ptr [ebp - 0x3c]
        and    edi, 0xffff
        add    edi, edx
        mov    edx, dword ptr [ebx + esi*4]
        test    edx, edx
        mov    dword ptr [g_007b9618], edx
        mov    dword ptr [ebp + 0x18], ecx
        jne    L_5446
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    edx, dword ptr [g_007da684]
        mov    eax, esi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    ecx, edi
        shl    ecx, 4
        mov    dword ptr [ecx + ebx], edx
        mov    edx, dword ptr [eax + 4]
        add    ecx, ebx
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    ebx, dword ptr [g_007da680]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [ebp - 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    ecx, dword ptr [edx + 0x6c]
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax + esi*4]
        mov    edx, dword ptr [edx + 0x1c]
        mov    ecx, dword ptr [g_007da608]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ecx + edi*4], eax
        lea    eax, [esi*8]
        lea    ecx, [edi*8]
        mov    esi, ecx
        add    esi, dword ptr [ebx]
        mov    ebx, dword ptr [edx + eax]
        mov    edx, dword ptr [edx + eax + 4]
        mov    dword ptr [esi], ebx
        mov    dword ptr [esi + 4], edx
        mov    edx, dword ptr [g_007b9640]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [edx + eax]
        mov    edx, dword ptr [edx + eax + 4]
        mov    esi, dword ptr [g_007b9638]
        mov    esi, dword ptr [esi]
        mov    dword ptr [esi + ecx], ebx
        mov    dword ptr [esi + ecx + 4], edx
        mov    edx, dword ptr [g_007b963c]
        mov    esi, dword ptr [edx]
        mov    edx, dword ptr [g_007b9634]
        mov    edx, dword ptr [edx]
        add    eax, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [edx + ecx], esi
        mov    dword ptr [edx + ecx + 4], eax
        mov    ecx, dword ptr [ebp - 0xc]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_5418
        mov    esi, dword ptr [ebp - 8]
        and    eax, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
L_53f3:
        test    eax, edx
        je    L_5409
        mov    eax, dword ptr [ecx - 4]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + esi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], al
        mov    eax, dword ptr [ebp - 0x10]
L_5409:
        add    ecx, 8
        shl    edx, 1
        cmp    ecx, 0x7da670
        jl    L_53f3
        jmp    L_541b
L_5418:
        mov    esi, dword ptr [ebp - 8]
L_541b:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0x40]
        inc    eax
        mov    dword ptr [ebp - 0x1c], eax
        lea    eax, [ecx*4]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [eax + edx]
        inc    edi
        test    eax, eax
        je    L_5f0a
        mov    edx, dword ptr [g_007b9618]
        jmp    L_545f
L_5446:
        lea    eax, [ecx*4]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [eax + ebx]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        jne    L_5f0a
L_545f:
        or    edx, eax
        mov    dword ptr [ebp - 0x6c], 1
        mov    eax, dword ptr [ebp - 0x6c]
        mov    dword ptr [g_007b9618], edx
        xor    ebx, ebx
L_5473:
        test    eax, edx
        jne    L_5485
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_5473
        jmp    L_55df
L_5485:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_5533
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    eax, ecx
        mov    ecx, esi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_5515
        jmp    dword ptr [ebx*4 + 0x427674]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_54c2:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_55cc
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_55d9
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_54c2
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_54c2
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_54c2
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_54c2
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_54c2
L_5515:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5578
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_55d9
L_5533:
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, esi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_55b1
        jmp    dword ptr [ebx*4 + 0x42768c]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_5565:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_55cc
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_5578:
        mov    dword ptr [ebp - 4], 0
        jmp    L_55d9
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_5565
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_5565
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_5565
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_5565
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_5565
L_55b1:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5578
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_55d9
L_55cc:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_55d9:
        mov    dword ptr [ebp - 0x90], ebx
L_55df:
        cmp    byte ptr [ebp + 0xb], 1
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        jne    L_5a8b
        mov    ecx, dword ptr [ebp + 0x18]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, esi
        mov    esi, dword ptr [g_007da684]
        mov    esi, dword ptr [esi]
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, edi
        shl    edx, 4
        fmul    dword ptr [ebp - 4]
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x90]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_5664
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_566a
L_5664:
        fld    dword ptr [g_007b220c]
L_566a:
        mov    ecx, dword ptr [ebp - 0x90]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ecx + edx*4]
        mov    edx, ecx
        and    edx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x19c], edx
        xor    edx, edx
        mov    esi, ecx
        mov    dword ptr [ebp - 0x198], edx
        fild    qword ptr [ebp - 0x19c]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076de18]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        and    esi, 0xff
        fstp    dword ptr [ebp - 0x11c]
        shr    ecx, 8
        fild    qword ptr [ebp - 0x164]
        mov    dword ptr [ebp - 0x170], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076de18]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076de18]
        push    edx
        lea    eax, [ebp - 0x134]
        push    eax
        fstp    dword ptr [ebp - 0x12c]
        lea    ecx, [ebp - 0x124]
        fild    qword ptr [ebp - 0x1a4]
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        push    ecx
        fstp    dword ptr [ebp - 0x130]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [ebp - 0x134]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [ebp - 0x128]
        lea    ecx, [ebp - 0xf4]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076de14]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xd0], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0xd0]
        mov    eax, dword ptr [ebp + 0x18]
        mov    ebx, dword ptr [g_007da680]
        mov    dword ptr [ecx + edi*4], edx
        mov    edx, dword ptr [ebp - 0xc]
        lea    ecx, [eax*8]
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [edx + 0x1c]
        shl    eax, 3
        lea    esi, [edi*8]
        mov    edx, esi
        add    edx, dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fld    dword ptr [ebx + ecx]
        lea    ebx, [ecx + eax + 4]
        fsub    dword ptr [ecx + eax]
        mov    dword ptr [ebp - 0x20], ebx
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ebx + ecx + 4]
        mov    ecx, dword ptr [ebp - 0x20]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [g_007b9640]
        mov    ecx, dword ptr [ecx]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [g_007b9638]
        fld    dword ptr [ebx + ecx]
        mov    edx, dword ptr [edx]
        fsub    dword ptr [ecx + eax]
        lea    ebx, [ecx + eax + 4]
        add    edx, esi
        mov    dword ptr [ebp - 0x20], ebx
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ebx + ecx + 4]
        mov    ecx, dword ptr [ebp - 0x20]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [g_007b963c]
        mov    ecx, dword ptr [ecx]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [g_007b9634]
        fld    dword ptr [ebx + ecx]
        mov    edx, dword ptr [edx]
        fsub    dword ptr [ecx + eax]
        add    edx, esi
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax]
        lea    eax, [ecx + eax + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [ebx + ecx + 4]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [edx + 4]
        jbe    L_5f07
        mov    ebx, dword ptr [ebp + 0x18]
        and    eax, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_5a23:
        mov    edx, dword ptr [ebp + 8]
        test    eax, edx
        je    L_5a73
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [edx + eax]
        mov    byte ptr [ebp - 0xc8], al
        mov    esi, dword ptr [ebp - 0xc8]
        xor    eax, eax
        mov    al, byte ptr [edx + ebx]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x20], esi
        sub    eax, esi
        mov    dword ptr [ebp + 0x18], eax
        fild    dword ptr [ebp + 0x18]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x20]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x18]
        mov    dl, byte ptr [ebp + 0x18]
        mov    byte ptr [eax + edi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_5a73:
        mov    esi, dword ptr [ebp + 8]
        add    ecx, 8
        shl    esi, 1
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp + 8], esi
        jl    L_5a23
        jmp    L_5f07
L_5a8b:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, esi
        mov    esi, dword ptr [g_007da684]
        mov    esi, dword ptr [esi]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, edi
        shl    edx, 4
        fmul    dword ptr [ebp - 4]
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x90]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_5aff
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_5b05
L_5aff:
        fld    dword ptr [g_007b220c]
L_5b05:
        mov    ecx, dword ptr [ebp - 0x90]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + eax*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        and    edx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x1d4], edx
        xor    edx, edx
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1d0], edx
        fild    qword ptr [ebp - 0x1d4]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x14c], esi
        fmul    dword ptr [g_0076de18]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        and    esi, 0xff
        fstp    dword ptr [ebp - 0xfc]
        shr    ecx, 8
        fild    qword ptr [ebp - 0x14c]
        mov    dword ptr [ebp - 0x1c8], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1cc], esi
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x15c], ecx
        mov    dword ptr [ebp - 0x158], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x100]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1cc]
        mov    dword ptr [ebp - 0x13c], ecx
        mov    dword ptr [ebp - 0x138], edx
        shr    eax, 8
        fmul    dword ptr [g_0076de18]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x104]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x15c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0xf8]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x13c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076de18]
        push    edx
        lea    eax, [ebp - 0x114]
        push    eax
        fstp    dword ptr [ebp - 0x10c]
        lea    ecx, [ebp - 0x104]
        fild    qword ptr [ebp - 0x16c]
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        mov    dword ptr [ebp - 0xe4], 0xbf800000
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        push    ecx
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [ebp - 0x108]
        lea    ecx, [ebp - 0xe4]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076de14]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xd4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0xd4]
        mov    eax, dword ptr [ebp - 8]
        mov    ebx, dword ptr [g_007da680]
        mov    dword ptr [ecx + edi*4], edx
        mov    edx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ecx + 0x1c]
        shl    edx, 3
        mov    dword ptr [ebp + 8], edx
        shl    eax, 3
        fld    dword ptr [ecx + eax]
        lea    esi, [edi*8]
        mov    edx, esi
        add    edx, dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fsub    dword ptr [ebx + ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + ecx]
        lea    ebx, [ebx + ecx + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + eax + 4]
        mov    ecx, dword ptr [g_007b9640]
        fsub    dword ptr [ebx]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [g_007b9638]
        fld    dword ptr [ecx + eax]
        mov    edx, dword ptr [edx]
        fsub    dword ptr [ebx + ecx]
        add    edx, esi
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + ecx]
        lea    ebx, [ebx + ecx + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + eax + 4]
        mov    ecx, dword ptr [g_007b963c]
        fsub    dword ptr [ebx]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [g_007b9634]
        mov    edx, dword ptr [edx]
        fld    dword ptr [ecx + eax]
        add    edx, esi
        mov    esi, dword ptr [ebp + 8]
        fsub    dword ptr [esi + ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + ecx]
        lea    esi, [esi + ecx + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + eax + 4]
        xor    eax, eax
        fsub    dword ptr [esi]
        mov    eax, dword ptr [ebp - 0xc]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [edx + 4]
        jbe    L_5f07
        and    eax, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_5ea7:
        mov    edx, dword ptr [ebp + 8]
        test    eax, edx
        je    L_5ef4
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 0x18]
        mov    al, byte ptr [edx + eax]
        mov    ebx, dword ptr [ebp - 8]
        mov    byte ptr [ebp - 0x80], al
        mov    esi, dword ptr [ebp - 0x80]
        xor    eax, eax
        mov    al, byte ptr [edx + ebx]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x64], esi
        sub    eax, esi
        mov    dword ptr [ebp - 0x20], eax
        fild    dword ptr [ebp - 0x20]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    dl, byte ptr [ebp - 0x20]
        mov    byte ptr [eax + edi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_5ef4:
        mov    esi, dword ptr [ebp + 8]
        add    ecx, 8
        shl    esi, 1
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp + 8], esi
        jl    L_5ea7
L_5f07:
        inc    dword ptr [ebp - 0x1c]
L_5f0a:
        mov    ecx, dword ptr [ebp - 0xbc]
        mov    edi, dword ptr [ebp - 0x74]
        cmp    ecx, edi
        jl    L_52d6
        mov    eax, dword ptr [ebp - 0x1c]
L_5f1e:
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x70]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_6dda
L_5f32:
        mov    eax, dword ptr [g_007da66c]
        mov    ecx, dword ptr [eax + 0x38]
        mov    edi, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x50], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        mov    dword ptr [ebp - 0x5c], edi
        mov    byte ptr [ebp - 0xcc], cl
        jbe    L_5fac
        mov    esi, ecx
        and    esi, 0xff
        add    eax, 0x50
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x20], 1
        lea    esi, [ebp - 0x4c]
        mov    dword ptr [ebp + 8], eax
        mov    eax, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp + 0x18], esi
        mov    dword ptr [ebp - 0x28], 2
L_5f87:
        test    dword ptr [ebp - 0x10], eax
        je    L_5f99
        mov    esi, dword ptr [ebp + 8]
        mov    edi, dword ptr [ebp + 0x18]
        mov    esi, dword ptr [esi]
        mov    dword ptr [edi], esi
        mov    edi, dword ptr [ebp - 0x5c]
L_5f99:
        add    dword ptr [ebp + 8], 8
        add    dword ptr [ebp + 0x18], 4
        mov    esi, dword ptr [ebp - 0x28]
        shl    eax, 1
        dec    esi
        mov    dword ptr [ebp - 0x28], esi
        jne    L_5f87
L_5fac:
        mov    eax, edx
        xor    esi, esi
        add    edx, 3
        cmp    dword ptr [ebp - 0x14], edx
        mov    byte ptr [ebp + 0x1b], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x28], esi
        jge    L_61b2
        mov    edx, dword ptr [g_007da68c]
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    edx, dword ptr [edx]
        mov    ecx, dword ptr [ecx + 0x1c]
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [g_007b9640]
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007b963c]
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007da688]
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ebp - 0x34], ecx
        jmp    L_600f
L_6009:
        mov    ebx, dword ptr [ebp - 0x74]
        mov    edi, dword ptr [ebp - 0x5c]
L_600f:
        xor    edx, edx
        mov    dl, byte ptr [ebx + eax]
        mov    ebx, dword ptr [ebp - 0x20]
        and    esi, 0xffff
        mov    eax, esi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1a8], 0
        mov    dword ptr [ebp - 0x188], 0
        mov    ecx, edx
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [edi + eax], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [edi + eax + 4], ebx
        mov    ebx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [edi + eax + 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        mov    ecx, dword ptr [ecx + edx*4]
        mov    dword ptr [edi + eax + 8], ebx
        mov    edi, ecx
        shr    ecx, 8
        and    edi, 0xff
        mov    ebx, ecx
        mov    dword ptr [ebp - 0x1ac], edi
        fild    qword ptr [ebp - 0x1ac]
        mov    edi, dword ptr [ebp - 0x58]
        shr    ecx, 8
        and    ebx, 0xff
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x18c], ebx
        mov    ebx, ecx
        and    ebx, 0xff
        fstp    dword ptr [edi + eax + 8]
        shr    ecx, 8
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        and    ecx, 0xff
        fmul    dword ptr [g_0076de18]
        mov    dword ptr [ebp - 0x140], ebx
        mov    dword ptr [ebp - 0x154], ecx
        mov    ecx, dword ptr [ebp - 0x54]
        fstp    dword ptr [edi + eax + 4]
        mov    dword ptr [ebp - 0x150], ebx
        fild    qword ptr [ebp - 0x144]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [edi + eax]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076de18]
        fstp    dword ptr [edi + eax + 0xc]
        lea    eax, [esi + esi*2]
        lea    eax, [ecx + eax*8]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edi, dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [eax + 8], edi
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    edi, dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [eax + 0x10], edi
        mov    dword ptr [eax + 0x14], ecx
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [eax + edx*4]
        mov    eax, dword ptr [ebp - 0x50]
        mov    dword ptr [eax + esi*4], ecx
        mov    ecx, dword ptr [ebp - 0xcc]
        test    cl, cl
        jbe    L_6196
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x10], ecx
        lea    ebx, [ebp - 0x4c]
        mov    edi, 0x7da65c
        jmp    L_6157
L_6154:
        mov    ecx, dword ptr [ebp - 0x10]
L_6157:
        mov    eax, dword ptr [ebp - 0x18]
        test    ecx, eax
        je    L_617a
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [ecx]
        mov    al, byte ptr [eax + edx]
        mov    ecx, dword ptr [ebx]
        mov    byte ptr [ecx + esi], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_6172
        mov    byte ptr [ebp + 0xb], al
L_6172:
        cmp    al, byte ptr [ebp + 0x1b]
        jbe    L_617a
        mov    byte ptr [ebp + 0x1b], al
L_617a:
        mov    ecx, dword ptr [ebp - 0x18]
        add    edi, 8
        shl    ecx, 1
        add    ebx, 4
        cmp    edi, 0x7da66c
        mov    dword ptr [ebp - 0x18], ecx
        jl    L_6154
        mov    ecx, dword ptr [ebp - 0xcc]
L_6196:
        mov    eax, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x14]
        inc    eax
        inc    esi
        add    edx, 3
        cmp    eax, edx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x28], esi
        jl    L_6009
L_61b2:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0xb4], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xb0], edx
        mov    edx, dword ptr [eax + 0x10]
        xor    ebx, ebx
        mov    dword ptr [ebp - 0xac], edx
        mov    edx, dword ptr [eax + 0x18]
        xor    edi, edi
        test    cl, cl
        mov    word ptr [ebp - 0x44], si
        mov    dword ptr [ebp - 0x34], ebx
        mov    dword ptr [ebp - 0xa8], edx
        jbe    L_621f
        mov    edi, ecx
        and    edi, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0x10], edi
        lea    edx, [ebp - 0xa4]
        add    eax, 0x20
        mov    ecx, 2
L_6207:
        test    edi, esi
        je    L_6212
        mov    edi, dword ptr [eax]
        mov    dword ptr [edx], edi
        mov    edi, dword ptr [ebp - 0x10]
L_6212:
        add    eax, 8
        add    edx, 4
        shl    esi, 1
        dec    ecx
        jne    L_6207
        xor    edi, edi
L_621f:
        mov    esi, dword ptr [ebp - 0x44]
        mov    word ptr [ebp - 0x9c], di
        mov    dword ptr [ebp - 0x6c], 1
        mov    dword ptr [ebp - 0x20], 4
L_6237:
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp - 0x78], 0x7b2404
        mov    dword ptr [ebp - 0x64], 6
L_6248:
        mov    eax, dword ptr [g_007b961c]
        test    dword ptr [ebp - 0x6c], eax
        je    L_6b09
        mov    edx, esi
        and    edx, 0xffff
        mov    dword ptr [ebp - 8], edi
        mov    dword ptr [ebp - 0x28], edx
        jle    L_6a00
        mov    ecx, dword ptr [ebp - 0x50]
        mov    eax, dword ptr [ebp - 0x58]
        mov    esi, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0xb8], ecx
        lea    ecx, [eax + 0xc]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        add    esi, 0x14
        lea    edi, [ecx + 8]
        sub    eax, ecx
        mov    dword ptr [ebp - 0x74], edi
        mov    dword ptr [ebp - 0x38], eax
L_6290:
        mov    eax, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp - 0x6c]
        xor    ecx, ecx
        inc    eax
        cmp    eax, edx
        setge    cl
        mov    dword ptr [ebp - 0xbc], eax
        dec    ecx
        and    ecx, eax
        mov    edx, ecx
        mov    ecx, dword ptr [ebp - 0xb8]
        mov    ecx, dword ptr [ecx]
        test    ebx, ecx
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [g_007b9618], ecx
        jne    L_63fb
        mov    ebx, dword ptr [edi - 8]
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [edx + eax], ebx
        mov    ebx, dword ptr [edi - 4]
        mov    dword ptr [edx + eax + 4], ebx
        mov    ebx, dword ptr [edi]
        mov    dword ptr [edx + eax + 8], ebx
        mov    ebx, dword ptr [edi + 4]
        mov    dword ptr [edx + eax + 0xc], ebx
        mov    edx, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xa8]
        mov    dword ptr [ebx + ecx*4], edx
        mov    edx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [edx - 0xc]
        mov    edx, dword ptr [ebp - 0xb0]
        mov    dword ptr [edx + eax], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx - 8]
        mov    dword ptr [edx + eax + 4], ebx
        mov    ebx, dword ptr [ebp - 0x38]
        mov    ebx, dword ptr [ebx + edi]
        mov    dword ptr [edx + eax + 8], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx]
        mov    dword ptr [edx + eax + 0xc], ebx
        mov    edx, dword ptr [ebp - 0xac]
        lea    eax, [ecx + ecx*2]
        lea    eax, [edx + eax*8]
        mov    edx, dword ptr [esi - 0x14]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi - 0x10]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esi - 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi - 8]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [esi - 4]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax + 0x14], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_63b2
        and    eax, 0xff
        xor    edx, edx
        mov    dword ptr [ebp - 0x1c], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x2c], edx
L_637e:
        mov    ebx, dword ptr [ebp - 0x1c]
        test    eax, ebx
        je    L_639f
        mov    eax, dword ptr [ebp + edx - 0x4c]
        mov    ebx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp + edx - 0xa4]
        mov    al, byte ptr [eax + ebx]
        mov    byte ptr [edx + ecx], al
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x10]
L_639f:
        mov    ebx, dword ptr [ebp - 0x1c]
        add    edx, 4
        shl    ebx, 1
        cmp    edx, 8
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp - 0x1c], ebx
        jl    L_637e
L_63b2:
        mov    ebx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x6c]
        mov    eax, dword ptr [ecx + ebx*4]
        inc    word ptr [ebp - 0x9c]
        test    eax, edx
        je    L_69c8
        mov    eax, dword ptr [ebp - 0x78]
        shl    ebx, 4
        cmp    eax, 0x7b242c
        ja    L_649b
        mov    edx, dword ptr [ebp - 0x18]
        jmp    dword ptr [edx*4 + 0x4276a4]
        fld    dword ptr [edi + 4]
        mov    ecx, dword ptr [ebp - 0x5c]
        fsub    dword ptr [edi - 4]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx + 4]
        jmp    L_6457
L_63fb:
        mov    ecx, dword ptr [ebp - 0x50]
        test    dword ptr [ecx + edx*4], ebx
        jne    L_69c3
        mov    ebx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x78]
        shl    ebx, 4
        cmp    eax, 0x7b242c
        ja    L_6708
        mov    edx, dword ptr [ebp - 0x18]
        jmp    dword ptr [edx*4 + 0x4276bc]
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx + 4]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 4]
        jmp    L_66c4
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi - 4]
        fld    dword ptr [ebx + ecx + 4]
        jmp    L_6457
        fld    dword ptr [edi + 4]
        mov    ecx, dword ptr [ebp - 0x5c]
        fsub    dword ptr [edi - 8]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx]
L_6457:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_64b9
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_64c6
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi - 8]
        fld    dword ptr [ebx + ecx]
        jmp    L_6457
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi]
        fld    dword ptr [ebx + ecx + 8]
        jmp    L_6457
        fld    dword ptr [edi + 4]
        mov    ecx, dword ptr [ebp - 0x5c]
        fsub    dword ptr [edi]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx + 8]
        jmp    L_6457
L_649b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_64ad
        int 3    
L_64ad:
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_64c6
L_64b9:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_64c6:
        fld    dword ptr [ebx + ecx]
        mov    eax, dword ptr [ebp - 0x9c]
        fsub    dword ptr [edi - 8]
        mov    edx, dword ptr [ebp - 0xb4]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x1c], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    edx, eax
        fadd    dword ptr [edi - 8]
        fstp    dword ptr [edx]
        fld    dword ptr [ebx + ecx + 4]
        fsub    dword ptr [edi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi - 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ebx + ecx + 8]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ebx + ecx + 0xc]
        mov    ecx, dword ptr [ebp - 0x78]
        cmp    dword ptr [ecx + 4], 0
        fsub    dword ptr [edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [edx + 0xc]
        je    L_652f
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_6535
L_652f:
        fld    dword ptr [g_007b220c]
L_6535:
        mov    ecx, dword ptr [ecx]
        fstp    dword ptr [edx + ecx*4]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + ecx]
        mov    ecx, dword ptr [ebp + 8]
        fsub    dword ptr [ecx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx - 0xc]
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [ecx + eax]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + ecx + 4]
        mov    ecx, dword ptr [ebp + 8]
        fsub    dword ptr [ecx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx - 8]
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [ecx + eax + 4]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + ecx + 8]
        mov    ecx, dword ptr [ebp - 0x38]
        fsub    dword ptr [ecx + edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edi]
        mov    edi, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [ebp - 0x58]
        fstp    dword ptr [edi + eax + 8]
        fld    dword ptr [ebx + ecx + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        fsub    dword ptr [ecx]
        mov    ebx, dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x54]
        fstp    dword ptr [edi + eax + 0xc]
        mov    edi, dword ptr [ebp - 0xac]
        lea    eax, [ebx + ebx*2]
        fld    dword ptr [ecx + eax*8]
        lea    eax, [ecx + eax*8]
        fsub    dword ptr [esi - 0x14]
        mov    ecx, dword ptr [ebp - 0x1c]
        lea    ecx, [ecx + ecx*2]
        lea    ecx, [edi + ecx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 0x14]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + 4]
        fsub    dword ptr [esi - 0x10]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 0x10]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [eax + 8]
        fsub    dword ptr [esi - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [esi - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [eax + 0x14]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [ecx + 0x14]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_6919
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], ecx
        xor    eax, eax
L_663a:
        mov    edi, dword ptr [ebp - 0x2c]
        test    ecx, edi
        je    L_6693
        mov    edi, dword ptr [ebp + eax - 0x4c]
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [edi + ecx]
        mov    byte ptr [ebp - 0x88], cl
        mov    ecx, dword ptr [ebp - 0x88]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x68], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x24], ecx
        fild    dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp + eax - 0xa4]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x68]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [ecx + edi], bl
        mov    ebx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x10]
L_6693:
        mov    edi, dword ptr [ebp - 0x2c]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], edi
        jl    L_663a
        jmp    L_6919
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 4]
        fld    dword ptr [edi - 4]
        jmp    L_66c4
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi - 8]
L_66c4:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6726
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_6733
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx]
        fld    dword ptr [edi - 8]
        jmp    L_66c4
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 8]
        fld    dword ptr [edi]
        jmp    L_66c4
        mov    ecx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 0xc]
        fsub    dword ptr [ebx + ecx + 8]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [edi]
        jmp    L_66c4
L_6708:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_671a
        int 3    
L_671a:
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 4], 0
        jmp    L_6733
L_6726:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6733:
        fld    dword ptr [edi - 8]
        mov    eax, dword ptr [ebp - 0x9c]
        fsub    dword ptr [ebx + ecx]
        mov    edx, dword ptr [ebp - 0xb4]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x1c], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    edx, eax
        fadd    dword ptr [ebx + ecx]
        lea    ecx, [ebx + ecx + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [edi - 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x5c]
        lea    ecx, [ebx + ecx + 8]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [edi]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x5c]
        lea    ecx, [ebx + ecx + 0xc]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x78]
        cmp    dword ptr [ecx + 4], 0
        fstp    dword ptr [edx + 0xc]
        je    L_67a6
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_67ac
L_67a6:
        fld    dword ptr [g_007b220c]
L_67ac:
        mov    ecx, dword ptr [ecx]
        fstp    dword ptr [edx + ecx*4]
        mov    ecx, dword ptr [ebp + 8]
        fld    dword ptr [ecx - 0xc]
        mov    ecx, dword ptr [ebp - 0x58]
        fsub    dword ptr [ebx + ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + ecx]
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [ecx + eax]
        mov    ecx, dword ptr [ebp - 0x58]
        lea    ecx, [ebx + ecx + 4]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [ebp + 8]
        fld    dword ptr [ecx - 8]
        mov    ecx, dword ptr [ebp - 0x24]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [ecx + eax + 4]
        mov    ecx, dword ptr [ebp - 0x38]
        fld    dword ptr [ecx + edi]
        mov    ecx, dword ptr [ebp - 0x58]
        fsub    dword ptr [ebx + ecx + 8]
        mov    edi, dword ptr [ebp - 0xb0]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + ecx + 8]
        lea    ebx, [ebx + ecx + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        fstp    dword ptr [edi + eax + 8]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x54]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        fstp    dword ptr [edi + eax + 0xc]
        mov    eax, dword ptr [ebp + 0x18]
        fld    dword ptr [esi - 0x14]
        mov    edi, dword ptr [ebp - 0xac]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*8]
        lea    eax, [ecx + eax*8]
        mov    ecx, dword ptr [ebp - 0x1c]
        lea    ecx, [ecx + ecx*2]
        fmul    dword ptr [ebp - 4]
        lea    ecx, [edi + ecx*8]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [esi - 0x10]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [esi - 0xc]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esi - 8]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [eax + 0x10]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0x10]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [esi]
        fsub    dword ptr [eax + 0x14]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0x14]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 0x14]
        jbe    L_6919
        and    eax, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], eax
        xor    ecx, ecx
L_68b1:
        mov    edi, dword ptr [ebp - 0x2c]
        test    eax, edi
        je    L_6909
        mov    edi, dword ptr [ebp + ecx - 0x4c]
        mov    eax, dword ptr [ebp + 0x18]
        mov    al, byte ptr [edi + eax]
        mov    ebx, dword ptr [ebp - 8]
        mov    byte ptr [ebp - 0x98], al
        mov    eax, dword ptr [ebp - 0x98]
        and    eax, 0xff
        mov    dword ptr [ebp - 0x68], eax
        xor    eax, eax
        mov    al, byte ptr [edi + ebx]
        sub    eax, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x24], eax
        fild    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp + ecx - 0xa4]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x68]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    bl, byte ptr [ebp - 0x24]
        mov    byte ptr [eax + edi], bl
        mov    eax, dword ptr [ebp - 0x10]
L_6909:
        mov    ebx, dword ptr [ebp - 0x2c]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_68b1
L_6919:
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp + 0x18], 0
        mov    edi, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp + 0x18], edx
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0xa8]
        inc    word ptr [ebp - 0x9c]
        mov    ebx, dword ptr [ebp - 0x34]
        mov    edi, dword ptr [ebp - 0x74]
        mov    dword ptr [edx + eax*4], ecx
        mov    eax, dword ptr [ebp - 0xbc]
        jmp    L_69d1
L_69c3:
        mov    ebx, dword ptr [ebp - 0x34]
        jmp    L_69d1
L_69c8:
        mov    ebx, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0xbc]
L_69d1:
        mov    ecx, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [ebp - 0x28]
        add    ecx, 4
        mov    dword ptr [ebp - 0xb8], ecx
        mov    ecx, dword ptr [ebp + 8]
        add    edi, 0x10
        add    ecx, 0x10
        add    esi, 0x18
        cmp    eax, edx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x74], edi
        mov    dword ptr [ebp + 8], ecx
        jl    L_6290
L_6a00:
        mov    edx, dword ptr [g_007da66c]
        lea    ecx, [ebx + ebx*2]
        shl    ecx, 4
        lea    eax, [ecx + edx]
        mov    edx, dword ptr [eax + 8]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x5c], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x50], edx
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x54], ecx
        jbe    L_6a76
        mov    esi, edx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], esi
        lea    ecx, [ebp - 0x4c]
L_6a49:
        mov    edi, dword ptr [ebp + 8]
        test    esi, edi
        je    L_6a65
        mov    edi, dword ptr [g_007da66c]
        lea    esi, [ebx + ebx*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [edi + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp - 0x10]
L_6a65:
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        shl    edi, 1
        add    ecx, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edi
        jl    L_6a49
L_6a76:
        mov    cx, word ptr [ebp - 0x9c]
        xor    eax, eax
        test    ebx, ebx
        sete    al
        mov    word ptr [ebp - 0x44], cx
        mov    ebx, eax
        mov    eax, dword ptr [g_007da66c]
        lea    ecx, [ebx + ebx*2]
        shl    ecx, 4
        add    eax, ecx
        test    dl, dl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xb4], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xb0], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x34], ebx
        mov    dword ptr [ebp - 0xac], ecx
        mov    dword ptr [ebp - 0xa8], eax
        jbe    L_6afb
        xor    eax, eax
        and    edx, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    ecx, [ebp - 0xa4]
L_6ad7:
        test    edx, esi
        je    L_6af0
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ebx + ebx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x10]
L_6af0:
        inc    eax
        add    ecx, 4
        shl    esi, 1
        cmp    eax, 2
        jl    L_6ad7
L_6afb:
        mov    esi, dword ptr [ebp - 0x44]
        mov    word ptr [ebp - 0x9c], 0
        xor    edi, edi
L_6b09:
        mov    eax, dword ptr [ebp - 0x6c]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x78]
        shl    eax, 1
        mov    dword ptr [ebp - 0x6c], eax
        mov    eax, dword ptr [ebp - 0x64]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x78], ecx
        mov    dword ptr [ebp - 0x64], eax
        jne    L_6248
        mov    edx, esi
        xor    eax, eax
        and    edx, 0xffff
        jle    L_6b45
        mov    ecx, dword ptr [ebp - 0x50]
L_6b3d:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_6b3d
L_6b45:
        cmp    eax, edi
        mov    dword ptr [g_007b961c], eax
        je    L_6b67
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x20], ecx
        jne    L_6237
        cmp    eax, edi
        jne    L_6df5
L_6b67:
        mov    eax, esi
        and    eax, 0xffff
        mov    dword ptr [ebp - 8], edi
        mov    dword ptr [ebp - 0x28], eax
        jle    L_6dbe
        mov    eax, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x34], eax
        mov    eax, dword ptr [ebp - 0x3c]
        lea    ecx, [eax*4]
        lea    edx, [eax*8]
        shl    eax, 4
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebp - 0x54]
        add    ecx, 8
        lea    edi, [eax + 0x10]
        mov    dword ptr [ebp - 0x18], ecx
L_6ba9:
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    eax, dword ptr [ebp - 8]
        add    eax, ecx
        mov    ecx, dword ptr [g_007da684]
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x2c]
        add    eax, esi
        mov    esi, dword ptr [ecx - 8]
        mov    dword ptr [eax], esi
        mov    esi, dword ptr [ecx - 4]
        mov    dword ptr [eax + 4], esi
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], esi
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076de14]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x60], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x60]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x60], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x60]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x60], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x60]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x60], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x60]
        mov    esi, dword ptr [ebp - 0x38]
        mov    dword ptr [eax + esi], ecx
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edi - 0x10]
        mov    dword ptr [ecx + edx], eax
        mov    eax, dword ptr [edi - 0xc]
        mov    dword ptr [ecx + edx + 4], eax
        mov    ecx, dword ptr [g_007b9638]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [edi - 8]
        mov    dword ptr [eax + edx], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + edx + 4], ecx
        mov    eax, dword ptr [g_007b9634]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edi]
        mov    dword ptr [ecx + edx], eax
        mov    eax, dword ptr [edi + 4]
        mov    dword ptr [ecx + edx + 4], eax
        mov    ecx, dword ptr [ebp - 0xc]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_6d80
        and    eax, 0xff
        lea    esi, [ebp - 0x4c]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], esi
L_6d4c:
        test    dword ptr [ebp + 0x18], eax
        je    L_6d69
        mov    eax, dword ptr [ebp + 8]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + ebx]
        mov    esi, dword ptr [ecx]
        mov    esi, dword ptr [esi]
        mov    ebx, dword ptr [ebp - 0x24]
        mov    byte ptr [esi + ebx], al
        mov    eax, dword ptr [ebp - 0x10]
L_6d69:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp + 0x18]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_6d4c
L_6d80:
        mov    esi, dword ptr [ebp - 0x38]
        mov    ebx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, 0x10
        add    ebx, ecx
        add    esi, 4
        mov    dword ptr [ebp - 0x38], esi
        mov    esi, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0x2c], ebx
        mov    ebx, dword ptr [ebp - 0x34]
        add    esi, ecx
        add    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x28]
        inc    eax
        add    edx, 8
        add    edi, 0x18
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp - 0x34], ebx
        jl    L_6ba9
L_6dbe:
        mov    ecx, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x44]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x70]
        mov    word ptr [eax + ecx*2], dx
        mov    eax, dword ptr [ebp - 0x1c]
L_6dda:
        mov    edx, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x70]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x7c]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x70], ecx
        mov    dword ptr [ebp - 0x7c], eax
L_6df5:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x30]
        mov    byte ptr [ecx + edx], 0
L_6e03:
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x30], eax
        jl    L_51f7
        mov    edi, ecx
L_6e23:
        mov    eax, dword ptr [edi + 0x88]
        xor    esi, esi
        cmp    eax, esi
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp + 0x18], 0
        mov    dword ptr [ebp - 0x3c], 0
        je    L_6e6f
        jle    L_6e6f
        mov    edx, dword ptr [g_007da848]
        mov    eax, dword ptr [edx + eax*4 + 0x24]
        cmp    eax, esi
        je    L_6e6f
        mov    cl, byte ptr [eax + 0x24]
        test    cl, cl
        jne    L_6e7e
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, esi
        je    L_6e7e
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [ebp - 0x3c], edx
L_6e6f:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_6e84
        mov    eax, dword ptr [ecx + 0x40]
        jmp    L_6e95
L_6e7e:
        mov    byte ptr [ebp + 0xb], 0
        jmp    L_6e6f
L_6e84:
        mov    eax, dword ptr [ecx + 8]
        mov    ebx, dword ptr [ecx + 0x20]
        mov    ecx, dword ptr [ebp + 0x10]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        add    eax, ebx
L_6e95:
        test    dl, dl
        mov    dword ptr [edi + 0x70], eax
        mov    word ptr [edi + 0xa], si
        je    L_6ea5
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_6eae
L_6ea5:
        mov    eax, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [ecx + 0x28]
        lea    eax, [ecx + eax*2]
L_6eae:
        mov    dword ptr [edi + 0x50], eax
        mov    word ptr [edi + 0x54], si
        mov    ecx, dword ptr [edi + 0x18]
        xor    eax, eax
        cmp    ecx, esi
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x28], esi
        jle    L_70a9
L_6ecb:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_6ee1
        inc    dword ptr [ebp - 0x28]
        jmp    L_709d
L_6ee1:
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [g_007da5f4]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    ecx, eax
        sub    ecx, esi
        mov    word ptr [edx + eax*2], cx
        mov    eax, dword ptr [g_007b963c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007b9640]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebx + 0x6c]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x80], ecx
        mov    ecx, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [g_007da68c]
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x70]
        lea    esi, [esi + esi*2]
        shl    esi, 4
        add    esi, ecx
        mov    dword ptr [ebp - 0x60], eax
        mov    dword ptr [ebp - 0x98], edx
        mov    dword ptr [ebp - 0x8c], esi
        mov    ecx, dword ptr [ebp - 0x98]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x8c]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp - 0x60]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_6fa9
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ecx + eax*4]
        jmp    L_6fb2
L_6fa9:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x14]
L_6fb2:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x88]
        mov    edx, dword ptr [ecx + eax*8]
        mov    ecx, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x24], ecx
        mov    ecx, dword ptr [ebp - 0x80]
        mov    dword ptr [esi + 0x20], edx
        mov    edx, dword ptr [ecx + eax*8]
        mov    ecx, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x2c], ecx
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x28], edx
        je    L_700c
        mov    edx, dword ptr [g_007da65c]
        mov    edx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x70]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        lea    ecx, [ecx + ecx*2]
        shl    ecx, 4
        mov    byte ptr [ecx + esi + 0x17], dl
L_700c:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_7051
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x84]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x18]
        lea    eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        fld    dword ptr [ebp - 0x94]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebx + 0x70]
        shl    edx, 4
        fadd    dword ptr [edx + eax + 0x1c]
        lea    eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_7051:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_7090
        mov    edx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp + 0x18]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        fadd    dword ptr [ecx + edx + 0x20]
        lea    eax, [ecx + edx + 0x20]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x3c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x24]
        lea    eax, [eax + ecx + 0x24]
        fstp    dword ptr [eax]
L_7090:
        inc    word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebp - 0xc]
L_709d:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        jl    L_6ecb
L_70a9:
        mov    edx, dword ptr [edi + 0x58]
        xor    ecx, ecx
        xor    eax, eax
        test    edx, edx
        mov    dword ptr [ebp - 0x30], ecx
        jle    L_7144
L_70bb:
        mov    edx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ecx], 0
        je    L_7132
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2], dx
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax + 2]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2 + 2], dx
        mov    ecx, dword ptr [edi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        mov    esi, dword ptr [edi + 0x50]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax + 1]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 0x54]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [esi + ecx*2 + 4], dx
        add    word ptr [edi + 0x54], 3
        mov    ecx, dword ptr [ebp - 0x30]
L_7132:
        mov    edx, dword ptr [edi + 0x58]
        add    eax, 3
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x30], ecx
        jl    L_70bb
L_7144:
        mov    eax, dword ptr [ebp - 0x70]
        test    eax, eax
        jle    L_7631
        mov    ecx, dword ptr [ebp - 0x70]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x14], eax
        jle    L_7631
L_7162:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x30]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 8], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x60], eax
        dec    eax
        cmp    eax, 1
        jle    L_7614
        mov    eax, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0xc]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x28], edx
L_71a3:
        mov    eax, dword ptr [g_007b9634]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007b9638]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xc4], ecx
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xc8], eax
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xc0], edx
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x80], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [ebp - 0x14]
        lea    edx, [ecx + eax]
        lea    esi, [esi + esi*2]
        lea    eax, [ecx + eax + 1]
        mov    ecx, dword ptr [ebx + 0x70]
        shl    esi, 4
        add    esi, ecx
        mov    dword ptr [ebp - 0x8c], edx
        mov    dword ptr [ebp - 0x98], eax
        mov    dword ptr [ebp - 0x24], esi
        mov    ecx, dword ptr [ebp - 0x88]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x24]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x98]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x3c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x30]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x34]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x8c]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x38]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x6c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x60]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x64]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x68]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x80]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [edx + eax + 4]
        fstp    dword ptr [esi]
        mov    eax, dword ptr [edx + eax]
        fld    dword ptr [g_007da878]
        mov    edx, dword ptr [ebp - 0xc0]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x70], eax
        mov    eax, dword ptr [edx + ecx*8]
        mov    dword ptr [esi + 0x18], eax
        fadd    dword ptr [g_007da870]
        mov    eax, dword ptr [edx + ecx*8 + 4]
        mov    dword ptr [esi + 0x40], edi
        mov    dword ptr [esi + 0x1c], eax
        fstp    dword ptr [esi + 4]
        mov    eax, dword ptr [ebp - 0x38]
        fld    dword ptr [g_007da87c]
        mov    edi, dword ptr [eax + edx + 8]
        fmul    dword ptr [esi + 0x30]
        mov    dword ptr [esi + 0x48], edi
        mov    edi, dword ptr [eax + edx + 0xc]
        mov    dword ptr [esi + 0x4c], edi
        fadd    dword ptr [g_007da874]
        mov    edi, dword ptr [eax + edx]
        mov    edx, dword ptr [eax + edx + 4]
        mov    dword ptr [esi + 0x7c], edx
        fstp    dword ptr [esi + 0x30]
        mov    edx, dword ptr [ebp - 0xc8]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x78], edi
        fmul    dword ptr [esi + 0x34]
        mov    edi, dword ptr [edx + ecx*8]
        mov    dword ptr [esi + 0x20], edi
        mov    edi, dword ptr [edx + ecx*8 + 4]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x24], edi
        fstp    dword ptr [esi + 0x34]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x60]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x60]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x64]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x64]
        mov    edi, dword ptr [eax + edx + 8]
        mov    dword ptr [esi + 0x50], edi
        mov    edi, dword ptr [eax + edx + 0xc]
        mov    dword ptr [esi + 0x54], edi
        mov    edi, dword ptr [eax + edx]
        mov    edx, dword ptr [eax + edx + 4]
        mov    dword ptr [esi + 0x84], edx
        mov    edx, dword ptr [ebp - 0xc4]
        mov    dword ptr [esi + 0x80], edi
        mov    edi, dword ptr [edx + ecx*8]
        mov    ecx, dword ptr [edx + ecx*8 + 4]
        mov    dword ptr [esi + 0x2c], ecx
        mov    ecx, dword ptr [eax + edx + 8]
        mov    dword ptr [esi + 0x58], ecx
        mov    ecx, dword ptr [eax + edx + 0xc]
        mov    dword ptr [esi + 0x5c], ecx
        mov    ecx, dword ptr [eax + edx]
        mov    edx, dword ptr [eax + edx + 4]
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x28], edi
        mov    dword ptr [esi + 0x88], ecx
        mov    dword ptr [esi + 0x8c], edx
        je    L_7426
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edx + ecx]
        mov    esi, dword ptr [ebx + 0x70]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        mov    byte ptr [eax + esi + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    esi, dword ptr [ebp - 8]
        mov    edi, dword ptr [ebx + 0x70]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + ecx + 1]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        mov    byte ptr [eax + edi + 0x47], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    edi, dword ptr [ebx + 0x70]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        add    edx, esi
        mov    cl, byte ptr [edx + ecx]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        mov    byte ptr [eax + edi + 0x77], cl
        jmp    L_7429
L_7426:
        mov    esi, dword ptr [ebp - 8]
L_7429:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_74ee
        xor    eax, eax
        fld    dword ptr [ebp - 0x84]
        mov    ax, word ptr [ebx + 0xa]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebx + 0x70]
        shl    edx, 4
        fadd    dword ptr [edx + eax + 0x18]
        lea    eax, [edx + eax + 0x18]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x70]
        xor    eax, eax
        fld    dword ptr [ebp - 0x94]
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    eax, [ecx + edx + 0x1c]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x84]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x48]
        lea    eax, [eax + ecx + 0x48]
        fstp    dword ptr [eax]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        fld    dword ptr [ebp - 0x94]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebx + 0x70]
        shl    edx, 4
        fadd    dword ptr [edx + eax + 0x4c]
        lea    eax, [edx + eax + 0x4c]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x84]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        fadd    dword ptr [ecx + edx + 0x78]
        lea    eax, [ecx + edx + 0x78]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x94]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x7c]
        lea    eax, [eax + ecx + 0x7c]
        fstp    dword ptr [eax]
L_74ee:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_75ad
        xor    eax, eax
        fld    dword ptr [ebp + 0x18]
        mov    ax, word ptr [ebx + 0xa]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebx + 0x70]
        shl    edx, 4
        fadd    dword ptr [edx + eax + 0x20]
        lea    eax, [edx + eax + 0x20]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x70]
        xor    eax, eax
        fld    dword ptr [ebp - 0x3c]
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        fadd    dword ptr [ecx + edx + 0x24]
        lea    eax, [ecx + edx + 0x24]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp + 0x18]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x50]
        lea    eax, [eax + ecx + 0x50]
        fstp    dword ptr [eax]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        fld    dword ptr [ebp - 0x3c]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebx + 0x70]
        shl    edx, 4
        fadd    dword ptr [edx + eax + 0x54]
        lea    eax, [edx + eax + 0x54]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp + 0x18]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        fadd    dword ptr [ecx + edx + 0x80]
        lea    eax, [ecx + edx + 0x80]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x70]
        fld    dword ptr [ebp - 0x3c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*2]
        shl    eax, 4
        fadd    dword ptr [eax + ecx + 0x84]
        lea    eax, [eax + ecx + 0x84]
        fstp    dword ptr [eax]
L_75ad:
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        add    dword ptr [ebp - 0x28], 4
        mov    word ptr [eax + edx*2], cx
        mov    dx, word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        inc    dx
        mov    word ptr [ecx + eax*2 + 2], dx
        mov    dx, word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebx + 0x50]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        add    dx, 2
        mov    word ptr [ecx + eax*2 + 4], dx
        mov    edx, dword ptr [ebp - 0x38]
        add    edx, 8
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [ebp - 0x60]
        inc    esi
        lea    eax, [edx - 1]
        cmp    esi, eax
        mov    dword ptr [ebp - 8], esi
        jl    L_71a3
L_7614:
        mov    eax, dword ptr [ebp - 0x60]
        mov    esi, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x70]
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x30]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x30], eax
        jl    L_7162
L_7631:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_765a
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp + 0x10]
        mov    edi, dword ptr [eax]
        mov    esi, dword ptr [eax + 0xc]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    edi, edx
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        mov    dword ptr [eax], edi
        add    esi, edx
        mov    dword ptr [eax + 0xc], esi
        jmp    L_765d
L_765a:
        mov    ecx, dword ptr [ebp - 0xc]
L_765d:
        cmp    word ptr [ecx + 0xa], 0
        pop    edi
        setne    al
        pop    esi
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x7c]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        // jump-table data @ 0x00427674 (6 relocated pointers)
        __emit 0xB6
        __emit 0x54
        __emit 0x42
        __emit 0x00
        __emit 0xE5
        __emit 0x54
        __emit 0x42
        __emit 0x00
        __emit 0xED
        __emit 0x54
        __emit 0x42
        __emit 0x00
        __emit 0xF9
        __emit 0x54
        __emit 0x42
        __emit 0x00
        __emit 0xFF
        __emit 0x54
        __emit 0x42
        __emit 0x00
        __emit 0x07
        __emit 0x55
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x0042768C (6 relocated pointers)
        __emit 0x59
        __emit 0x55
        __emit 0x42
        __emit 0x00
        __emit 0x81
        __emit 0x55
        __emit 0x42
        __emit 0x00
        __emit 0x89
        __emit 0x55
        __emit 0x42
        __emit 0x00
        __emit 0x95
        __emit 0x55
        __emit 0x42
        __emit 0x00
        __emit 0x9B
        __emit 0x55
        __emit 0x42
        __emit 0x00
        __emit 0xA3
        __emit 0x55
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x004276A4 (6 relocated pointers)
        __emit 0xE8
        __emit 0x63
        __emit 0x42
        __emit 0x00
        __emit 0x3B
        __emit 0x64
        __emit 0x42
        __emit 0x00
        __emit 0x47
        __emit 0x64
        __emit 0x42
        __emit 0x00
        __emit 0x73
        __emit 0x64
        __emit 0x42
        __emit 0x00
        __emit 0x7E
        __emit 0x64
        __emit 0x42
        __emit 0x00
        __emit 0x89
        __emit 0x64
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x004276BC (14 relocated pointers)
        __emit 0x25
        __emit 0x64
        __emit 0x42
        __emit 0x00
        __emit 0xA8
        __emit 0x66
        __emit 0x42
        __emit 0x00
        __emit 0xB4
        __emit 0x66
        __emit 0x42
        __emit 0x00
        __emit 0xE0
        __emit 0x66
        __emit 0x42
        __emit 0x00
        __emit 0xEB
        __emit 0x66
        __emit 0x42
        __emit 0x00
        __emit 0xF6
        __emit 0x66
        __emit 0x42
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x55
        __emit 0x8B
        __emit 0xEC
        __emit 0x81
        __emit 0xEC
        __emit 0xF0
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x53
        __emit 0x8B
        __emit 0x5D
        __emit 0x08
        __emit 0x8B
        __emit 0x03
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x57
        __emit 0x8B
    }
}
