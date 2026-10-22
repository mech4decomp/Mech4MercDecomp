/*
 * FUN_0074a230 (extent 0x74a230-0x74a2bc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0074a230(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        push    edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_a26e
        mov    eax, dword ptr [edi + 0xc]
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa674
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a26e
        int 3    
L_a26e:
        pop    edi
        mov    eax, esi
        pop    esi
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
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov    esi, eax
        test    esi, esi
        jge    L_a2b5
        cmp    esi, 0x887601c2
        je    L_a2b5
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa6ac
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a2b5
        int 3    
L_a2b5:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
    }
}
