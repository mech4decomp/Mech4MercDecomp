/*
 * FUN_0075b9b6 (extent 0x75b9b6-0x75b9f2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00747a50(void);
extern void __cdecl FUN_0075ba00(void);
extern void __cdecl FUN_0075bb40(void);

__declspec(naked) void FUN_0075b9b6(void)
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        jne    L_b9de
        call    FUN_0075ba00
        mov    al, byte ptr [esp + 8]
        test    al, al
        je    L_b9de
        mov    ecx, esi
        call    FUN_0075bb40
L_b9de:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esi + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00747a50
        pop    esi
        ret    8
    }
}
