/*
 * FUN_00615bc7 (extent 0x615bc7-0x615c09) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);

__declspec(naked) void FUN_00615bc7(void)
{
    __asm {
        nop    
        xchg    ebp, eax
        push    edx
        popad    
        add    byte ptr [eax - 0x78ff9eae], al
        push    edx
        popad    
        add    byte ptr [esi - 0x6fff9eae], cl
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [esp + 4]
        push    eax
        add    ecx, 0x14
        call    FUN_00412740
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_5c06
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_5c06
        push    eax
        call    FUN_004084e0
        pop    ecx
L_5c06:
        ret    4
    }
}
