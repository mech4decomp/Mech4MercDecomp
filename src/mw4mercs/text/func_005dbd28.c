/*
 * FUN_005dbd28 (extent 0x5dbd28-0x5dbd82) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005dbd28(void)
{
    __asm {
        push    edx
        mov    esp, 0xbc5e005d
        pop    ebp
        add    byte ptr [edx - 0x44], ch
        pop    ebp
        add    byte ptr [esi - 0x44], dh
        pop    ebp
        add    byte ptr [edx - 0x54ffa244], ah
        mov    esp, 0xbcb4005d
        pop    ebp
        add    byte ptr [ebp - 0x11ffa244], bh
        mov    esp, 0xbcf7005d
        pop    ebp
        add    byte ptr [eax], al
        mov    ebp, 0xbd09005d
        pop    ebp
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x180]
        cmp    eax, -1
        jne    L_bd81
        push    0xe3
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        jmp    FUN_0075db4a
L_bd81:
        ret    
    }
}
