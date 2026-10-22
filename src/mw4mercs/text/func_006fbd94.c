/*
 * FUN_006fbd94 (extent 0x6fbd94-0x6fbe80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0b4;
extern int    g_0076b1b0;
extern int    g_0076b1b4;
extern int    g_0076b1f4;
extern int    g_0076b4f8;

__declspec(naked) void FUN_006fbd94(void)
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
        sub    esp, 0x18
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        call    dword ptr [g_0076b1b4]
        lea    edx, [esp + 8]
        push    edx
        lea    eax, [esp + 4]
        push    eax
        call    dword ptr [g_0076b1b0]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xe]
        mov    eax, dword ptr [esp + 0xa]
        and    ecx, 0xffff
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        and    edx, 0xffff
        push    edx
        and    eax, 0xffff
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        and    ecx, 0xffff
        mov    edx, dword ptr [ecx*4 + 0x7b6ee4]
        mov    ecx, dword ptr [esp + 0x1e]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        and    eax, 0xffff
        push    eax
        and    ecx, 0xffff
        push    ecx
        and    edx, 0xffff
        push    edx
        push    0x7a02b0
        push    0x8562cc
        call    dword ptr [g_0076b4f8]
        mov    eax, 0x8562cc
        add    esp, 0x3c
        ret    8
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b0b4]
        cmp    eax, -1
        jne    L_be45
        xor    al, al
        ret    4
L_be45:
        and    eax, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    0x80
        push    eax
        call    dword ptr [g_0076b1f4]
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
        nop    
        mov    eax, dword ptr [esp + 4]
        push    1
        push    eax
        call    dword ptr [g_0076b1f4]
        ret    4
    }
}
