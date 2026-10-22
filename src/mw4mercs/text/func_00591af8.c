/*
 * FUN_00591af8 (extent 0x591af8-0x591c9e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00591ca0(void);

__declspec(naked) void FUN_00591af8(void)
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    2
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    3
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    4
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    5
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    6
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    7
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    8
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    9
        call    dword ptr [eax + 8]
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
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax], 0
        mov    dword ptr [ecx], 0
        ret    8
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
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax], 0
        mov    dword ptr [ecx], 0
        ret    8
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
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax], 0
        mov    dword ptr [ecx], 0
        ret    8
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
        nop    
        mov    eax, 0x11
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
        push    esi
        mov    esi, ecx
        call    FUN_00591ca0
        test    byte ptr [esp + 8], 1
        je    L_1c98
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1c98:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
