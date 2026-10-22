/*
 * FUN_00599bd7 (extent 0x599bd7-0x599c56) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fe0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00599c10(void);
extern void __cdecl FUN_005f6e30(void);

__declspec(naked) void FUN_00599bd7(void)
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
        push    0x17c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9c0c
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f1fe0]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00599c10
        ret    
L_9c0c:
        xor    eax, eax
        ret    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005f6e30
        mov    dword ptr [esi], 0x7833a8
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x168]
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
        mov    eax, 0xc
        ret    
    }
}
