/*
 * FUN_004de990 (extent 0x4de990-0x4df1b0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076d3c8;
extern float  g_0076d598;
extern float  g_0076df00;
extern float  g_0076e22c;
extern float  g_00773948;
extern float  g_0077394c;
extern float  g_00773950;
extern float  g_00773954;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004dd8b0(void);
extern void __cdecl FUN_004df2a0(void);
extern void __cdecl FUN_00505e10(void);
extern void __cdecl FUN_00506140(void);
extern void __cdecl FUN_00723160(void);
extern void __cdecl FUN_00723180(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_00723bd0(void);

__declspec(naked) void FUN_004de990(void)
{
    __asm {
        fld    dword ptr [esp + 4]
        sub    esp, 8
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_e9b2
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d598]
        fstp    dword ptr [esp + 0xc]
L_e9b2:
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_e9d1
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076d598]
        fstp    dword ptr [esp + 0x10]
L_e9d1:
        push    0
        push    0
        push    0
        push    0
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        call    FUN_00723180
        fld    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d070]
        fld    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 1
        je    L_ea14
        fadd    dword ptr [esp + 0xc]
        fst    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ea42
        jmp    L_ea3a
L_ea14:
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ea42
        fld    dword ptr [esp + 4]
        fsub    dword ptr [esp + 0xc]
        fst    dword ptr [esp + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 1
        je    L_ea42
L_ea3a:
        mov    dword ptr [esp + 4], 0x3f000000
L_ea42:
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fcomp    dword ptr [g_0076d070]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fnstsw  ax
        test    ah, 1
        je    L_ea6e
        fadd    dword ptr [esp + 0x10]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ea9c
        jmp    L_ea94
L_ea6e:
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ea9c
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        fsub    dword ptr [esp + 0x10]
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 1
        je    L_ea9c
L_ea94:
        __emit 0xC7  // mov dword ptr [esp], 0x3f000000 (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x3F
L_ea9c:
        __emit 0x8B  // 139 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_00723160
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x34
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x2d]
        test    al, al
        push    edi
        jne    L_f1a7
        push    0x10
        mov    byte ptr [esp + 0x16], 0
        mov    byte ptr [esp + 0x17], 0
        mov    byte ptr [esp + 0x18], 0
        mov    byte ptr [esp + 0x19], 0
        mov    byte ptr [esp + 0x1a], 0
        mov    byte ptr [esp + 0x1b], 0
        mov    byte ptr [esp + 0x1c], 0
        mov    byte ptr [esp + 0x1d], 0
        mov    byte ptr [esp + 0x1e], 0
        mov    byte ptr [esp + 0x1f], 0
        mov    byte ptr [esp + 0x20], 0
        mov    byte ptr [esp + 0x21], 0
        mov    byte ptr [esp + 0x22], 0
        mov    byte ptr [esp + 0x23], 0
        mov    byte ptr [esp + 0x24], 0
        mov    byte ptr [esp + 0x25], 0
        mov    byte ptr [esp + 0x26], 0
        mov    byte ptr [esp + 0x27], 0
        xor    ebx, ebx
        call    FUN_00723b40
        test    eax, eax
        je    L_eb40
        mov    ebx, 1
L_eb40:
        push    0x11
        call    FUN_00723b40
        test    eax, eax
        je    L_eb4e
        or    ebx, 2
L_eb4e:
        push    0x12
        call    FUN_00723b40
        test    eax, eax
        je    L_eb5c
        or    ebx, 4
L_eb5c:
        mov    edi, dword ptr [esi + 0x34]
        test    edi, edi
        je    L_ece5
        mov    ebp, ebx
        mov    ecx, edi
        and    ebp, 1
        call    FUN_00506140
        test    al, al
        je    L_eb7a
        or    ebp, 1
L_eb7a:
        mov    edx, dword ptr [esi + 0x3c]
        mov    ecx, ebp
        mov    eax, 1
        shl    eax, cl
        mov    ecx, dword ptr [esi + 0x40]
        push    ecx
        mov    ecx, dword ptr [esi + 0x38]
        push    edx
        push    ecx
        push    eax
        mov    ecx, edi
        mov    dword ptr [esi + 0x3b70], eax
        call    FUN_00505e10
        mov    eax, dword ptr [edi + 0x24]
        test    eax, eax
        je    L_ebd0
        fld    dword ptr [edi + 4]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        je    L_ebbb
        mov    byte ptr [esp + 0x18], 1
        jmp    L_ebd0
L_ebbb:
        fld    dword ptr [edi + 4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ebd0
        mov    byte ptr [esp + 0x19], 1
L_ebd0:
        mov    eax, dword ptr [edi + 0x28]
        test    eax, eax
        je    L_ec03
        fld    dword ptr [edi + 8]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        je    L_ebee
        mov    byte ptr [esp + 0x1a], 1
        jmp    L_ec03
L_ebee:
        fld    dword ptr [edi + 8]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ec03
        mov    byte ptr [esp + 0x1b], 1
L_ec03:
        mov    eax, dword ptr [edi + 0x2c]
        test    eax, eax
        je    L_ec36
        fld    dword ptr [edi + 0xc]
        fcomp    dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 1
        je    L_ec21
        mov    byte ptr [esp + 0x1e], 1
        jmp    L_ec36
L_ec21:
        fld    dword ptr [edi + 0xc]
        fcomp    dword ptr [g_0076e22c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ec36
        mov    byte ptr [esp + 0x1f], 1
L_ec36:
        mov    eax, dword ptr [edi + 0x30]
        test    eax, eax
        je    L_ec69
        fld    dword ptr [edi + 0x10]
        fcomp    dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 1
        je    L_ec54
        mov    byte ptr [esp + 0x1c], 1
        jmp    L_ec69
L_ec54:
        fld    dword ptr [edi + 0x10]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ec69
        mov    byte ptr [esp + 0x1d], 1
L_ec69:
        cmp    dword ptr [edi + 0x20], 1
        jne    L_ece5
        mov    edx, dword ptr [edi + 0x18]
        mov    dword ptr [esp + 0x24], edx
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_ece5
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_00773954]
        fnstsw  ax
        test    ah, 0x41
        je    L_ece0
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_00773950]
        fnstsw  ax
        test    ah, 1
        jne    L_ece0
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0077394c]
        fnstsw  ax
        test    ah, 0x41
        je    L_ecc1
        mov    byte ptr [esp + 0x21], 1
        jmp    L_ece5
L_ecc1:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_00773948]
        fnstsw  ax
        test    ah, 1
        je    L_ecd9
        mov    byte ptr [esp + 0x23], 1
        jmp    L_ece5
L_ecd9:
        mov    byte ptr [esp + 0x20], 1
        jmp    L_ece5
L_ece0:
        mov    byte ptr [esp + 0x22], 1
L_ece5:
        mov    ecx, ebx
        and    ecx, 1
        mov    eax, 1
        shl    eax, cl
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x34]
        push    edx
        mov    dword ptr [esi + 0x3b70], eax
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        call    FUN_00723180
        mov    eax, dword ptr [esp + 0x3c]
        cmp    eax, -0x19
        jge    L_ed2a
        mov    byte ptr [esp + 0x14], 1
        jmp    L_ed34
L_ed2a:
        cmp    eax, 0x19
        jle    L_ed34
        mov    byte ptr [esp + 0x15], 1
L_ed34:
        mov    eax, dword ptr [esp + 0x40]
        cmp    eax, -0x19
        jge    L_ed44
        mov    byte ptr [esp + 0x16], 1
        jmp    L_ed4e
L_ed44:
        cmp    eax, 0x19
        jle    L_ed4e
        mov    byte ptr [esp + 0x17], 1
L_ed4e:
        mov    edx, dword ptr [esp + 0x34]
        push    1
        lea    eax, [esp + 0x38]
        lea    ecx, [esi + 0x44]
        push    eax
        mov    dword ptr [ecx + 0x18], edx
        call    FUN_004dd8b0
        mov    edx, dword ptr [esp + 0x38]
        push    1
        lea    eax, [esp + 0x3c]
        lea    ecx, [esi + 0x60]
        push    eax
        mov    dword ptr [ecx + 0x18], edx
        call    FUN_004dd8b0
        fild    dword ptr [esp + 0x3c]
        push    1
        lea    edx, [esp + 0x30]
        lea    ecx, [esi + 0x7c]
        fst    dword ptr [esp + 0x30]
        push    edx
        fstp    dword ptr [ecx + 0x18]
        call    FUN_004dd8b0
        fild    dword ptr [esp + 0x40]
        push    1
        lea    eax, [esp + 0x30]
        lea    ecx, [esi + 0x98]
        fst    dword ptr [esp + 0x30]
        push    eax
        fstp    dword ptr [ecx + 0x18]
        call    FUN_004dd8b0
        mov    eax, dword ptr [esp + 0x30]
        cmp    eax, 0x3e7
        jne    L_edc6
        mov    dword ptr [esp + 0x30], 0
        jmp    L_edd8
L_edc6:
        test    eax, eax
        jge    L_edd1
        mov    byte ptr [esp + 0x13], 1
        jmp    L_edd8
L_edd1:
        jle    L_edd8
        mov    byte ptr [esp + 0x12], 1
L_edd8:
        mov    edx, dword ptr [esi + 0xb4]
        lea    ecx, [esi + 0xb4]
        push    1
        lea    eax, [esp + 0x34]
        push    eax
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi + 0xd0]
        and    cl, 1
        neg    cl
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        sbb    ecx, ecx
        and    ecx, 2
        dec    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esi + 0xd0]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi + 0xec]
        and    cl, 2
        neg    cl
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        sbb    ecx, ecx
        and    ecx, 2
        dec    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esi + 0xec]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi + 0x108]
        and    cl, 4
        neg    cl
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        sbb    ecx, ecx
        and    ecx, 2
        dec    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esi + 0x108]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi + 0x124]
        and    cl, 8
        neg    cl
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        sbb    ecx, ecx
        and    ecx, 2
        dec    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esi + 0x124]
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi + 0x140]
        and    cl, 0x10
        neg    cl
        push    1
        lea    eax, [esp + 0x28]
        push    eax
        sbb    ecx, ecx
        and    ecx, 2
        dec    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esi + 0x140]
        call    dword ptr [edx + 0xc]
        mov    al, byte ptr [esi + 0x3b75]
        mov    edx, 1
        mov    ecx, ebx
        shl    edx, cl
        test    al, al
        mov    dword ptr [esi + 0x3b70], edx
        jne    L_f154
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x5c]
        test    eax, eax
        jne    L_f1a7
        mov    ebp, dword ptr [esi + 0x3b80]
        mov    bl, byte ptr [esp + 0x12]
L_ef03:
        test    ebp, ebp
        je    L_f11a
        mov    edi, dword ptr [ebp]
        test    edi, edi
        mov    ebp, dword ptr [ebp + 4]
        je    L_f11a
        mov    al, byte ptr [esi + 0x3b75]
        test    al, al
        jne    L_f11a
        mov    al, byte ptr [esi + 0x2c]
        test    al, al
        jne    L_f10e
        mov    ecx, edi
        sub    ecx, esi
        sub    ecx, 0x15c
        mov    eax, 0x92492493
        imul    ecx
        add    edx, ecx
        sar    edx, 4
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        lea    eax, [edx - 0x200]
        cmp    eax, 0x11
        mov    dword ptr [esp + 0x28], edx
        ja    L_f070
        jmp    dword ptr [eax*4 + 0x4df1b0]
        test    bl, bl
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x15]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x16]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x17]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x18]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x19]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1a]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1b]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1d]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1e]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x1f]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x20]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x21]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x22]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
        mov    al, byte ptr [esp + 0x23]
        test    al, al
        jne    L_f0d0
        jmp    L_f07e
L_f070:
        push    edx
        call    FUN_00723b40
        test    eax, eax
        mov    edx, dword ptr [esp + 0x28]
        jne    L_f0d0
L_f07e:
        mov    al, byte ptr [esi + 0x3b76]
        test    al, al
        je    L_f099
        cmp    edx, 0xd
        jne    L_f099
        mov    byte ptr [esi + 0x3b76], 0
        jmp    L_ef03
L_f099:
        mov    al, byte ptr [esi + 0x3b77]
        test    al, al
        je    L_f0b4
        cmp    edx, 0x1b
        jne    L_f0b4
        mov    byte ptr [esi + 0x3b77], 0
        jmp    L_ef03
L_f0b4:
        neg    edx
        push    0xffff
        lea    eax, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], edx
        mov    edx, dword ptr [edi]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0xc]
        jmp    L_ef03
L_f0d0:
        mov    al, byte ptr [esi + 0x3b76]
        test    al, al
        je    L_f0e3
        cmp    edx, 0xd
        je    L_ef03
L_f0e3:
        mov    al, byte ptr [esi + 0x3b77]
        test    al, al
        je    L_f0f6
        cmp    edx, 0x1b
        je    L_ef03
L_f0f6:
        mov    eax, dword ptr [esi + 0x3b70]
        mov    edx, dword ptr [edi]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, edi
        call    dword ptr [edx + 0xc]
        jmp    L_ef03
L_f10e:
        pop    edi
        mov    byte ptr [esi + 0x2c], 0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x34
        ret    
L_f11a:
        call    FUN_00723bd0
        and    eax, 0xff
        mov    dword ptr [esp + 0x40], eax
        je    L_f1a7
        mov    eax, dword ptr [esi + 0x3b70]
        mov    edx, dword ptr [esi + 0x3b54]
        push    eax
        lea    ecx, [esi + 0x3b54]
        lea    eax, [esp + 0x44]
        push    eax
        mov    byte ptr [esi + 0x3b74], 1
        call    dword ptr [edx + 0xc]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x34
        ret    
L_f154:
        lea    edi, [esi + 0x3b78]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_f1a0
        call    FUN_00723bd0
        mov    esi, eax
        test    esi, esi
        je    L_f1a7
L_f170:
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_f18d
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0xac]
L_f18d:
        call    FUN_00723bd0
        mov    esi, eax
        test    esi, esi
        jne    L_f170
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x34
        ret    
L_f1a0:
        mov    ecx, esi
        call    FUN_004df2a0
L_f1a7:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x34
        ret    
        nop    
        // jump-table data @ 0x004DF1B0 (0 relocated pointers)
    }
}
