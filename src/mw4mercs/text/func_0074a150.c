/*
 * FUN_0074a150 (extent 0x74a150-0x74a1dc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_00750480(void);

__declspec(naked) void FUN_0074a150(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_a193
        push    edi
        push    ebx
        call    FUN_00750480
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa5f4
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_a193
        int 3    
L_a193:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov    esi, eax
        test    esi, esi
        jge    L_a1d5
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa624
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a1d5
        int 3    
L_a1d5:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
