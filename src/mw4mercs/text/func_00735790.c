/*
 * FUN_00735790 (extent 0x735790-0x73580f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00735790(void)
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
        call    dword ptr [eax + 0x54]
        mov    esi, eax
        test    esi, esi
        jge    L_57c3
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a65b0
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_57c3
        int 3    
L_57c3:
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
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    edi
        call    dword ptr [eax + 0x30]
        mov    esi, eax
        test    esi, esi
        jge    L_5807
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a65dc
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_5807
        int 3    
L_5807:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
