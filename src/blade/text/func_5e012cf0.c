/*
 * FUN_5e012cf0 (246 B) — pixel-format matching (DirectDraw caps).
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e012cf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        cmp     ecx, 0x8
        jnz     L_d07
        test    byte ptr [eax + 0x4], 0x20
        jz      L_d07
        mov     eax, ecx
        ret     0x4
L_d07:
        mov     edx, dword ptr [eax + 0x4]
        and     edx, 0x1
        jz      L_d3d
        cmp     ecx, 0x10
        jnz     L_d87
        cmp     dword ptr [eax + 0x10], 0x7c00
        jnz     L_d3d
        cmp     dword ptr [eax + 0x14], 0x3e0
        jnz     L_d3d
        cmp     dword ptr [eax + 0x18], 0x1f
        jnz     L_d3d
        cmp     dword ptr [eax + 0x1c], 0x8000
        jnz     L_d3d
        mov     eax, 0x613
        ret     0x4
L_d3d:
        cmp     ecx, 0x10
        jnz     L_d87
        cmp     dword ptr [eax + 0x10], 0x7c00
        jnz     L_d62
        cmp     dword ptr [eax + 0x14], 0x3e0
        jnz     L_d62
        cmp     dword ptr [eax + 0x18], 0x1f
        jnz     L_d62
        mov     eax, 0x22b
        ret     0x4
L_d62:
        cmp     ecx, 0x10
        jnz     L_d87
        cmp     dword ptr [eax + 0x10], 0xf800
        jnz     L_d87
        cmp     dword ptr [eax + 0x14], 0x7e0
        jnz     L_d87
        cmp     dword ptr [eax + 0x18], 0x1f
        jnz     L_d87
        mov     eax, 0x235
        ret     0x4
L_d87:
        test    edx, edx
        jz      L_db9
        cmp     ecx, 0x10
        jnz     L_db9
        cmp     dword ptr [eax + 0x10], 0xf00
        jnz     L_db9
        cmp     dword ptr [eax + 0x14], 0xf0
        jnz     L_db9
        cmp     dword ptr [eax + 0x18], 0xf
        jnz     L_db9
        cmp     dword ptr [eax + 0x1c], 0xf000
        jnz     L_db9
        mov     eax, 0x115c
        ret     0x4
L_db9:
        cmp     ecx, 0x20
        jnz     L_de1
        cmp     dword ptr [eax + 0x10], 0xff0000
        jnz     L_de1
        cmp     dword ptr [eax + 0x14], 0xff00
        jnz     L_de1
        cmp     dword ptr [eax + 0x18], 0xff
        jnz     L_de1
        mov     eax, 0x20
        ret     0x4
L_de1:
        xor     eax, eax
        ret     0x4
    }
}
