/*
 * FUN_00500053 (extent 0x500053-0x5000ec) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0050d5d0(void);
extern void __cdecl FUN_0050d620(void);

__declspec(naked) void FUN_00500053(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        cmp    dword ptr [esi], 0
        je    L_0071
        mov    eax, 4
        pop    esi
        ret    
L_0071:
        mov    eax, dword ptr [esi + 4]
        push    eax
        call    FUN_0050d620
        push    0x5003c0
        push    0x40
        push    4
        call    FUN_0050d5d0
        add    esp, 0x10
        mov    dword ptr [esi + 4], eax
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax]
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
        mov    eax, dword ptr [esp + 8]
        cmp    eax, 5
        ja    L_00e4
        jmp    dword ptr [eax*4 + 0x5000ec]
        mov    eax, 0x76b768
        ret    
        mov    eax, 0x77624c
        ret    
        mov    eax, 0x776230
        ret    
        mov    eax, 0x776214
        ret    
        mov    eax, 0x776200
        ret    
        mov    eax, 0x7761e0
        ret    
L_00e4:
        mov    eax, 0x7761cc
        ret    
        mov    edi, edi
        // jump-table data @ 0x005000EC (9 relocated pointers)
        __emit 0xC0
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0xC6
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0xCC
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0xD2
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0xD8
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0xDE
        __emit 0x00
        __emit 0x50
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
