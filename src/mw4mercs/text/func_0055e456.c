/*
 * FUN_0055e456 (extent 0x55e456-0x55e73a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007ddd88;
extern float  g_007dddb4;
extern float  g_007dddb8;
extern int    g_007dddbc;
extern int    g_00858940;
extern int    g_00858944;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0055e420(void);
extern void __cdecl FUN_0055e740(void);
extern void __cdecl FUN_006bf2c0(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void FUN_0055e456(void)
{
    __asm {
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
        sub    esp, 0xc
        push    ebp
        push    esi
        push    edi
        push    0
        push    1
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0
        push    0x13
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
        mov    eax, dword ptr [g_007ddd88]
        mov    ecx, dword ptr [eax + 4]
        sub    ecx, dword ptr [eax]
        mov    eax, 0x66666667
        imul    ecx
        sar    edx, 3
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        shl    edx, 2
        shl    edx, 5
        push    edx
        call    FUN_004084d0
        mov    ecx, dword ptr [g_007ddd88]
        mov    esi, dword ptr [ecx]
        mov    ebp, eax
        mov    eax, dword ptr [ecx + 4]
        add    esp, 4
        xor    edi, edi
        cmp    esi, eax
        mov    dword ptr [esp + 0x10], 0x34000000
        je    L_e5b3
        push    ebx
L_e4e6:
        mov    ebx, dword ptr [esi + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, ebx
        and    eax, 0xff000000
        cmp    edx, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_e52f
        test    edi, edi
        je    L_e50d
        push    edi
        push    ebp
        call    FUN_00713ae0
        mov    eax, dword ptr [esp + 0x10]
        xor    edi, edi
L_e50d:
        cmp    eax, 0xff000000
        jne    L_e518
        push    1
        jmp    L_e51a
L_e518:
        push    3
L_e51a:
        push    0xd
        call    FUN_00713cc0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [g_007ddd88]
L_e52f:
        fild    dword ptr [esi]
        mov    edx, edi
        shl    edx, 5
        lea    eax, [edx + ebp]
        mov    edx, 0x3f800000
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x2c], edx
        mov    dword ptr [eax + 0x4c], edx
        mov    dword ptr [eax + 0x6c], edx
        fst    dword ptr [eax]
        fild    dword ptr [esi + 4]
        lea    edx, [edi + 1]
        shl    edx, 5
        add    esi, 0x14
        fst    dword ptr [esp + 0x18]
        fstp    dword ptr [eax + 4]
        mov    dword ptr [eax + 0x10], ebx
        fstp    dword ptr [edx + ebp]
        lea    edx, [edi + 2]
        fild    dword ptr [esi - 8]
        shl    edx, 5
        fst    dword ptr [eax + 0x24]
        mov    dword ptr [eax + 0x30], ebx
        fild    dword ptr [esi - 0xc]
        fst    dword ptr [esp + 0x10]
        fstp    dword ptr [edx + ebp]
        lea    edx, [edi + 3]
        shl    edx, 5
        fstp    dword ptr [eax + 0x44]
        mov    dword ptr [eax + 0x50], ebx
        fld    dword ptr [esp + 0x10]
        add    edi, 4
        fstp    dword ptr [edx + ebp]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0x64], edx
        mov    dword ptr [eax + 0x70], ebx
        cmp    esi, dword ptr [ecx + 4]
        jne    L_e4e6
        test    edi, edi
        pop    ebx
        je    L_e5b3
        push    edi
        push    ebp
        call    FUN_00713ae0
L_e5b3:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        inc    ecx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [esp + 0x1c], eax
        lea    eax, [esp + 0x1c]
        push    eax
        mov    dword ptr [esp + 0x1c], ecx
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        call    FUN_0055e740
        mov    edi, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [g_00858940]
        add    esp, 0x10
        test    edi, edi
        jge    L_e603
        xor    edi, edi
        jmp    L_e60c
L_e603:
        lea    eax, [ecx - 1]
        cmp    edi, eax
        jle    L_e610
        mov    edi, eax
L_e60c:
        mov    dword ptr [esp + 0x10], edi
L_e610:
        mov    ebx, dword ptr [esp + 0x18]
        test    ebx, ebx
        jge    L_e61c
        xor    ebx, ebx
        jmp    L_e625
L_e61c:
        lea    eax, [ecx - 1]
        cmp    ebx, eax
        jle    L_e629
        mov    ebx, eax
L_e625:
        mov    dword ptr [esp + 0x18], ebx
L_e629:
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        mov    ecx, dword ptr [g_00858944]
        jge    L_e63b
        xor    esi, esi
        jmp    L_e644
L_e63b:
        lea    eax, [ecx - 1]
        cmp    esi, eax
        jle    L_e648
        mov    esi, eax
L_e644:
        mov    dword ptr [esp + 0x14], esi
L_e648:
        mov    edx, dword ptr [esp + 0x1c]
        test    edx, edx
        jge    L_e654
        xor    edx, edx
        jmp    L_e65d
L_e654:
        lea    eax, [ecx - 1]
        cmp    edx, eax
        jle    L_e661
        mov    edx, eax
L_e65d:
        mov    dword ptr [esp + 0x1c], edx
L_e661:
        fld    dword ptr [g_007dddb8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_e6c4
        push    edi
        call    FUN_0055e420
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        mov    dword ptr [esp + 0x18], eax
        call    FUN_0055e420
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0055e420
        mov    dword ptr [esp + 0x24], eax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        call    FUN_0055e420
        add    esp, 0x10
        push    1
        push    0xb
        mov    dword ptr [esp + 0x24], eax
        call    FUN_00713cc0
        mov    edx, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x10]
L_e6c4:
        fld    dword ptr [g_007dddb4]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_e728
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, ecx
        push    ebp
        mov    ebp, dword ptr [g_007dddbc]
        shr    eax, 0x18
        sub    eax, ebp
        and    ecx, 0xffffff
        test    eax, eax
        pop    ebp
        jge    L_e709
        xor    eax, eax
        shl    eax, 0x18
        or    ecx, eax
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_e709:
        cmp    eax, 0xff
        jle    L_e715
        mov    eax, 0xff
L_e715:
        shl    eax, 0x18
        or    ecx, eax
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_e728:
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    ebx
        push    esi
        push    edi
        call    FUN_006bf2c0
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
