/*
 * FUN_0072a674 (extent 0x72a674-0x72a766) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008816c8;
extern int    g_008816cc;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00717c10(void);

__declspec(naked) void FUN_0072a674(void)
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
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008816c8]
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        xor    ebx, ebx
        cmp    eax, 0x4587abba
        je    L_a6ac
        push    0x7a5910
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a6ac
        int 3    
L_a6ac:
        test    esi, esi
        je    L_a6bd
L_a6b0:
        cmp    esi, edi
        je    L_a6d6
        mov    ebx, esi
        mov    esi, dword ptr [esi + 4]
        test    esi, esi
        jne    L_a6b0
L_a6bd:
        push    0x7a58f8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a6cf
        int 3    
L_a6cf:
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    4
L_a6d6:
        dec    dword ptr [esi + 8]
        jne    L_a6cf
        test    ebx, ebx
        je    L_a6e7
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [ebx + 4], eax
        jmp    L_a6f0
L_a6e7:
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [g_008816c8], ecx
L_a6f0:
        mov    eax, dword ptr [esi + 0x134]
        test    eax, eax
        jne    L_a72f
        mov    eax, dword ptr [esi + 0x758]
        xor    ebx, ebx
        test    eax, eax
        jbe    L_a72f
        lea    edi, [esi + 0x760]
L_a70c:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_a71e
        push    eax
        call    FUN_00717c10
        mov    dword ptr [edi], 0
L_a71e:
        mov    eax, dword ptr [esi + 0x758]
        inc    ebx
        add    edi, 4
        cmp    ebx, eax
        jb    L_a70c
        mov    edi, dword ptr [ebp + 8]
L_a72f:
        mov    eax, dword ptr [esi + 0x75c]
        test    eax, eax
        je    L_a743
        mov    dword ptr [esi + 0x75c], 0
L_a743:
        push    esi
        call    FUN_006f4230
        cmp    edi, dword ptr [g_008816cc]
        jne    L_a6cf
        pop    edi
        pop    esi
        mov    dword ptr [g_008816cc], 0
        pop    ebx
        pop    ebp
        ret    4
    }
}
