/*
 * FUN_00624607 (extent 0x624607-0x624798) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0080d9b4;
extern int    g_0080d9bc;
extern void __cdecl FUN_00666460(void);
extern void __cdecl FUN_00666480(void);
extern void __cdecl FUN_00666550(void);
extern void __cdecl FUN_006665a0(void);

__declspec(naked) void FUN_00624607(void)
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
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
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
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
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
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
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b4]
        add    esp, 4
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 0x10
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 0x14
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
        nop    
        nop    
        nop    
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
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    dl, byte ptr [edx]
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax], ecx
        mov    byte ptr [eax + 8], dl
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        ret    4
    }
}
