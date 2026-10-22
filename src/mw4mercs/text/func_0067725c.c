/*
 * FUN_0067725c (extent 0x67725c-0x677379) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern void __cdecl FUN_0066a3c0(void);
extern void __cdecl FUN_00674770(void);

__declspec(naked) void FUN_0067725c(void)
{
    __asm {
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
        call    FUN_0066a3c0
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    esp, 0x14
        sub    eax, 0x33
        je    L_72f8
        dec    eax
        jne    L_734f
        test    bl, bl
        jne    L_72b8
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_72b8:
        fld    dword ptr [edi + 0x2fc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_734f
        fld    dword ptr [edi + 0x2fc]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797ad0
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    
L_72f8:
        test    bl, bl
        jne    L_7313
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f000000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_7313:
        fld    dword ptr [edi + 0x2f8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_734f
        fld    dword ptr [edi + 0x2f8]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797a98
        push    ebp
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    
L_734f:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0x44
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00674770
        add    esp, 4
        pop    esi
        ret    
    }
}
