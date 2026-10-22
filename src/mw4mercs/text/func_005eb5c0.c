/*
 * FUN_005EB5C0 (207 B) — __thiscall (ECX = this).
 *
 * State-machine update on this+0x1e8/0x1e4/0x1ec, then a float
 * accumulator update driven by this+0x1e0 (5/other).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005eb5c0(void *param)
{
    

extern int DAT_00789868;
extern int DAT_007899e0;
__asm {
mov     edx, dword ptr [ecx + 0x1e0]
        cmp     edx, 0x3
        jz      L_ret
        mov     eax, dword ptr [ecx + 0x1e8]
        cmp     eax, 0x2
        jz      L1
        cmp     eax, 0x1
        jnz     L2
L1:
        fld     dword ptr [ecx + 0x1f0]
        mov     dword ptr [ecx + 0x1e8], 0x3
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
        mov     dword ptr [ecx + 0x1e4], 0x3
        fsub    dword ptr [ecx + 0x1f8]
        fstp    dword ptr [ecx + 0x1f8]
L4:
        mov     eax, dword ptr [ecx + 0x1ec]
        cmp     eax, 0x2
        jz      L5
        cmp     eax, 0x1
        jnz     L6
L5:
        fld     dword ptr [ecx + 0x1f4]
        mov     dword ptr [ecx + 0x1ec], 0x3
        fsub    dword ptr [ecx + 0x200]
        fstp    dword ptr [ecx + 0x200]
L6:
        xor     eax, eax
        cmp     edx, 0x5
        mov     dword ptr [ecx + 0x1bc], eax
        jz      L7
        mov     dword ptr [ecx + 0x1b8], eax
L7:
        fld dword ptr [DAT_00789868]
        mov     dword ptr [ecx + 0x1e0], 0x5
        fmul dword ptr [DAT_007899e0]
        fsub    dword ptr [ecx + 0x19c]
        fadd    dword ptr [ecx + 0x1b8]
        fstp    dword ptr [ecx + 0x1c0]
L_ret:
        ret
    }


}
