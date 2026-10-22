/*
 * FUN_0074a620 (extent 0x74a620-0x74a6cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074e280(void);

__declspec(naked) void FUN_0074a620(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x8c]
        mov    esi, eax
        test    esi, esi
        jge    L_a664
        cmp    esi, 0x887601c2
        je    L_a664
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa868
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_a664
        int 3    
L_a664:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
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
        call    dword ptr [ecx + 0x94]
        mov    esi, eax
        test    esi, esi
        jge    L_a6c2
        cmp    esi, 0x887601c2
        je    L_a6c2
        push    edi
        push    ebx
        call    FUN_0074e280
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa894
        call    FUN_006fabf0
        add    esp, 0x14
        test    eax, eax
        je    L_a6c2
        int 3    
L_a6c2:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0x10
    }
}
