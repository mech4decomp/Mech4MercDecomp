/*
 * FUN_00713910 (extent 0x713910-0x713a6f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_0085a248;
extern char   g_0085b4c0;
extern int    g_0085b5c0;
extern int    g_0085b5c4;
extern char   g_0087c254;
extern void __cdecl FUN_00713910(void);
extern void __cdecl FUN_00713de0(void);
extern void __cdecl FUN_00736c50(void);
extern void __cdecl FUN_00736cd0(void);

__declspec(naked) void FUN_00713910(void)
{
    __asm {
        xor    eax, eax
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
        nop    
        push    ebp
        mov    ebp, esp
        mov    dword ptr [g_0085b5c0], ebp
        mov    dword ptr [g_0085b5c4], esp
        mov    eax, dword ptr [g_0085b5c0]
        mov    ecx, eax
        and    ecx, 3
        test    cl, cl
        jne    L_394c
        cmp    eax, dword ptr [g_0085b5c4]
        jb    L_394c
        cmp    eax, 0x80000000
        jbe    L_3956
L_394c:
        mov    dword ptr [g_0085b5c0], 0
L_3956:
        push    esi
        mov    esi, dword ptr [ebp + 0x10]
        test    esi, esi
        push    edi
        jbe    L_3967
L_395f:
        call    FUN_00713910
        dec    esi
        jne    L_395f
L_3967:
        mov    edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jbe    L_397e
        mov    esi, dword ptr [ebp + 8]
L_3971:
        call    FUN_00713910
        mov    dword ptr [esi], eax
        add    esi, 4
        dec    edi
        jne    L_3971
L_397e:
        pop    edi
        pop    esi
        pop    ebp
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
        sub    esp, 0x21c
        push    esi
        mov    esi, dword ptr [esp + 0x224]
        test    esi, esi
        push    edi
        jne    L_39b0
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x21c
        ret    8
L_39b0:
        push    esi
        lea    eax, [esp + 0x20]
        push    eax
        mov    byte ptr [g_0085b4c0], 0
        call    FUN_00736cd0
        push    esi
        lea    ecx, [esp + 0x124]
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        mov    edi, eax
        call    FUN_00736c50
        test    eax, eax
        jne    L_39e6
        pop    edi
        pop    esi
        add    esp, 0x21c
        ret    8
L_39e6:
        mov    cl, byte ptr [esp + 0x22c]
        test    cl, cl
        je    L_3a15
        push    eax
        push    0x76c690
        push    0x85b4c0
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        pop    edi
        mov    eax, 0x85b4c0
        pop    esi
        add    esp, 0x21c
        ret    8
L_3a15:
        push    edi
        push    eax
        push    0x7a2360
        push    0x85b4c0
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        pop    edi
        mov    eax, 0x85b4c0
        pop    esi
        add    esp, 0x21c
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3a4e
        call    FUN_00713de0
L_3a4e:
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        push    0x1c4
        push    1
        push    eax
        call    dword ptr [ecx + 0x64]
        ret    8
    }
}
