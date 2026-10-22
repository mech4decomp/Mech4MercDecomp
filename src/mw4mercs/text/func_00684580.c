/*
 * FUN_00684580 (166 B) — __thiscall HUD element-list constructor
 * (variant of FUN_00684530). Initializes the list object, then fills
 * a 3-float vector from either a global camera (FUN_005f07c0) or a
 * per-element transform (FUN_00507f90), and calls FUN_00684630.
 * RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00684630(void);

__declspec(naked) void FUN_00684580(void)
{
    __asm {
        sub     esp, 0x3c
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x44]
        lea     eax, [esi + 0x18]
        mov     dword ptr [esi], eax
        lea     eax, [esi + 0x34]
        xor     edx, edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [eax], 0x3f800000
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        mov     eax, dword ptr [ecx + 0x198]
        cmp     eax, edx
        mov     dword ptr [esi + 0x14], 0x2000
        jnz     L_6845eb
        call    FUN_005f07c0
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x4], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x8], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0xc], eax
        jmp     L_68460c
    L_6845eb:
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_00507f90
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x4], edx
        mov     ecx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x8], ecx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0xc], edx
    L_68460c:
        mov     eax, dword ptr [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, esi
        call    FUN_00684630
        mov     eax, esi
        pop     esi
        add     esp, 0x3c
        ret     0xc
    }
}
