/*
 * FUN_0074a590 (extent 0x74a590-0x74a61c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074ed60(void);

__declspec(naked) void FUN_0074a590(void)
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
        call    dword ptr [ecx + 0x50]
        mov    esi, eax
        test    esi, esi
        jge    L_a5cf
        push    edi
        push    ebx
        call    FUN_0074ed60
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa814
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a5cf
        int 3    
L_a5cf:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        pop    ebp
        ret    0xc
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
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov    esi, eax
        test    esi, esi
        jge    L_a615
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa83c
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a615
        int 3    
L_a615:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
