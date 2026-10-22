/*
 * FUN_00679cf9 (extent 0x679cf9-0x679e6c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_00674890(void);
extern void __cdecl FUN_00675620(void);

__declspec(naked) void FUN_00679cf9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    ebp
        test    bl, bl
        mov    ebx, dword ptr [esp + 0x24]
        push    ebx
        push    eax
        push    edi
        push    esi
        setne    byte ptr [esp + 0x30]
        call    FUN_00674890
        mov    cl, al
        mov    eax, dword ptr [edi + 0x10]
        add    esp, 0x14
        sub    eax, 0xb
        je    L_9dc3
        dec    eax
        jne    L_9e3f
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        jne    L_9d62
        mov    eax, dword ptr [edi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], 0x3e99999a
        call    dword ptr [eax + 4]
        mov    cl, 1
L_9d62:
        fld    dword ptr [esi + 0x38]
        mov    edi, dword ptr [g_0076b424]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9d91
        fld    dword ptr [esi + 0x38]
        mov    edx, dword ptr [ebx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x798058
        push    ebp
        push    edx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_9d91:
        fld    dword ptr [esi + 0x38]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9e3f
        fld    dword ptr [esi + 0x38]
        mov    eax, dword ptr [ebx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x798018
        push    ebp
        push    eax
        call    edi
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    
L_9dc3:
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        jne    L_9de2
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], 0x3e99999a
        call    dword ptr [edx + 4]
        mov    cl, 1
L_9de2:
        fld    dword ptr [esi + 0x34]
        mov    edi, dword ptr [g_0076b424]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9e11
        fld    dword ptr [esi + 0x34]
        mov    ecx, dword ptr [ebx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797378
        push    ebp
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_9e11:
        fld    dword ptr [esi + 0x34]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9e3f
        fld    dword ptr [esi + 0x34]
        mov    edx, dword ptr [ebx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797334
        push    ebp
        push    edx
        call    edi
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        ret    
L_9e3f:
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
        push    0x80
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00675620
        add    esp, 4
        pop    esi
        ret    
    }
}
