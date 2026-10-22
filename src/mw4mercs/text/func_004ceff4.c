/*
 * FUN_004ceff4 (extent 0x4ceff4-0x4cf073) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d7070(void);
extern void __cdecl FUN_006f88c0(void);
extern void __cdecl FUN_006f89c0(void);

__declspec(naked) void FUN_004ceff4(void)
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
        push    esi
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_f034
        mov    eax, dword ptr [esp + 8]
        push    eax
        mov    byte ptr [esi + 4], 0
        mov    dword ptr [esi], 0x771d10
        call    FUN_004d7070
        push    esi
        mov    dword ptr [esi + 0x24], eax
        call    FUN_006f88c0
        mov    al, 1
        pop    esi
        ret    4
L_f034:
        xor    al, al
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        push    esi
        call    FUN_006f89c0
        mov    eax, dword ptr [esi + 0x24]
        test    eax, eax
        je    L_f064
        mov    ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx]
        mov    dword ptr [esi + 0x24], 0
L_f064:
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    al, 1
        pop    esi
        ret    4
    }
}
