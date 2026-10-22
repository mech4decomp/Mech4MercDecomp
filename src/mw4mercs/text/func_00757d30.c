/*
 * FUN_00757d30 (extent 0x757d30-0x757dd5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dd10(void);
extern void __cdecl FUN_00752890(void);

__declspec(naked) void FUN_00757d30(void)
{
    __asm {
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
        call    dword ptr [eax + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_7d67
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae730
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_7d67
        int 3    
L_7d67:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
        nop    
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
        call    dword ptr [eax + 0xc]
        mov    esi, eax
        test    esi, esi
        jge    L_7dca
        mov    eax, dword ptr [ebx + 0x10]
        push    eax
        lea    ecx, [ebp - 0x80]
        push    ecx
        call    FUN_0074dd10
        mov    edx, dword ptr [ebx + 4]
        push    eax
        push    edx
        call    FUN_00752890
        push    eax
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae760
        call    FUN_006fabf0
        add    esp, 0x18
        test    eax, eax
        je    L_7dca
        int 3    
L_7dca:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x10
    }
}
