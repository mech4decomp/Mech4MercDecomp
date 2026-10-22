/*
 * FUN_00717e20 (extent 0x717e20-0x717f2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d968;
extern int    g_00858afc;
extern int    g_008aaad0;
extern float  g_008aaad8;
extern int    g_008aaae0;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_00717df0(void);
extern void __cdecl FUN_00717e20(void);

__declspec(naked) void FUN_00717e20(void)
{
    __asm {
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [esp + 8]
        sub    eax, ecx
        test    eax, eax
        mov    ecx, dword ptr [esp + 0xc]
        jle    L_7e3b
        cmp    eax, ecx
        jg    L_7e3b
        mov    al, 1
        ret    0xc
L_7e3b:
        add    eax, 0xc350
        test    eax, eax
        jle    L_7e4d
        cmp    eax, ecx
        jg    L_7e4d
        mov    al, 1
        ret    0xc
L_7e4d:
        xor    al, al
        ret    0xc
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    esi
        push    edi
        push    ebx
        call    FUN_00717df0
        test    al, al
        jne    L_7e8d
        push    esi
        push    edi
        push    ebx
        call    FUN_00717e20
        test    al, al
        jne    L_7e8d
        pop    edi
        pop    esi
        pop    ebx
        ret    0xc
L_7e8d:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
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
        push    ebx
        push    esi
        push    edi
        call    FUN_00707e90
        fstp    qword ptr [g_008aaad8]
        mov    ebx, dword ptr [g_008aaae0]
        mov    ecx, ebx
        xor    eax, eax
        test    ecx, ecx
        je    L_7efe
L_7ebc:
        inc    eax
        cmp    eax, 0x23
        je    L_7eca
        mov    ecx, dword ptr [ecx]
        test    ecx, ecx
        jne    L_7ebc
        jmp    L_7efe
L_7eca:
        test    ecx, ecx
        je    L_7efe
        mov    esi, dword ptr [g_00858afc]
        lea    edx, [esi - 1]
L_7ed7:
        mov    eax, dword ptr [ecx + 0xc]
        cmp    eax, edx
        je    L_7ef8
        cmp    eax, esi
        je    L_7ef8
        fld    qword ptr [ecx + 4]
        fadd    qword ptr [g_0076d968]
        fcomp    qword ptr [g_008aaad8]
        fnstsw  ax
        test    ah, 1
        jne    L_7efe
L_7ef8:
        mov    ecx, dword ptr [ecx]
        test    ecx, ecx
        jne    L_7ed7
L_7efe:
        test    ecx, ecx
        mov    edi, ecx
        je    L_7f24
        mov    esi, dword ptr [ecx]
        test    esi, esi
        je    L_7f1e
L_7f0a:
        mov    eax, esi
        mov    esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_7f0a
        mov    ebx, dword ptr [g_008aaae0]
L_7f1e:
        mov    dword ptr [edi], 0
L_7f24:
        pop    edi
        pop    esi
        mov    dword ptr [g_008aaad0], ebx
        pop    ebx
        ret    
    }
}
