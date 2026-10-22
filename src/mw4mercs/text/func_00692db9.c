/*
 * FUN_00692db9 (extent 0x692db9-0x692f30) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern void __cdecl FUN_00674890(void);

__declspec(naked) void FUN_00692db9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00674890
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    eax, -0xb
        add    esp, 0x14
        cmp    eax, 3
        ja    L_2f28
        jmp    dword ptr [eax*4 + 0x692f30]
        test    bl, bl
        jne    L_2e1f
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [edx + 4]
        mov    cl, 1
L_2e1f:
        fld    dword ptr [edi + 0x38]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_2f28
        fld    dword ptr [edi + 0x38]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x799388
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_2e76
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x40a00000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_2e76:
        fld    dword ptr [edi + 0x3c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_2f28
        fld    dword ptr [edi + 0x3c]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x799354
        jmp    L_2f15
        test    bl, bl
        jne    L_2eb5
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0xa
        call    dword ptr [edx + 4]
        mov    cl, 1
L_2eb5:
        mov    edi, dword ptr [edi + 0x34]
        test    edi, edi
        jge    L_2f28
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        push    edi
        push    0x799320
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x10
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_2ef7
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_2ef7:
        fld    dword ptr [edi + 0x40]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_2f28
        fld    dword ptr [edi + 0x40]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x7992e4
L_2f15:
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [edx]
        push    ebp
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        xor    cl, cl
L_2f28:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        nop    
        // jump-table data @ 0x00692F30 (4 relocated pointers)
        __emit 0x04
        __emit 0x2E
        __emit 0x69
        __emit 0x00
        __emit 0x5B
        __emit 0x2E
        __emit 0x69
        __emit 0x00
        __emit 0x9A
        __emit 0x2E
        __emit 0x69
        __emit 0x00
        __emit 0xDC
        __emit 0x2E
        __emit 0x69
        __emit 0x00
    }
}
