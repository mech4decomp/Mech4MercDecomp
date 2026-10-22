/*
 * FUN_00731c80 (extent 0x731c80-0x7323a8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b440;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076dd60;
extern int    g_00858940;
extern float  g_008816ac;
extern float  g_008816b0;
extern float  g_008816b4;
extern float  g_008816b8;
extern int    g_008816bc;
extern int    g_008816c0;
extern float  g_008816d8;
extern char   g_008816dd;
extern int    g_008816e0;
extern int    g_008a997c;
extern void __cdecl FUN_00731a50(void);
extern void __cdecl FUN_00731c20(void);
extern void __cdecl FUN_007325e0(void);
extern void __cdecl FUN_007326b0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00731c80(void)
{
    __asm {
        sub    esp, 0x44
        fld    dword ptr [g_008816b0]
        push    ebx
        fsub    dword ptr [g_008816b8]
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x54]
        fadd    dword ptr [g_0076dd60]
        push    edi
        lea    ecx, [esp + 0x14]
        fstp    dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x24]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [esp + 0x20], eax
        lea    eax, [esp + 0x13]
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        xor    edi, edi
        xor    ebx, ebx
        push    esi
        mov    byte ptr [esp + 0x23], bl
        mov    dword ptr [esp + 0x28], edi
        mov    dword ptr [esp + 0x24], edi
        call    FUN_00731a50
        mov    eax, dword ptr [g_008816e0]
        xor    ecx, ecx
        cmp    eax, 3
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x28], edi
        jne    L_1d46
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        push    esi
        call    FUN_007326b0
        fld    dword ptr [g_008816ac]
        fsub    dword ptr [g_008816b4]
        mov    edx, dword ptr [esp + 0x1c]
        shr    edx, 1
        mov    dword ptr [esp + 0x2c], edx
        fmul    dword ptr [g_0076d070]
        mov    dword ptr [esp + 0x30], edi
        fild    qword ptr [esp + 0x2c]
        fsubp st(1), st(0)
        fsub    dword ptr [g_0076d064]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x58]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        mov    dword ptr [esp + 0x1c], ecx
L_1d46:
        fild    dword ptr [g_008816bc]
        fcom    dword ptr [g_008816b4]
        fnstsw  ax
        test    ah, 1
        je    L_1d84
        fld    dword ptr [g_008816b4]
        mov    ebp, dword ptr [esp + 0x5c]
        fsub st(0), st(1)
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    eax, dword ptr [esp + 0x58]
        and    eax, 0x7fffff
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        sub    eax, 0x400000
        mov    dword ptr [ebp + 0x38], eax
        jmp    L_1d8a
L_1d84:
        mov    ebp, dword ptr [esp + 0x5c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_1d8a:
        cmp    dword ptr [esp + 0x18], edi
        je    L_217b
        mov    eax, dword ptr [esp + 0x14]
        jmp    L_1da0
L_1d9a:
        mov    ebp, dword ptr [esp + 0x5c]
        xor    edi, edi
L_1da0:
        mov    edx, dword ptr [g_008816e0]
        cmp    edx, 3
        ja    L_1e59
        jmp    dword ptr [edx*4 + 0x7323a8]
        mov    al, byte ptr [g_008816dd]
        test    al, al
        je    L_21bd
        fld    dword ptr [g_008816b8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x58]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        mov    dword ptr [g_008816c0], ecx
        jmp    L_1e59
        add    eax, esi
        push    eax
        call    FUN_007325e0
        mov    edi, eax
        mov    dword ptr [esp + 0x58], edi
        fild    dword ptr [esp + 0x58]
        fsubr    dword ptr [g_008816b0]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x58]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [g_008816c0], edx
        jmp    L_1e59
        add    eax, esi
        push    eax
        call    FUN_007325e0
        fld    dword ptr [g_008816b0]
        fsub    dword ptr [g_008816b8]
        mov    edi, eax
        mov    dword ptr [esp + 0x58], edi
        fisub    dword ptr [esp + 0x58]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [g_008816b8]
        call    FUN_0075db4a
        mov    dword ptr [g_008816c0], eax
L_1e59:
        mov    al, byte ptr [g_008816dd]
        test    al, al
        je    L_21b7
        fld    dword ptr [ebp + 0x30]
        fcomp    dword ptr [g_008816b4]
        fild    dword ptr [g_008816c0]
        fsub    dword ptr [g_008816b8]
        fnstsw  ax
        test    ah, 1
        fadd    dword ptr [g_0076dd60]
        jne    L_1ef9
        fstp    dword ptr [esp + 0x58]
        mov    edx, dword ptr [g_00858940]
        fild    dword ptr [g_008816bc]
        mov    eax, dword ptr [esp + 0x58]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        fsub    dword ptr [ebp + 0x30]
        mov    dword ptr [esp + 0x44], eax
        mov    dword ptr [esp + 0x4c], edx
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        fld    dword ptr [g_008816ac]
        mov    ecx, dword ptr [esp + 0x58]
        fsub    dword ptr [g_008816b4]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        mov    dword ptr [esp + 0x48], ecx
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    eax, dword ptr [esp + 0x58]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [esp + 0x50], eax
        jmp    L_1f6e
L_1ef9:
        fstp    dword ptr [esp + 0x58]
        mov    eax, dword ptr [g_00858940]
        fild    dword ptr [g_008816bc]
        mov    ecx, dword ptr [esp + 0x58]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        fsub    dword ptr [g_008816b4]
        mov    dword ptr [esp + 0x44], ecx
        mov    dword ptr [esp + 0x4c], eax
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        fld    dword ptr [g_008816ac]
        mov    edx, dword ptr [esp + 0x58]
        fsub    dword ptr [g_008816b4]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [esp + 0x48], edx
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x58]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        mov    dword ptr [esp + 0x50], ecx
L_1f6e:
        lea    edx, [esp + 0x13]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        push    esi
        mov    byte ptr [esp + 0x23], 0
        call    FUN_00731a50
        mov    edi, eax
        cmp    edi, dword ptr [esp + 0x20]
        jle    L_204a
L_1f94:
        xor    eax, eax
        mov    al, byte ptr [esi]
        mov    cl, byte ptr [eax + 0x896b88]
        test    cl, cl
        lea    ebp, [eax + 0x896b88]
        je    L_1fb4
        xor    edx, edx
        mov    dl, byte ptr [esi + 1]
        shl    eax, 8
        mov    ecx, edx
        add    eax, ecx
L_1fb4:
        push    eax
        lea    edx, [esp + 0x30]
        push    edx
        lea    eax, [esp + 0x2c]
        push    eax
        call    FUN_00731c20
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [g_008816c0]
        add    edx, ecx
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [esp + 0x38], 0
        fild    qword ptr [esp + 0x34]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_204a
        cmp    byte ptr [ebp], 0
        push    0x800
        je    L_2012
        mov    ecx, dword ptr [g_008a997c]
        lea    eax, [esp + 0x48]
        push    eax
        push    2
        push    esi
        push    ecx
        call    dword ptr [g_0076b440]
        add    esi, 2
        jmp    L_2027
L_2012:
        mov    eax, dword ptr [g_008a997c]
        lea    edx, [esp + 0x48]
        push    edx
        push    1
        push    esi
        push    eax
        call    dword ptr [g_0076b440]
        inc    esi
L_2027:
        mov    eax, dword ptr [esp + 0x24]
        mov    ebp, dword ptr [g_008816c0]
        mov    edx, dword ptr [esp + 0x44]
        add    ebp, eax
        add    edx, eax
        mov    dword ptr [g_008816c0], ebp
        mov    dword ptr [esp + 0x44], edx
        add    ebx, eax
        jmp    L_1f94
L_204a:
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        mov    eax, dword ptr [esp + 0x14]
        je    L_20d0
L_2056:
        mov    edx, dword ptr [esp + 0x20]
        lea    ebp, [edi + ebx]
        cmp    ebp, edx
        jg    L_20d0
        mov    dl, byte ptr [esp + 0x13]
        test    dl, dl
        jne    L_20d0
        push    0x800
        lea    edx, [esp + 0x48]
        push    edx
        push    ecx
        add    eax, esi
        push    eax
        mov    eax, dword ptr [g_008a997c]
        push    eax
        call    dword ptr [g_0076b440]
        mov    eax, dword ptr [g_008816c0]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esp + 0x44]
        add    eax, edi
        mov    dword ptr [g_008816c0], eax
        add    edx, ecx
        lea    eax, [esp + 0x13]
        push    eax
        add    esi, edx
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x20]
        add    ebx, edi
        push    edx
        mov    dword ptr [esp + 0x50], ebx
        push    esi
        mov    ebx, ebp
        call    FUN_00731a50
        mov    edi, eax
        test    edi, edi
        mov    eax, dword ptr [esp + 0x14]
        jne    L_20c8
        add    esi, eax
L_20c8:
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        jne    L_2056
L_20d0:
        test    ebx, ebx
        jne    L_20fd
        cmp    edi, dword ptr [esp + 0x20]
        jle    L_20fd
        add    eax, ecx
        add    esi, eax
        lea    eax, [esp + 0x13]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        push    esi
        mov    ebx, edi
        call    FUN_00731a50
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
L_20fd:
        mov    dl, byte ptr [esp + 0x13]
        test    dl, dl
        je    L_2106
        inc    esi
L_2106:
        cmp    ebx, dword ptr [esp + 0x20]
        jl    L_213c
        mov    dl, byte ptr [g_008816dd]
        test    dl, dl
        je    L_213c
        fld    dword ptr [g_008816b8]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x58]
        and    edx, 0x7fffff
        sub    edx, 0x400000
        mov    dword ptr [g_008816c0], edx
L_213c:
        fld    dword ptr [g_008816d8]
        mov    edi, dword ptr [g_008816bc]
        fadd    dword ptr [g_0076dd60]
        xor    ebx, ebx
        fstp    dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x58]
        and    edx, 0x7fffff
        test    ecx, ecx
        lea    edx, [edi + edx - 0x400000]
        mov    dword ptr [g_008816bc], edx
        jne    L_1d9a
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [esp + 0x5c]
L_217b:
        fld    dword ptr [g_008816d8]
        mov    edx, ecx
        fadd    dword ptr [g_0076dd60]
        pop    edi
        pop    esi
        fstp    dword ptr [esp + 0x54]
        mov    eax, dword ptr [esp + 0x54]
        and    eax, 0x7fffff
        sub    edx, eax
        mov    eax, dword ptr [g_008816bc]
        lea    edx, [eax + edx + 0x400000]
        add    dword ptr [ebp + 0x38], ecx
        pop    ebp
        mov    dword ptr [g_008816bc], edx
        pop    ebx
        add    esp, 0x44
        ret    8
L_21b7:
        mov    edx, dword ptr [g_008816e0]
L_21bd:
        fild    dword ptr [g_008816bc]
        xor    ecx, ecx
        mov    dword ptr [esp + 0x34], ecx
        fsub    dword ptr [ebp + 0x30]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [g_008816ac]
        mov    eax, dword ptr [esp + 0x5c]
        fsub    dword ptr [g_008816b4]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        mov    dword ptr [esp + 0x38], eax
        mov    eax, dword ptr [g_00858940]
        fadd    dword ptr [g_0076dd60]
        mov    dword ptr [esp + 0x3c], eax
        fstp    dword ptr [esp + 0x5c]
        mov    eax, dword ptr [esp + 0x5c]
        and    eax, 0x7fffff
        sub    eax, 0x400000
        cmp    edx, 3
        mov    dword ptr [esp + 0x40], eax
        ja    L_22b2
        jmp    dword ptr [edx*4 + 0x7323b8]
        fild    dword ptr [g_008816c0]
        fcom    dword ptr [g_008816b8]
        fnstsw  ax
        test    ah, 1
        je    L_22b0
        fld    dword ptr [g_008816b8]
        mov    edx, 0x400000
        fsub st(0), st(1)
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [esp + 0x5c]
        and    ecx, 0x7fffff
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        sub    edx, ecx
        mov    dword ptr [esp + 0x34], edx
        jmp    L_22b2
        mov    eax, dword ptr [ebp + 8]
        sub    eax, edi
        mov    dword ptr [esp + 0x34], eax
        jmp    L_22b2
        mov    edx, dword ptr [ebp + 8]
        shr    edx, 1
        mov    dword ptr [esp + 0x5c], edx
        mov    eax, edi
        cdq    
        sub    eax, edx
        mov    edx, dword ptr [esp + 0x5c]
        sar    eax, 1
        sub    edx, eax
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [ebp + 0x34], ecx
        jmp    L_22b2
        mov    edx, dword ptr [ebp + 8]
        shr    edx, 1
        mov    dword ptr [esp + 0x5c], edx
        mov    eax, edi
        cdq    
        sub    eax, edx
        mov    edx, dword ptr [esp + 0x5c]
        sar    eax, 1
        sub    edx, eax
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [ebp + 0x34], ecx
        jmp    L_22b2
L_22b0:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_22b2:
        lea    eax, [esp + 0x13]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        push    esi
        call    FUN_00731a50
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    byte ptr [esp + 0x13], 0
        je    L_2383
L_22da:
        mov    cl, byte ptr [esp + 0x13]
        test    cl, cl
        jne    L_234d
        mov    edx, dword ptr [esp + 0x14]
        push    0x800
        lea    ecx, [esp + 0x38]
        push    ecx
        push    eax
        mov    eax, dword ptr [g_008a997c]
        add    edx, esi
        push    edx
        push    eax
        call    dword ptr [g_0076b440]
        mov    edx, dword ptr [g_008816c0]
        mov    ecx, dword ptr [esp + 0x34]
        add    edx, edi
        add    ecx, edi
        mov    dword ptr [g_008816c0], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x34], ecx
        mov    ecx, dword ptr [esp + 0x18]
        add    edx, ecx
        lea    eax, [esp + 0x13]
        push    eax
        add    esi, edx
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        push    esi
        add    ebx, edi
        call    FUN_00731a50
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        jne    L_22da
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        je    L_2383
L_234d:
        fld    dword ptr [g_008816d8]
        mov    ecx, dword ptr [g_008816bc]
        fadd    dword ptr [g_0076dd60]
        mov    dword ptr [g_008816c0], 0
        fstp    dword ptr [esp + 0x5c]
        mov    eax, dword ptr [esp + 0x5c]
        and    eax, 0x7fffff
        lea    edx, [ecx + eax - 0x400000]
        mov    dword ptr [g_008816bc], edx
L_2383:
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [g_008816bc]
        mov    ecx, dword ptr [ebp + 0x38]
        pop    edi
        add    edx, eax
        add    ecx, eax
        pop    esi
        mov    dword ptr [ebp + 0x38], ecx
        pop    ebp
        mov    dword ptr [g_008816bc], edx
        pop    ebx
        add    esp, 0x44
        ret    8
        nop    
        // jump-table data @ 0x007323A8 (4 relocated pointers)
        __emit 0xB6
        __emit 0x1D
        __emit 0x73
        __emit 0x00
        __emit 0xEB
        __emit 0x1D
        __emit 0x73
        __emit 0x00
        __emit 0x25
        __emit 0x1E
        __emit 0x73
        __emit 0x00
        __emit 0x25
        __emit 0x1E
        __emit 0x73
        __emit 0x00
        // jump-table data @ 0x007323B8 (6 relocated pointers)
        __emit 0x29
        __emit 0x22
        __emit 0x73
        __emit 0x00
        __emit 0x67
        __emit 0x22
        __emit 0x73
        __emit 0x00
        __emit 0x72
        __emit 0x22
        __emit 0x73
        __emit 0x00
        __emit 0x91
        __emit 0x22
        __emit 0x73
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
