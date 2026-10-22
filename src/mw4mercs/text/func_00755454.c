/*
 * FUN_00755454 (extent 0x755454-0x755494) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_00755454(void)
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
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x1c]
        mov    esi, eax
        test    esi, esi
        jge    L_548d
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7ae26c
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_548d
        int 3    
L_548d:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    4
    }
}
