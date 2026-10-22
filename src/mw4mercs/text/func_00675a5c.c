/*
 * FUN_00675a5c (extent 0x675a5c-0x675b1c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern void __cdecl FUN_00674dd0(void);
extern void __cdecl FUN_006775b0(void);

__declspec(naked) void FUN_00675a5c(void)
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
        call    FUN_006775b0
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    esp, 0x14
        cmp    eax, 0x20
        jne    L_5aed
        test    bl, bl
        jne    L_5ab1
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x40e00000
        call    dword ptr [edx + 4]
        mov    cl, 1
L_5ab1:
        fld    dword ptr [edi + 0x98]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_5aed
        fld    dword ptr [edi + 0x98]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797750
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
L_5aed:
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
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0xa4
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00674dd0
        add    esp, 4
        pop    esi
        ret    
    }
}
