/*
 * FUN_00741bc0 (extent 0x741bc0-0x741c7d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074cd30(void);

__declspec(naked) void FUN_00741bc0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x1c]
        push    edi
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x68]
        mov    esi, eax
        test    esi, esi
        jge    L_1c1b
        cmp    esi, 0x8000000a
        je    L_1c1b
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    ecx
        call    FUN_0074cd30
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9650
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_1c1b
        int 3    
L_1c1b:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x18
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
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x14]
        push    edi
        push    ebx
        push    edx
        push    eax
        call    dword ptr [ecx + 0xa4]
        mov    esi, eax
        test    esi, esi
        jge    L_1c74
        mov    eax, dword ptr [ebp + 0xc]
        push    edi
        push    ebx
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9670
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_1c74
        int 3    
L_1c74:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
