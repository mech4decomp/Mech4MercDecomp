/*
 * FUN_0075b690 (extent 0x75b690-0x75b71b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0075b690(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_b6cb
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af6d8
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_b6cb
        int 3    
L_b6cb:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x10
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
        mov    ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0x20]
        mov    esi, eax
        test    esi, esi
        jge    L_b713
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7af6d8
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_b713
        int 3    
L_b713:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
    }
}
