/*
 * FUN_00735440 (extent 0x735440-0x7354f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750300(void);
extern void __cdecl FUN_00750ba0(void);

__declspec(naked) void FUN_00735440(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x80
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x80]
        mov    esi, eax
        test    esi, esi
        jge    L_5488
        push    ebx
        lea    ecx, [ebp - 0x80]
        push    ecx
        call    FUN_00750300
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a649c
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_5488
        int 3    
L_5488:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
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
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x64]
        mov    esi, eax
        test    esi, esi
        jge    L_54e7
        push    ebx
        call    FUN_00750ba0
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6478
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_54e7
        int 3    
L_54e7:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
