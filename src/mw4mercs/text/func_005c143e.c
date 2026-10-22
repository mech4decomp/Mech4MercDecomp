/*
 * FUN_005c143e (extent 0x5c143e-0x5c151f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005c1520(void);

__declspec(naked) void FUN_005c143e(void)
{
    __asm {
        nop    
        nop    
        xor    al, al
        ret    
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
        mov    al, 1
        ret    
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
        mov    eax, 1
        ret    
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
        mov    al, 1
        ret    
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
        xor    al, al
        ret    
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
        xor    eax, eax
        ret    
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
        push    esi
        mov    esi, ecx
        call    FUN_005c1520
        test    byte ptr [esp + 8], 1
        je    L_14b8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_14b8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_14d9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_14d9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_14f9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_14f9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b84
        je    L_1519
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1519:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
