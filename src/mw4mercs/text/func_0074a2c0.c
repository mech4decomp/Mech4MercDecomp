/*
 * FUN_0074a2c0 (extent 0x74a2c0-0x74a345) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074c690(void);

__declspec(naked) void FUN_0074a2c0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x18]
        mov    esi, eax
        test    esi, esi
        jge    L_a2ed
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa6d0
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a2ed
        int 3    
L_a2ed:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
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
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x2c]
        mov    esi, eax
        test    esi, esi
        jge    L_a33d
        push    edi
        call    FUN_0074c690
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa6f0
        call    FUN_006fabf0
        add    esp, 0x10
        test    eax, eax
        je    L_a33d
        int 3    
L_a33d:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
