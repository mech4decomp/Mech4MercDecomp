/*
 * FUN_00758790 (extent 0x758790-0x758826) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0075e0c4(void);
extern void __cdecl FUN_0075e0ca(void);

__declspec(naked) void FUN_00758790(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    FUN_0075e0c4
        mov    esi, eax
        test    esi, esi
        jge    L_87cd
        mov    ecx, dword ptr [ebp + 8]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aecb0
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_87cd
        int 3    
L_87cd:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
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
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    FUN_0075e0ca
        mov    esi, eax
        test    esi, esi
        jge    L_881d
        mov    ecx, dword ptr [ebp + 8]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aecf0
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_881d
        int 3    
L_881d:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
