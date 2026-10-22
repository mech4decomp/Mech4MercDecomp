/*
 * FUN_00748724 (extent 0x748724-0x748788) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00747a50(void);
extern void __cdecl FUN_00748b50(void);
extern void __cdecl FUN_00748f80(void);

__declspec(naked) void FUN_00748724(void)
{
    __asm {
        dec    ecx
        test    byte ptr [eax + eax + 0x5b], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x23], dh
        xchg    byte ptr [eax + eax - 0x70], dh
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
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        jne    L_875f
        call    FUN_00748b50
L_875f:
        mov    al, byte ptr [esp + 8]
        test    al, al
        je    L_8774
        test    byte ptr [esi + 4], 1
        jne    L_8774
        mov    ecx, esi
        call    FUN_00748f80
L_8774:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00747a50
        pop    esi
        ret    8
    }
}
