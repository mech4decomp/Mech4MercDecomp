/*
 * FUN_00758650 (extent 0x758650-0x7586fc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dd10(void);
extern void __cdecl FUN_00752860(void);

__declspec(naked) void FUN_00758650(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x80
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    ebx
        push    edi
        call    dword ptr [eax + 0x14]
        mov    esi, eax
        push    ebx
        lea    eax, [ebp - 0x80]
        push    eax
        call    FUN_0074dd10
        test    esi, esi
        jge    L_869c
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aec18
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_869c
        int 3    
L_869c:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
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
        push    ebp
        mov    ebp, esp
        mov    ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x30]
        mov    esi, eax
        test    esi, esi
        jge    L_86f3
        push    ebx
        call    FUN_00752860
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aec40
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_86f3
        int 3    
L_86f3:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
    }
}
