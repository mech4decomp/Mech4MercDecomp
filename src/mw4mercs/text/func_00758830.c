/*
 * FUN_00758830 (extent 0x758830-0x7588be) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0075e0d0(void);
extern void __cdecl FUN_0075e0d6(void);

__declspec(naked) void FUN_00758830(void)
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
        call    FUN_0075e0d0
        mov    esi, eax
        test    esi, esi
        jge    L_886d
        mov    ecx, dword ptr [ebp + 8]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aed28
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_886d
        int 3    
L_886d:
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
        push    ebx
        mov    ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        call    FUN_0075e0d6
        mov    esi, eax
        test    esi, esi
        jge    L_88b5
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aed68
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_88b5
        int 3    
L_88b5:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
    }
}
