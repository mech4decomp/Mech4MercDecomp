/*
 * FUN_00757cb0 (extent 0x757cb0-0x757d2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00757cb0(void)
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
        call    dword ptr [eax + 0x24]
        mov    esi, eax
        test    esi, esi
        jge    L_7ce3
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae6d4
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7ce3
        int 3    
L_7ce3:
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
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_7d25
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae6fc
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_7d25
        int 3    
L_7d25:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    8
    }
}
