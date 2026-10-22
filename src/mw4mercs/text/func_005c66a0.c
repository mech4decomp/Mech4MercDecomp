/*
 * FUN_005c66a0 (extent 0x5c66a0-0x5c6878) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f2460;
extern void __cdecl FUN_005c68b0(void);
extern void __cdecl FUN_005dd110(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_0063b190(void);
extern void __cdecl FUN_0064def0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c66a0(void)
{
    __asm {
        mov    eax, dword ptr [g_007f2460]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        mov    ecx, esi
        call    FUN_005dd110
        mov    ebp, dword ptr [esi + 0x170]
        cmp    ebp, edi
        je    L_677a
        mov    ecx, ebp
        call    FUN_005faef0
        mov    edx, dword ptr [eax + 4]
        sub    edx, dword ptr [eax]
        sar    edx, 2
        je    L_677a
        mov    ecx, edi
        call    FUN_005faef0
        mov    ecx, dword ptr [eax + 4]
        sub    ecx, dword ptr [eax]
        sar    ecx, 2
        je    L_677a
        mov    ecx, ebp
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        mov    ecx, ebp
        mov    dword ptr [esp + 0x14], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_677a
        push    ebx
L_6713:
        mov    ecx, edi
        call    FUN_005faef0
        mov    ebx, dword ptr [eax + 4]
        mov    ecx, edi
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        cmp    esi, ebx
        je    L_673b
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edx]
L_6730:
        cmp    dword ptr [esi], eax
        je    L_673b
        add    esi, 4
        cmp    esi, ebx
        jne    L_6730
L_673b:
        mov    ecx, edi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_6762
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_0063b190
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        push    edi
        push    ebp
        push    edx
        mov    ecx, eax
        call    FUN_0064def0
L_6762:
        mov    esi, dword ptr [esp + 0x18]
        add    esi, 4
        mov    ecx, ebp
        mov    dword ptr [esp + 0x18], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        jne    L_6713
        pop    ebx
L_677a:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
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
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    al, byte ptr [esi + 0x545]
        test    al, al
        jne    L_67c8
        push    4
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp]
        call    FUN_005c68b0
        mov    byte ptr [esi + 0x545], 1
L_67c8:
        call    FUN_006f49a0
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, 3
        ja    L_686d
        jmp    dword ptr [edi*4 + 0x5c6878]
        mov    cl, byte ptr [esi + 0x549]
        inc    cl
        mov    al, cl
        cmp    al, 1
        mov    byte ptr [esi + 0x549], cl
        jne    L_680b
        push    6
        jmp    L_680d
L_680b:
        push    7
L_680d:
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fst    dword ptr [esp + 0xc]
        cmp    edi, 2
        jne    L_682b
        mov    byte ptr [esi + 0x546], 0
        jmp    L_6854
L_682b:
        mov    byte ptr [esi + 0x547], 0
        jmp    L_6854
        mov    cl, byte ptr [esi + 0x54a]
        inc    cl
        push    8
        mov    byte ptr [esi + 0x54a], cl
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fst    dword ptr [esp + 0xc]
L_6854:
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_686d
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, esi
        call    FUN_005c68b0
L_686d:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        // jump-table data @ 0x005C6878 (14 relocated pointers)
        __emit 0x34
        __emit 0x68
        __emit 0x5C
        __emit 0x00
        __emit 0x34
        __emit 0x68
        __emit 0x5C
        __emit 0x00
        __emit 0xF3
        __emit 0x67
        __emit 0x5C
        __emit 0x00
        __emit 0xF3
        __emit 0x67
        __emit 0x5C
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x56
        __emit 0x6A
        __emit 0x05
        __emit 0x8B
        __emit 0xF1
        __emit 0xE8
        __emit 0xA6
        __emit 0x12
        __emit 0x07
        __emit 0x00
        __emit 0x8B
        __emit 0xC8
        __emit 0xE8
        __emit 0x7F
        __emit 0x11
        __emit 0x07
        __emit 0x00
        __emit 0x51
        __emit 0x8B
        __emit 0xCE
        __emit 0xD9
        __emit 0x1C
        __emit 0x24
        __emit 0xE8
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x5E
        __emit 0xC3
        __emit 0x90
        __emit 0x90
    }
}
