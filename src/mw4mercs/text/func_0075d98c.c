/*
 * FUN_0075d98c (extent 0x75d98c-0x75db0e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b14c;
extern int    g_0076b1b8;
extern int    g_0076b298;
extern int    g_0076b29c;
extern int    g_0076b308;
extern int    g_0076b318;
extern int    g_0076b31c;
extern int    g_0076b320;
extern int    g_0076b32c;
extern int    g_0076b330;
extern int    g_0076b334;
extern int    g_0076b338;
extern int    g_0076b33c;
extern int    g_0076b348;
extern int    g_0076b38c;
extern int    g_0076b41c;
extern int    g_0076b420;
extern int    g_007b7938;
extern int    g_008bd2e4;
extern int    g_008bd2e8;
extern int    g_008bd2ec;
extern int    g_008bd2f0;
extern int    g_008bd670;
extern int    g_008bd674;
extern int    g_008bd678;
extern void __cdecl FUN_00408330(void);
extern void __cdecl FUN_0075df50(void);
extern void __cdecl FUN_0075df5c(void);
extern void __cdecl FUN_0075df62(void);
extern void __cdecl FUN_0075df7d(void);

__declspec(naked) void FUN_0075d98c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        jmp    dword ptr [g_0076b320]
        jmp    dword ptr [g_0076b420]
        jmp    dword ptr [g_0076b41c]
        jmp    dword ptr [g_0076b318]
        jmp    dword ptr [g_0076b308]
        int 3    
        int 3    
        jmp    dword ptr [g_0076b298]
        jmp    dword ptr [g_0076b29c]
        push    ebp
        mov    ebp, esp
        push    -1
        push    0x7afad8
        push    0x75ded2
        mov    eax, dword ptr fs:[0]
        push    eax
        mov    dword ptr fs:[0], esp
        sub    esp, 0x68
        push    ebx
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x18], esp
        xor    ebx, ebx
        mov    dword ptr [ebp - 4], ebx
        push    2
        call    dword ptr [g_0076b31c]
        pop    ecx
        or    dword ptr [g_008bd674], 0xffffffff
        or    dword ptr [g_008bd678], 0xffffffff
        call    dword ptr [g_0076b330]
        mov    ecx, dword ptr [g_008bd2f0]
        mov    dword ptr [eax], ecx
        call    dword ptr [g_0076b334]
        mov    ecx, dword ptr [g_008bd2ec]
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [g_0076b32c]
        mov    eax, dword ptr [eax]
        mov    dword ptr [g_008bd670], eax
        call    FUN_0075df7d
        cmp    dword ptr [g_007b7938], ebx
        jne    L_da3f
        push    0x75df7a
        call    dword ptr [g_0076b33c]
        pop    ecx
L_da3f:
        call    FUN_0075df62
        push    0x7b21a4
        push    0x7b21a0
        call    FUN_0075df5c
        mov    eax, dword ptr [g_008bd2e8]
        mov    dword ptr [ebp - 0x6c], eax
        lea    eax, [ebp - 0x6c]
        push    eax
        push    dword ptr [g_008bd2e4]
        lea    eax, [ebp - 0x64]
        push    eax
        lea    eax, [ebp - 0x70]
        push    eax
        lea    eax, [ebp - 0x60]
        push    eax
        call    dword ptr [g_0076b338]
        push    0x7b219c
        push    0x7b2000
        call    FUN_0075df5c
        add    esp, 0x24
        mov    eax, dword ptr [g_0076b348]
        mov    esi, dword ptr [eax]
        mov    dword ptr [ebp - 0x74], esi
        cmp    byte ptr [esi], 0x22
        jne    L_dad2
L_da98:
        inc    esi
        mov    dword ptr [ebp - 0x74], esi
        mov    al, byte ptr [esi]
        cmp    al, bl
        je    L_daa6
        cmp    al, 0x22
        jne    L_da98
L_daa6:
        cmp    byte ptr [esi], 0x22
        jne    L_daaf
L_daab:
        inc    esi
        mov    dword ptr [ebp - 0x74], esi
L_daaf:
        mov    al, byte ptr [esi]
        cmp    al, bl
        je    L_dab9
        cmp    al, 0x20
        jbe    L_daab
L_dab9:
        mov    dword ptr [ebp - 0x30], ebx
        lea    eax, [ebp - 0x5c]
        push    eax
        call    dword ptr [g_0076b1b8]
        test    byte ptr [ebp - 0x30], 1
        je    L_dadd
        movzx    eax, word ptr [ebp - 0x2c]
        jmp    L_dae0
L_dad2:
        cmp    byte ptr [esi], 0x20
        jbe    L_daaf
        inc    esi
        mov    dword ptr [ebp - 0x74], esi
        jmp    L_dad2
L_dadd:
        push    0xa
        pop    eax
L_dae0:
        push    eax
        push    esi
        push    ebx
        push    ebx
        call    dword ptr [g_0076b14c]
        push    eax
        call    FUN_00408330
        mov    dword ptr [ebp - 0x68], eax
        push    eax
        call    dword ptr [g_0076b38c]
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x78], ecx
        push    eax
        push    ecx
        call    FUN_0075df50
        pop    ecx
        pop    ecx
        ret    
    }
}
