/*
 * FUN_007555e0 (extent 0x7555e0-0x755678) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00752460(void);

__declspec(naked) void FUN_007555e0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0xc]
        mov    esi, eax
        test    esi, esi
        jge    L_5613
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae348
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_5613
        int 3    
L_5613:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x28]
        mov    esi, eax
        test    esi, esi
        jge    L_566f
        push    edi
        call    FUN_00752460
        mov    ecx, dword ptr [ebp + 0xc]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    ebx
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae374
        call    FUN_006fabf0
        add    esp, 0x1c
        test    eax, eax
        je    L_566f
        int 3    
L_566f:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
