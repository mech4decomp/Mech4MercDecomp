/*
 * FUN_004dfbf0 (extent 0x4dfbf0-0x4dfc94) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004dd6e0(void);

__declspec(naked) void FUN_004dfbf0(void)
{
    __asm {
        sub    esp, 0x14
        mov    eax, dword ptr [ecx + 0x20]
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ecx + 0x1c]
        mov    dword ptr [esp + 4], eax
        mov    eax, dword ptr [edx]
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        mov    dword ptr [esp + 4], 0x14
        mov    dword ptr [esp + 0xc], 0xffffffff
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], eax
        call    FUN_004d5b70
        add    esp, 0x14
        ret    4
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [ecx + 0x20]
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ecx + 0x1c]
        mov    dword ptr [esp + 4], eax
        mov    eax, dword ptr [edx]
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        mov    dword ptr [esp + 4], 0x14
        mov    dword ptr [esp + 0xc], 0xffffffff
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], eax
        call    FUN_004d5b70
        add    esp, 0x14
        ret    4
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x773958
        call    FUN_004dd6e0
        test    byte ptr [esp + 8], 1
        je    L_fc8e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_fc8e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
