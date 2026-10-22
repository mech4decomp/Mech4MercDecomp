/*
 * FUN_00591a77 (extent 0x591a77-0x591c76) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fac;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00591ab0(void);
extern void __cdecl FUN_005f35f0(void);

__declspec(naked) void FUN_00591a77(void)
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
        push    0x528
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1aac
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f1fac]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00591ab0
        ret    
L_1aac:
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
        call    FUN_005f35f0
        xor    eax, eax
        mov    dword ptr [esi + 0x520], eax
        mov    dword ptr [esi + 0x524], eax
        mov    dword ptr [esi + 0x514], eax
        mov    dword ptr [esi], 0x782590
        mov    dword ptr [esi + 0x51c], 0xffffffff
        mov    eax, esi
        pop    esi
        ret    0x10
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
    }
}
