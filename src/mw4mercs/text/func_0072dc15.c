/*
 * FUN_0072dc15 (extent 0x72dc15-0x72dce8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b08c;
extern int    g_0076b090;
extern int    g_007b71d8;

__declspec(naked) void FUN_0072dc15(void)
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
        mov    ax, word ptr [esp + 8]
        mov    cx, word ptr [esp + 0x10]
        mov    dx, word ptr [esp + 0xc]
        sub    esp, 0x10
        cmp    ax, 0xffff
        jne    L_dc51
        __emit 0x66  /* __emit: cmp dx,0xffff must use imm16 form (66 81 FA FF FF); MSVC6 collapses to imm8 (66 83 FA FF) */
        __emit 0x81
        __emit 0xFA
        __emit 0xFF
        __emit 0xFF
        jne    L_dc51
        cmp    cx, dx
        jne    L_dc51
        __emit 0x8D  // lea eax, [esp+0] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        call    dword ptr [g_0076b08c]
        jmp    L_dc74
L_dc51:
        push    esi
        xor    esi, esi
        mov    dword ptr [esp + 4], esi
        mov    dword ptr [esp + 8], esi
        mov    dword ptr [esp + 0xc], esi
        mov    dword ptr [esp + 0x10], esi
        mov    word ptr [esp + 4], ax
        mov    word ptr [esp + 6], dx
        mov    word ptr [esp + 0xa], cx
        pop    esi
L_dc74:
        mov    dl, byte ptr [esp + 0x14]
        mov    eax, dword ptr [g_007b71d8]
        neg    dl
        push    0x200
        push    0x88277c
        push    0
        lea    ecx, [esp + 0xc]
        push    ecx
        sbb    edx, edx
        and    edx, 2
        push    edx
        push    eax
        call    dword ptr [g_0076b090]
        mov    eax, 0x88277c
        add    esp, 0x10
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        __emit 0x8D  // lea eax, [esp+0] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        call    dword ptr [g_0076b08c]
        mov    ecx, dword ptr [esp + 0x14]
        __emit 0x66  /* __emit: mov dx,[esp] zero-disp; MSVC6 drops the 00 disp byte (66 8B 14 24) */
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x00
        mov    eax, dword ptr [esp + 0x18]
        mov    word ptr [ecx], dx
        mov    cx, word ptr [esp + 2]
        mov    edx, dword ptr [esp + 0x1c]
        mov    word ptr [eax], cx
        mov    ax, word ptr [esp + 6]
        mov    word ptr [edx], ax
        add    esp, 0x10
        ret    0xc
    }
}
