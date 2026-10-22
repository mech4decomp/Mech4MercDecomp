/*
 * FUN_0074a491 (extent 0x74a491-0x74a4d8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);

__declspec(naked) void FUN_0074a491(void)
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
        nop    
        push    ebp
        mov    ebp, esp
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x34]
        mov    esi, eax
        test    esi, esi
        jge    L_a4d1
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa7d0
        call    FUN_006fabf0
        add    esp, 0xc
        test    eax, eax
        je    L_a4d1
        int 3    
L_a4d1:
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    8
    }
}
