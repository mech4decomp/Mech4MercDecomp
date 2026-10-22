/*
 * FUN_007353e2 (extent 0x7353e2-0x735440) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750ba0(void);

__declspec(naked) void FUN_007353e2(void)
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
        jge    L_5437
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
        je    L_5437
        int 3    
L_5437:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x14
    }
}
