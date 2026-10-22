/*
 * FUN_00455da0 (extent 0x455da0-0x457bb0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b2210;
extern int    g_007b94a0;
extern int    g_007b98d4;
extern int    g_007b98d8;
extern int    g_007b98dc;
extern int    g_007d98fc;
extern int    g_007da5f4;
extern int    g_007da600;
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
extern char   g_007da86c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00455da0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc8
        mov    eax, dword ptr [ecx + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 4], ecx
        mov    dword ptr [ebp - 0x6c], 0
        jg    L_5dc6
        mov    byte ptr [ecx + 0x10], 0
        xor    eax, eax
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_5dc6:
        cmp    word ptr [ecx + 0x56], 0
        mov    eax, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x18], eax
        jne    L_5ddb
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_5ddb:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [g_007da688]
        mov    ecx, dword ptr [ebp - 4]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        push    edi
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x50], edi
        je    L_5e6f
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x2c], 0
        jle    L_5eaa
L_5e1a:
        cmp    byte ptr [ebx], 0
        je    L_5e4c
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x50]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    edi, dword ptr [ecx]
        add    edi, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x50]
L_5e4c:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x2c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x50], edi
        jl    L_5e1a
        jmp    L_5eaa
L_5e6f:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_5eaa
        mov    dword ptr [ebp + 0x14], eax
L_5e79:
        cmp    byte ptr [ebx], 0
        je    L_5e91
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_5e91:
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_5e79
L_5eaa:
        mov    ecx, dword ptr [ebp - 4]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xbc], 0
        mov    dword ptr [ebp - 8], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x70], 0
        mov    dword ptr [ebp - 0x5c], 0
        je    L_5f94
        test    eax, eax
        jle    L_5f94
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_5f94
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_5f1b
        mov    dword ptr [g_007da864], 1
        jmp    L_5f76
L_5f1b:
        cmp    eax, 0x80
        jl    L_5f2e
        mov    dword ptr [g_007da864], 2
        jmp    L_5f76
L_5f2e:
        cmp    eax, 0x40
        jl    L_5f3f
        mov    dword ptr [g_007da864], 4
        jmp    L_5f76
L_5f3f:
        cmp    eax, 0x20
        jl    L_5f50
        mov    dword ptr [g_007da864], 8
        jmp    L_5f76
L_5f50:
        cmp    eax, 0x10
        jl    L_5f61
        mov    dword ptr [g_007da864], 0x10
        jmp    L_5f76
L_5f61:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_5f76:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_5fa3
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_5fa3
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x70], edx
        mov    dword ptr [ebp - 0x5c], eax
L_5f94:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        je    L_5fa9
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [edx + 0x38]
        jmp    L_5fba
L_5fa3:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_5f94
L_5fa9:
        mov    ecx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
        mov    edx, ecx
L_5fba:
        mov    ecx, dword ptr [ebp - 4]
        mov    dword ptr [ecx + 0xa4], eax
        mov    eax, dword ptr [ecx + 0x68]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc0], 0
        mov    dword ptr [ebp - 0xb8], 0
        je    L_6016
        xor    esi, esi
        cmp    eax, esi
        jle    L_6018
        mov    edi, dword ptr [g_007da848]
        mov    eax, dword ptr [edi + eax*4 + 0x24]
        cmp    eax, esi
        je    L_6018
        cmp    byte ptr [eax + 0x24], 0
        jne    L_6018
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, esi
        je    L_6018
        mov    edi, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0xc0], edi
        mov    dword ptr [ebp - 0xb8], eax
        jmp    L_6018
L_6016:
        xor    esi, esi
L_6018:
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x40], eax
        cmp    dword ptr [ecx + 0x58], esi
        mov    dword ptr [ebp - 0x60], esi
        mov    dword ptr [ebp - 0x58], esi
        mov    dword ptr [ebp - 0x2c], esi
        mov    dword ptr [ebp - 0xc], esi
        jle    L_7117
L_6037:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_70ea
        mov    ecx, dword ptr [ebp - 4]
        mov    esi, dword ptr [ecx + 0x48]
        mov    eax, dword ptr [ebp - 0xc]
        xor    edx, edx
        mov    dl, byte ptr [eax + esi + 1]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + esi]
        mov    dword ptr [ebp - 0x24], esi
        mov    edi, edx
        xor    edx, edx
        mov    dl, byte ptr [eax + esi + 2]
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [g_007b98d8], ecx
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [eax + edx*4]
        mov    eax, dword ptr [eax + edi*4]
        mov    edi, eax
        and    edi, edx
        and    ecx, edi
        mov    edi, dword ptr [g_007b98d8]
        or    eax, edx
        or    edi, eax
        test    ecx, ecx
        mov    dword ptr [g_007b98dc], ecx
        mov    dword ptr [g_007b98d8], edi
        je    L_60b4
        mov    eax, dword ptr [ebp + 8]
        mov    byte ptr [eax], 0
        jmp    L_70ea
L_60b4:
        test    edi, edi
        jne    L_60de
        mov    eax, dword ptr [ebp - 0x6c]
        mov    ecx, dword ptr [g_007da600]
        mov    edx, dword ptr [ebp - 0x10]
        inc    eax
        mov    dword ptr [ebp - 0x6c], eax
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    byte ptr [eax + ebx], 1
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_70ea
L_60de:
        mov    eax, dword ptr [edi*4 + 0x7b2478]
        xor    edx, edx
        mov    ecx, 1
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x18], edx
        jne    L_664f
        mov    edi, dword ptr [ebp - 0xc]
        lea    ecx, [edi + 3]
        cmp    edi, ecx
        jge    L_663b
L_6105:
        mov    eax, dword ptr [ebp - 4]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edi + eax]
        inc    edi
        cmp    edi, ecx
        mov    dword ptr [ebp - 0x98], edi
        mov    esi, ebx
        jl    L_6120
        mov    edi, dword ptr [ebp - 0xc]
L_6120:
        mov    ebx, dword ptr [ebp - 0x40]
        xor    ecx, ecx
        mov    cl, byte ptr [edi + eax]
        mov    eax, dword ptr [ebp - 0x60]
        mov    edi, edx
        and    edi, 0xffff
        add    edi, eax
        mov    eax, dword ptr [ebx + esi*4]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    dword ptr [g_007b98d4], eax
        jne    L_6203
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    eax, esi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [g_007da684]
        mov    ecx, edi
        shl    ecx, 4
        add    ecx, dword ptr [ebx]
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [ebp - 4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ebx, dword ptr [eax + esi*8]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], ebx
        mov    dword ptr [ecx + edi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 4]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_61e6
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da660
L_61bd:
        test    dword ptr [ebp - 0x18], ecx
        je    L_61d4
        mov    ecx, dword ptr [eax - 4]
        mov    ecx, dword ptr [ecx]
        mov    ebx, dword ptr [eax]
        mov    cl, byte ptr [ecx + esi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_61d4:
        mov    ebx, dword ptr [ebp - 0x18]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_61bd
L_61e6:
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ecx + eax*4]
        inc    edx
        inc    edi
        test    ecx, ecx
        mov    dword ptr [ebp - 0x18], edx
        je    L_6627
        mov    eax, dword ptr [g_007b98d4]
        jmp    L_6212
L_6203:
        mov    ecx, dword ptr [ebx + ecx*4]
        test    ecx, ecx
        mov    byte ptr [ebp + 0xb], 0
        jne    L_6627
L_6212:
        or    eax, ecx
        mov    edx, 1
        mov    dword ptr [g_007b98d4], eax
        xor    ebx, ebx
L_6220:
        test    edx, eax
        jne    L_6232
        shl    edx, 1
        inc    ebx
        cmp    bx, 6
        jb    L_6220
        jmp    L_6390
L_6232:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_62e2
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [edx]
        mov    ecx, esi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_62c4
        jmp    dword ptr [ebx*4 + 0x457bb0]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_6271:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_637d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 8], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_638a
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_6271
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_6271
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_6271
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_6271
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_6271
L_62c4:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6329
        int 3    
        mov    dword ptr [ebp - 8], 0
        jmp    L_638a
L_62e2:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x20]
        mov    eax, esi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_6362
        jmp    dword ptr [ebx*4 + 0x457bc8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_6316:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_637d
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6329:
        mov    dword ptr [ebp - 8], 0
        jmp    L_638a
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_6316
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_6316
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_6316
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_6316
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_6316
L_6362:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6329
        int 3    
        mov    dword ptr [ebp - 8], 0
        jmp    L_638a
L_637d:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_638a:
        mov    dword ptr [ebp - 0xbc], ebx
L_6390:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_64e4
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x20]
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        mov    eax, esi
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        mov    ebx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ebx]
        fmul    dword ptr [ebp - 8]
        mov    edx, edi
        shl    edx, 4
        fadd    dword ptr [eax]
        add    edx, ebx
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xbc]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_6416
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_641c
L_6416:
        fld    dword ptr [g_007b220c]
L_641c:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ecx, dword ptr [ebp - 4]
        fstp    dword ptr [edx + eax*4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ebx, dword ptr [ebp - 0x20]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_007da680]
        fsub    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [edx]
        lea    ecx, [ecx + edi*8]
        lea    edx, [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 4]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_6620
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_6481:
        test    dword ptr [ebp + 8], ecx
        je    L_64cd
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        mov    cl, byte ptr [edx + esi]
        mov    byte ptr [ebp - 0xc8], cl
        mov    ecx, dword ptr [ebp - 0xc8]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x3c], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edx + ebx]
        sub    ecx, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x10], ecx
        fild    dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [edx]
        fmul    dword ptr [ebp - 8]
        fiadd    dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x10]
        mov    dl, byte ptr [ebp - 0x10]
        mov    byte ptr [ecx + edi], dl
        mov    ecx, dword ptr [ebp - 0x14]
L_64cd:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], edx
        jl    L_6481
        jmp    L_6620
L_64e4:
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, esi
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        mov    ebx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ebx]
        fmul    dword ptr [ebp - 8]
        mov    edx, edi
        shl    edx, 4
        fadd    dword ptr [eax]
        add    edx, ebx
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xbc]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_655f
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_6565
L_655f:
        fld    dword ptr [g_007b220c]
L_6565:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        mov    ecx, dword ptr [ebp - 4]
        fstp    dword ptr [edx + eax*4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x20]
        fsub    dword ptr [eax + edx*8]
        lea    ecx, [ecx + edi*8]
        lea    ebx, [eax + edx*8 + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [eax + edx*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + esi*8 + 4]
        xor    eax, eax
        fsub    dword ptr [ebx]
        mov    eax, dword ptr [ebp - 4]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebx]
        fstp    dword ptr [ecx + 4]
        jbe    L_6620
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_65c6:
        test    dword ptr [ebp + 8], ecx
        je    L_660e
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dl, byte ptr [ecx + edx]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + esi]
        mov    ecx, dword ptr [eax + 4]
        mov    byte ptr [ebp - 0x64], dl
        mov    edx, dword ptr [ebp - 0x64]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x30], edx
        sub    ebx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x10], ebx
        fild    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 8]
        fiadd    dword ptr [ebp - 0x30]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x10]
        mov    cl, byte ptr [ebp - 0x10]
        mov    byte ptr [edx + edi], cl
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x20]
L_660e:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_65c6
L_6620:
        mov    edx, dword ptr [ebp - 0x18]
        inc    edx
        mov    dword ptr [ebp - 0x18], edx
L_6627:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebp - 0x98]
        lea    ecx, [eax + 3]
        cmp    edi, ecx
        jl    L_6105
L_663b:
        mov    ecx, dword ptr [g_007da670]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    word ptr [eax + ecx*2], dx
        jmp    L_70bf
L_664f:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x8c], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x84], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [ebp - 4]
        mov    bl, byte ptr [edx + 0x13]
        test    bl, bl
        mov    byte ptr [ebp - 0x50], bl
        jbe    L_66b1
        mov    edi, ebx
        and    edi, 0xff
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x14], edi
        lea    ecx, [ebp - 0x7c]
        add    eax, 0x50
        mov    edx, 2
        jmp    L_6697
L_6694:
        mov    edi, dword ptr [ebp - 0x14]
L_6697:
        test    dword ptr [ebp + 8], edi
        je    L_66a0
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx], edi
L_66a0:
        mov    edi, dword ptr [ebp + 8]
        shl    edi, 1
        add    eax, 8
        add    ecx, 4
        dec    edx
        mov    dword ptr [ebp + 8], edi
        jne    L_6694
L_66b1:
        mov    eax, dword ptr [ebp - 0xc]
        lea    ecx, [eax + 3]
        cmp    eax, ecx
        mov    edx, eax
        mov    byte ptr [ebp - 0x35], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x28], edx
        mov    dword ptr [ebp - 0x44], 0
        jge    L_67ce
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 4]
        mov    edi, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0x10], ecx
        mov    ecx, dword ptr [g_007da688]
        mov    eax, dword ptr [ecx]
        mov    dword ptr [ebp - 0x3c], edi
        mov    dword ptr [ebp - 0x30], eax
L_66f1:
        mov    ebx, dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x10]
        mov    esi, ecx
        mov    eax, esi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [ebp - 0x44]
        and    edx, 0xffff
        mov    ecx, edx
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 0x84]
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [edi + esi*8]
        mov    ebx, dword ptr [ebp - 0x50]
        test    bl, bl
        mov    dword ptr [eax + edx*8], ecx
        mov    ecx, dword ptr [edi + esi*8 + 4]
        mov    dword ptr [eax + edx*8 + 4], ecx
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [eax + esi*4]
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [eax + edx*4], ecx
        jbe    L_67af
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x14], ebx
        lea    ecx, [ebp - 0x7c]
        mov    edi, 0x7da65c
        jmp    L_6772
L_676f:
        mov    ebx, dword ptr [ebp - 0x14]
L_6772:
        test    dword ptr [ebp - 0x18], ebx
        je    L_6793
        mov    eax, dword ptr [edi]
        mov    eax, dword ptr [eax]
        mov    al, byte ptr [eax + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [edx + ebx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_678b
        mov    byte ptr [ebp + 0xb], al
L_678b:
        cmp    al, byte ptr [ebp - 0x35]
        jbe    L_6793
        mov    byte ptr [ebp - 0x35], al
L_6793:
        mov    ebx, dword ptr [ebp - 0x18]
        add    edi, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    edi, 0x7da66c
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_676f
        mov    ebx, dword ptr [ebp - 0x50]
        mov    edi, dword ptr [ebp - 0x3c]
L_67af:
        mov    edx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [ebp - 0x24]
        inc    edx
        inc    eax
        mov    dword ptr [ebp - 0x44], eax
        lea    eax, [ecx + 3]
        cmp    edx, eax
        mov    dword ptr [ebp - 0x28], edx
        jl    L_66f1
L_67ce:
        mov    dx, word ptr [ebp - 0x44]
        mov    eax, dword ptr [g_007da66c]
        mov    word ptr [ebp - 0x74], dx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0xb4], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        xor    ecx, ecx
        test    bl, bl
        mov    dword ptr [ebp - 0x90], ecx
        mov    dword ptr [ebp - 0xac], edx
        mov    dword ptr [ebp - 0xa8], eax
        jbe    L_6838
        mov    eax, dword ptr [g_007da66c]
        and    ebx, 0xff
        mov    esi, 1
        mov    dword ptr [ebp - 0x14], ebx
        lea    edx, [ebp - 0xa4]
        add    eax, 0x20
        mov    edi, 2
L_6822:
        test    esi, ebx
        je    L_682d
        mov    ebx, dword ptr [eax]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [ebp - 0x14]
L_682d:
        add    eax, 8
        add    edx, 4
        shl    esi, 1
        dec    edi
        jne    L_6822
L_6838:
        mov    ebx, dword ptr [ebp - 0x74]
        mov    word ptr [ebp - 0x9c], 0
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [ebp - 0x10], 4
L_6852:
        mov    dword ptr [ebp - 0x18], 0
        mov    dword ptr [ebp + 8], 0x7b2404
        mov    dword ptr [ebp - 0x30], 6
L_6867:
        mov    edx, dword ptr [g_007b98d8]
        test    dword ptr [ebp - 0x44], edx
        je    L_6f38
        xor    edi, edi
        mov    edx, ebx
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0x3c], edx
        jle    L_6e3e
        mov    ebx, dword ptr [ebp - 0x84]
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    dword ptr [ebp - 0xc4], ebx
        mov    dword ptr [ebp - 0x94], eax
        lea    esi, [ecx + 8]
L_68aa:
        xor    ecx, ecx
        lea    eax, [edi + 1]
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x94]
        setge    cl
        mov    dword ptr [ebp - 0x98], eax
        dec    ecx
        and    ecx, eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x44]
        test    edx, ecx
        mov    dword ptr [g_007b98d4], ecx
        jne    L_69cd
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [esi - 8]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi - 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [eax + 0xc], edx
        mov    eax, dword ptr [ebp - 0x94]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xa8]
        mov    dword ptr [eax + ecx*4], edx
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [ebp - 0xac]
        mov    dword ptr [eax + ecx*8], edx
        mov    edx, dword ptr [ebx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 4]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_697f
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x34], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x24], eax
        jmp    L_6953
L_6950:
        mov    edx, dword ptr [ebp - 0x14]
L_6953:
        test    dword ptr [ebp - 0x34], edx
        je    L_696c
        mov    edx, dword ptr [ebp + eax - 0x7c]
        mov    eax, dword ptr [ebp + eax - 0xa4]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x24]
L_696c:
        mov    edx, dword ptr [ebp - 0x34]
        add    eax, 4
        shl    edx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x34], edx
        jl    L_6950
L_697f:
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x44]
        mov    edi, dword ptr [eax + ecx*4]
        inc    word ptr [ebp - 0x9c]
        test    edi, edx
        je    L_6fa5
        mov    eax, dword ptr [ebp - 0x8c]
        mov    edx, ecx
        shl    edx, 4
        lea    edi, [edx + eax]
        cmp    dword ptr [ebp + 8], 0x7b242c
        ja    L_6a5c
        mov    ecx, dword ptr [ebp - 0x18]
        jmp    dword ptr [ecx*4 + 0x457be0]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        jmp    L_6a25
L_69cd:
        mov    ecx, dword ptr [ebp - 0x80]
        mov    edi, dword ptr [ebp - 0x20]
        test    dword ptr [ecx + edi*4], edx
        jne    L_6e0d
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    eax, edi
        shl    eax, 4
        lea    edi, [eax + ecx]
        cmp    dword ptr [ebp + 8], 0x7b242c
        ja    L_6c07
        mov    edx, dword ptr [ebp - 0x18]
        jmp    dword ptr [edx*4 + 0x457bf8]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_6bd0
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + 4]
        jmp    L_6a25
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
L_6a25:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6a77
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6a38:
        mov    dword ptr [ebp - 8], 0
        jmp    L_6a84
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi]
        jmp    L_6a25
        fld    dword ptr [esi]
        fld    dword ptr [edi + 8]
        jmp    L_6a25
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        jmp    L_6a25
L_6a5c:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6a38
        int 3    
        mov    dword ptr [ebp - 8], 0
        jmp    L_6a84
L_6a77:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6a84:
        fld    dword ptr [edi]
        mov    ecx, dword ptr [ebp - 0x9c]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    edx, ecx
        fmul    dword ptr [ebp - 8]
        shl    edx, 4
        add    eax, edx
        fadd    dword ptr [esi - 8]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x24], ecx
        fstp    dword ptr [eax]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + 0xc]
        mov    edi, dword ptr [edx + 4]
        test    edi, edi
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_6aed
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_6af3
L_6aed:
        fld    dword ptr [g_007b220c]
L_6af3:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x84]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x20]
        fld    dword ptr [edi + edx*8]
        mov    edi, dword ptr [ebp - 0xac]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebx]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp - 0x84]
        fld    dword ptr [edi + edx*8 + 4]
        mov    edi, dword ptr [ebp - 0xac]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 4]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_6d65
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x34], 1
        mov    dword ptr [ebp - 0x14], edi
        xor    ecx, ecx
L_6b55:
        test    dword ptr [ebp - 0x34], edi
        je    L_6ba8
        mov    edi, dword ptr [ebp + ecx - 0x7c]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0x54], bl
        mov    ebx, dword ptr [ebp - 0x54]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x68], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [ebp - 0x24]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0xa4]
        mov    dword ptr [ebp - 0x4c], ebx
        fild    dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp - 8]
        fiadd    dword ptr [ebp - 0x68]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x4c]
        mov    bl, byte ptr [ebp - 0x4c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [ebp - 0x14]
L_6ba8:
        mov    ebx, dword ptr [ebp - 0x34]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x34], ebx
        jl    L_6b55
        jmp    L_6d65
        fld    dword ptr [edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_6bd0
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_6bd0:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6c22
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6be3:
        mov    dword ptr [ebp - 8], 0
        jmp    L_6c2f
        fld    dword ptr [edi]
        fld    dword ptr [esi - 8]
        jmp    L_6bd0
        fld    dword ptr [edi + 8]
        fld    dword ptr [esi]
        jmp    L_6bd0
        fld    dword ptr [edi + 0xc]
        fsub    dword ptr [edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_6bd0
L_6c07:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6be3
        int 3    
        mov    dword ptr [ebp - 8], 0
        jmp    L_6c2f
L_6c22:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6c2f:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x9c]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xb4]
        and    ecx, 0xffff
        mov    eax, ecx
        fmul    dword ptr [ebp - 8]
        shl    eax, 4
        add    eax, edx
        fadd    dword ptr [edi]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x24], ecx
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edi + 4]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edi + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edi + 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edi + 8]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edi + 0xc]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edi + 0xc]
        mov    edi, dword ptr [edx + 4]
        test    edi, edi
        fstp    dword ptr [eax + 0xc]
        je    L_6c98
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_6c9e
L_6c98:
        fld    dword ptr [g_007b220c]
L_6c9e:
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x84]
        fstp    dword ptr [eax + edx*4]
        fld    dword ptr [ebx]
        mov    edx, dword ptr [ebp - 0x20]
        fsub    dword ptr [edi + edx*8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edi + edx*8]
        mov    edi, dword ptr [ebp - 0xac]
        fstp    dword ptr [edi + ecx*8]
        mov    edi, dword ptr [ebp - 0x84]
        fld    dword ptr [ebx + 4]
        lea    edi, [edi + edx*8 + 4]
        fsub    dword ptr [edi]
        xor    ebx, ebx
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0xac]
        fstp    dword ptr [edi + ecx*8 + 4]
        mov    edi, dword ptr [ebp - 4]
        mov    bl, byte ptr [edi + 0x13]
        test    bl, bl
        jbe    L_6d65
        and    ebx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x34], 1
        mov    dword ptr [ebp - 0x14], ebx
        mov    dword ptr [ebp - 0x4c], edi
        jmp    L_6d04
L_6d01:
        mov    ebx, dword ptr [ebp - 0x14]
L_6d04:
        test    dword ptr [ebp - 0x34], ebx
        je    L_6d52
        mov    edi, dword ptr [ebp + edi - 0x7c]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x28]
        mov    byte ptr [ebp - 0x48], dl
        mov    edx, dword ptr [ebp - 0x48]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x68], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + edi - 0xa4]
        fmul    dword ptr [ebp - 8]
        fiadd    dword ptr [ebp - 0x68]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + ecx], bl
        mov    edx, dword ptr [ebp - 0x20]
L_6d52:
        mov    ebx, dword ptr [ebp - 0x34]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x4c], edi
        mov    dword ptr [ebp - 0x34], ebx
        jl    L_6d01
L_6d65:
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x4c], 0
        mov    edi, dword ptr [ebp - 0x1c]
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
        mov    dword ptr [ebp - 0x4c], edx
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    edx, dword ptr [ebp - 0x24]
        inc    word ptr [ebp - 0x9c]
        mov    ebx, dword ptr [ebp - 0xc4]
        mov    dword ptr [ecx + edx*4], eax
        mov    eax, dword ptr [ebp - 0x98]
L_6e0d:
        mov    ecx, dword ptr [ebp - 0x90]
L_6e13:
        mov    edx, dword ptr [ebp - 0x94]
        add    edx, 4
        mov    edi, eax
        mov    dword ptr [ebp - 0x94], edx
        mov    edx, dword ptr [ebp - 0x3c]
        add    ebx, 8
        add    esi, 0x10
        cmp    edi, edx
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0xc4], ebx
        jl    L_68aa
L_6e3e:
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x8c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x84], edx
        xor    edx, edx
        mov    edx, dword ptr [ebp - 4]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x80], eax
        jbe    L_6eb1
        mov    edi, edx
        xor    eax, eax
        and    edi, 0xff
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0x14], edi
        lea    esi, [ebp - 0x7c]
L_6e86:
        test    dword ptr [ebp - 0x24], edi
        je    L_6ea0
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x14]
L_6ea0:
        mov    ebx, dword ptr [ebp - 0x24]
        inc    eax
        shl    ebx, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_6e86
L_6eb1:
        mov    ax, word ptr [ebp - 0x9c]
        mov    ebx, dword ptr [g_007da66c]
        mov    word ptr [ebp - 0x74], ax
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    ecx, eax
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    esi, dword ptr [eax + ebx]
        add    eax, ebx
        test    dl, dl
        mov    dword ptr [ebp - 0xb4], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x90], ecx
        mov    dword ptr [ebp - 0xac], esi
        mov    dword ptr [ebp - 0xa8], eax
        jbe    L_6f2c
        xor    eax, eax
        and    edx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp - 0x14], edx
        lea    esi, [ebp - 0xa4]
L_6f0e:
        test    edi, edx
        je    L_6f21
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [ebx + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [ebp - 0x14]
L_6f21:
        inc    eax
        add    esi, 4
        shl    edi, 1
        cmp    eax, 2
        jl    L_6f0e
L_6f2c:
        mov    ebx, dword ptr [ebp - 0x74]
        mov    word ptr [ebp - 0x9c], 0
L_6f38:
        mov    edi, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0x30]
        shl    edi, 1
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x44], edi
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x30], eax
        jne    L_6867
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_6f74
        mov    edx, dword ptr [ebp - 0x80]
L_6f6c:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_6f6c
L_6f74:
        test    eax, eax
        mov    dword ptr [g_007b98d8], eax
        je    L_6fb6
        mov    edx, dword ptr [ebp - 0x10]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x10], edx
        jne    L_6852
        test    eax, eax
        je    L_6fb6
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    byte ptr [ecx + edx], 0
        jmp    L_70ea
L_6fa5:
        mov    ecx, dword ptr [ebp - 0x90]
        mov    eax, dword ptr [ebp - 0x98]
        jmp    L_6e13
L_6fb6:
        xor    edi, edi
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0x3c], eax
        jle    L_70ab
        mov    eax, dword ptr [ebp - 4]
        mov    cl, byte ptr [eax + 0x13]
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [ebp - 0x8c]
        mov    edx, dword ptr [ebp - 0x84]
        mov    ebx, dword ptr [g_007da684]
        mov    byte ptr [ebp - 0x50], cl
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x60]
        lea    ecx, [ecx + eax*8]
        shl    eax, 4
        add    esi, 8
        add    eax, dword ptr [ebx]
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x10], ecx
L_7001:
        mov    ebx, dword ptr [ebp - 0x60]
        add    ebx, edi
        mov    dword ptr [ebp - 0x1c], ebx
        mov    ebx, dword ptr [esi - 8]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [esi - 4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [esi]
        mov    dword ptr [eax + 8], ebx
        mov    ebx, dword ptr [esi + 4]
        mov    dword ptr [eax + 0xc], ebx
        mov    ebx, dword ptr [edx]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [edx + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x50]
        test    bl, bl
        jbe    L_7087
        mov    edx, ebx
        and    edx, 0xff
        lea    ebx, [ebp - 0x7c]
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], ebx
L_704d:
        test    dword ptr [ebp - 0x24], edx
        je    L_706a
        mov    edx, dword ptr [ebp + 8]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + edi]
        mov    ebx, dword ptr [ecx]
        mov    edi, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + edi], dl
        mov    edx, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebp - 0x28]
L_706a:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp - 0x24]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_704d
        mov    edx, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp - 0x10]
L_7087:
        mov    ebx, dword ptr [ebp - 0x3c]
        inc    edi
        add    ecx, 8
        add    edx, 8
        add    eax, 0x10
        add    esi, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 0x30], edx
        jl    L_7001
        mov    ebx, dword ptr [ebp - 0x74]
L_70ab:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x58]
        mov    si, word ptr [ebp - 0x74]
        mov    edx, ebx
        mov    word ptr [ecx + eax*2], si
L_70bf:
        mov    esi, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    eax, dword ptr [ebp - 0x6c]
        and    edx, 0xffff
        add    esi, edx
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x6c], eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x60], esi
        mov    byte ptr [edx + eax], 0
L_70ea:
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_6037
        mov    edx, dword ptr [ebp + 0x10]
        mov    bl, byte ptr [ebp + 0x1c]
L_710e:
        test    bl, bl
        je    L_711c
        mov    eax, dword ptr [edx + 0x30]
        jmp    L_7126
L_7117:
        mov    ecx, dword ptr [ebp - 4]
        jmp    L_710e
L_711c:
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [edx + 0x10]
        shl    eax, 5
        add    eax, esi
L_7126:
        test    bl, bl
        mov    dword ptr [ecx + 0x44], eax
        mov    word ptr [ecx + 0xa], 0
        je    L_7138
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_7141
L_7138:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_7141:
        mov    eax, dword ptr [ebp - 4]
        xor    edx, edx
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], dx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0xc], ebx
        mov    dword ptr [ebp + 8], edx
        jle    L_7387
L_7163:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_7179
        inc    dword ptr [ebp + 8]
        jmp    L_7379
L_7179:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_007da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_007da86c], 2
        jle    L_727e
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_727e
        cmp    dword ptr [g_007b2210], 1
        jne    L_727e
        mov    ecx, dword ptr [ebp - 4]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [g_007da68c]
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x48], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0xa4]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x1c], esi
        mov    ecx, dword ptr [ebp - 0x48]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x1c]
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
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [g_007b94a0]
        mov    dword ptr [esi + 0x10], ecx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    edx, dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [ebp - 4]
        mov    dword ptr [esi + 0x20], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x24], eax
        test    byte ptr [ecx + 0x13], 1
        je    L_732e
        mov    edx, dword ptr [g_007da65c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 4]
        mov    cl, byte ptr [ecx + ebx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
        jmp    L_732e
L_727e:
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [g_007da68c]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, edx
        mov    dword ptr [ebp - 0x1c], esi
        mov    ecx, dword ptr [ebp - 0x48]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x1c]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x54]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 4]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x1c], edx
        je    L_732e
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    dl, byte ptr [edx + ebx]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    ecx, 5
        mov    byte ptr [ecx + eax + 0x17], dl
L_732e:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_736c
        mov    eax, dword ptr [ebp - 4]
        fld    dword ptr [ebp - 0x70]
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    ecx, [ecx + edx + 0x18]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0x5c]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    ecx, [ecx + edx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_736f
L_736c:
        mov    eax, dword ptr [ebp - 4]
L_736f:
        inc    word ptr [eax + 0xa]
        mov    eax, dword ptr [ebp - 4]
        mov    ecx, dword ptr [ebp - 0x28]
L_7379:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0xc], ebx
        jl    L_7163
        xor    edx, edx
L_7387:
        mov    esi, dword ptr [eax + 0x58]
        xor    ecx, ecx
        cmp    esi, edx
        mov    dword ptr [ebp - 0x2c], edx
        jle    L_7422
L_7397:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_740e
        mov    edx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 2]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2 + 2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 1]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        mov    word ptr [esi + edx*2 + 4], di
        add    word ptr [eax + 0x54], 3
        mov    edx, dword ptr [ebp - 0x2c]
L_740e:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x2c], edx
        jl    L_7397
        xor    edx, edx
L_7422:
        mov    eax, dword ptr [ebp - 0x58]
        cmp    eax, edx
        jle    L_797f
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp - 0xc], edx
L_7433:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0x28], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x30], eax
        dec    eax
        cmp    eax, 1
        jle    L_7962
        mov    eax, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 4]
        inc    eax
        mov    dword ptr [ebp + 8], eax
L_7464:
        test    byte ptr [g_007da86c], 2
        jle    L_7698
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_7698
        cmp    dword ptr [g_007b2210], 1
        jne    L_7698
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da684]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc]
        inc    eax
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [ebp - 0x28]
        add    ecx, eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x1c], edx
        mov    dword ptr [ebp - 0x10], ecx
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ebx + 0xa4]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x54]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x10]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x34]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x28]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x2c]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x1c]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x5c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x50]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x54]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x58]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [eax + ecx*8]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        lea    ecx, [ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [ecx + eax]
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ebp - 0x10]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [eax + edx*8]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x40], ecx
        fld    dword ptr [g_007da87c]
        mov    ecx, dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x44], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, dword ptr [eax + ecx*8]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x68], edi
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x6c], edi
        mov    edi, dword ptr [ebp - 0xc]
        fstp    dword ptr [esi + 0x28]
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [eax + edi*8]
        fmul    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x20], edi
        mov    edi, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [edi + eax]
        fadd    dword ptr [g_007da870]
        mov    dword ptr [esi + 0x24], edi
        mov    edi, dword ptr [eax + edx*8]
        mov    edx, dword ptr [eax + edx*8 + 4]
        fstp    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x4c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x50]
        mov    eax, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x74], eax
        mov    al, byte ptr [ebx + 0x13]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x48], edi
        mov    dword ptr [esi + 0x70], edx
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        test    al, 1
        je    L_785f
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0xa4]
        mov    esi, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [esi + edx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [ecx + eax*8 + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp + 8]
        mov    dl, byte ptr [ecx + edx + 1]
        mov    esi, dword ptr [ebx + 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [esi + eax*8 + 0x3f], dl
        mov    eax, dword ptr [g_007da660]
        mov    edx, dword ptr [eax]
        mov    esi, dword ptr [ebx + 0xa4]
        mov    cl, byte ptr [ecx + edx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    eax, [eax + eax*4]
        mov    byte ptr [esi + eax*8 + 0x67], cl
        jmp    L_785f
L_7698:
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x64], eax
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0x1c], eax
        lea    eax, [ecx + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    edx, eax
        add    esi, ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x54]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x10]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x2c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x1c]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x4c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0x64]
        fstp    dword ptr [esi]
        mov    edx, dword ptr [eax + ecx*8]
        fld    dword ptr [g_007da878]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x3c], ecx
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp + 8]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x38], edx
        fmul    dword ptr [esi + 0x20]
        mov    edx, dword ptr [eax + ecx*8]
        mov    eax, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x5c], eax
        fadd    dword ptr [g_007da874]
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
        mov    dword ptr [esi + 0x58], edx
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        je    L_785f
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x44]
        mov    esi, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [esi + edx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 8]
        mov    cl, byte ptr [eax + ecx + 1]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x37], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [eax + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x57], al
L_785f:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_7900
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x70]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x5c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x70]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x5c]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x70]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x5c]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_7900:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    esi, dword ptr [ebp + 8]
        mov    word ptr [edx + ecx*2], ax
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        inc    cx
        mov    word ptr [eax + edx*2 + 2], cx
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        add    cx, 2
        mov    word ptr [eax + edx*2 + 4], cx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x28]
        inc    eax
        inc    esi
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp + 8], esi
        jl    L_7464
L_7962:
        mov    esi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x58]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_7433
L_797f:
        cmp    dword ptr [g_007b2210], 1
        mov    edx, dword ptr [ebp - 4]
        jne    L_7b71
        test    byte ptr [g_007da86c], 2
        jle    L_7a68
        mov    eax, dword ptr [edx + 0x28]
        test    ah, 0x3c
        je    L_7a68
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_7a52
        mov    ecx, dword ptr [edx + 0xa4]
        add    ecx, 0x20
        mov    edi, esi
        mov    ebx, 0xffffff
L_79c6:
        fld    dword ptr [ecx - 8]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc0]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx - 4]
        fmul    dword ptr [edx + 0xa0]
        fadd    dword ptr [ebp - 0xb8]
        fadd    dword ptr [edx + 0x98]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_7a0a
        and    dword ptr [ecx - 0x10], ebx
        jmp    L_7a48
L_7a0a:
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x88]
        fnstsw  ax
        test    ah, 1
        je    L_7a48
        fld    dword ptr [ecx - 0x14]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x14]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, ebx
        and    dword ptr [ecx - 0x10], eax
L_7a48:
        add    ecx, 0x28
        dec    edi
        jne    L_79c6
L_7a52:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_7b93
        mov    eax, dword ptr [ebp + 0x10]
        add    dword ptr [eax + 4], esi
        jmp    L_7b8a
L_7a68:
        mov    edx, dword ptr [ebp - 4]
        mov    esi, dword ptr [edx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        mov    dword ptr [ebp + 0x14], 0
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_7b4f
        mov    eax, dword ptr [edx + 0x44]
        mov    ecx, esi
        shl    ecx, 5
        lea    ecx, [ecx + eax + 0xc]
        lea    edi, [eax + 0x1c]
        mov    ebx, esi
L_7aae:
        fld    dword ptr [edi - 4]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc0]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0xa0]
        fmul    dword ptr [edi]
        fadd    dword ptr [ebp - 0xb8]
        fadd    dword ptr [edx + 0x98]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_7af5
        and    dword ptr [ecx + 4], 0xffffff
        jmp    L_7b3b
L_7af5:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [ebp + 0x14]
        fcomp    dword ptr [edx + 0x88]
        inc    eax
        mov    dword ptr [ebp + 0x14], eax
        fnstsw  ax
        test    ah, 1
        je    L_7b3b
        fld    dword ptr [ecx]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, 0xffffff
        and    dword ptr [ecx + 4], eax
L_7b3b:
        add    edi, 0x20
        add    ecx, 0x20
        dec    ebx
        jne    L_7aae
        cmp    word ptr [ebp + 0x14], 0
        jne    L_7b55
L_7b4f:
        mov    byte ptr [edx + 0x64], 0
        jmp    L_7b59
L_7b55:
        mov    byte ptr [edx + 0x64], 1
L_7b59:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_7b93
        mov    eax, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + esi]
        add    edx, ecx
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ebp - 4]
        jmp    L_7b87
L_7b71:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_7b93
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        add    esi, ecx
        mov    dword ptr [eax], esi
L_7b87:
        mov    eax, dword ptr [ebp + 0x10]
L_7b8a:
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0x54]
        add    dword ptr [eax + 0xc], ecx
L_7b93:
        mov    eax, dword ptr [ebp - 4]
        cmp    word ptr [eax + 0xa], 0
        pop    edi
        setne    dl
        pop    esi
        mov    byte ptr [eax + 0x10], dl
        mov    eax, dword ptr [ebp - 0x6c]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00457BB0 (6 relocated pointers)
        __emit 0x65
        __emit 0x62
        __emit 0x45
        __emit 0x00
        __emit 0x94
        __emit 0x62
        __emit 0x45
        __emit 0x00
        __emit 0x9C
        __emit 0x62
        __emit 0x45
        __emit 0x00
        __emit 0xA8
        __emit 0x62
        __emit 0x45
        __emit 0x00
        __emit 0xAE
        __emit 0x62
        __emit 0x45
        __emit 0x00
        __emit 0xB6
        __emit 0x62
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00457BC8 (6 relocated pointers)
        __emit 0x0A
        __emit 0x63
        __emit 0x45
        __emit 0x00
        __emit 0x32
        __emit 0x63
        __emit 0x45
        __emit 0x00
        __emit 0x3A
        __emit 0x63
        __emit 0x45
        __emit 0x00
        __emit 0x46
        __emit 0x63
        __emit 0x45
        __emit 0x00
        __emit 0x4C
        __emit 0x63
        __emit 0x45
        __emit 0x00
        __emit 0x54
        __emit 0x63
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00457BE0 (6 relocated pointers)
        __emit 0xBF
        __emit 0x69
        __emit 0x45
        __emit 0x00
        __emit 0x12
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        __emit 0x1A
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        __emit 0x41
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        __emit 0x48
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        __emit 0x4F
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00457BF8 (14 relocated pointers)
        __emit 0x01
        __emit 0x6A
        __emit 0x45
        __emit 0x00
        __emit 0xBD
        __emit 0x6B
        __emit 0x45
        __emit 0x00
        __emit 0xC5
        __emit 0x6B
        __emit 0x45
        __emit 0x00
        __emit 0xEC
        __emit 0x6B
        __emit 0x45
        __emit 0x00
        __emit 0xF3
        __emit 0x6B
        __emit 0x45
        __emit 0x00
        __emit 0xFA
        __emit 0x6B
        __emit 0x45
        __emit 0x00
        __emit 0x33
        __emit 0xC0
        __emit 0xC3
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
        __emit 0x90
        __emit 0xA1
        __emit 0x90
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x68
        __emit 0x50
        __emit 0xE8
        __emit 0x22
        __emit 0xCD
        __emit 0x29
        __emit 0x00
        __emit 0x6A
        __emit 0x20
    }
}
