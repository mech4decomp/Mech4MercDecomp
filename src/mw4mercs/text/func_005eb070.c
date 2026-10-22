/*
 * FUN_005EB070 (134 B) — __thiscall (ECX = this).
 *
 * Three state-machine update blocks on this+0x1e8/0x1e4/0x1ec, each
 * conditionally subtracting a float accumulator, then sets this+0x1e0 = 3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005eb070(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1e8]
        cmp     eax, 0x2
        mov     edx, 0x3
        jz      L1
        cmp     eax, 0x1
        jnz     L2
L1:
        fld     dword ptr [ecx + 0x1f0]
        mov     dword ptr [ecx + 0x1e8], edx
        fsub    dword ptr [ecx + 0x1fc]
        fstp    dword ptr [ecx + 0x1fc]
L2:
        mov     eax, dword ptr [ecx + 0x1e4]
        cmp     eax, 0x2
        jz      L3
        cmp     eax, 0x1
        jnz     L4
L3:
        fld     dword ptr [ecx + 0x1f0]
        mov     dword ptr [ecx + 0x1e4], edx
        fsub    dword ptr [ecx + 0x1f8]
        fstp    dword ptr [ecx + 0x1f8]
L4:
        mov     eax, dword ptr [ecx + 0x1ec]
        test    eax, eax
        jz      L5
        cmp     eax, edx
        jnz     L6
L5:
        fld     dword ptr [ecx + 0x1f4]
        mov     dword ptr [ecx + 0x1ec], 0x2
        fsub    dword ptr [ecx + 0x200]
        fstp    dword ptr [ecx + 0x200]
L6:
        mov     dword ptr [ecx + 0x1e0], edx
        ret
    }
}
