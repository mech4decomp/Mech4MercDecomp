/*
 * FUN_006f1918 (extent 0x6f1918-0x6f1978) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_006f1918(void)
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
        push    esi
        lea    esi, [ecx + 0x18]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_1942
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    esi
        ret    4
L_1942:
        xor    al, al
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        lea    esi, [ecx + 0x30]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_1972
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    esi
        ret    4
L_1972:
        xor    al, al
        pop    esi
        ret    4
    }
}
