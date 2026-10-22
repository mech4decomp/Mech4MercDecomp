/*
 * FUN_00684530 (71 B) — __thiscall HUD element-list constructor.
 * Initializes a growable array/list object (this=ECX) with two
 * sub-lists (at +0x0 and +0x4), stores params, then calls
 * FUN_00684630. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00684630(void);

__declspec(naked) void FUN_00684530(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        lea     eax, [esi + 0x18]
        xor     edx, edx
        mov     dword ptr [esi], eax
        lea     eax, [esi + 0x34]
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x40], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi + 0x14], 0x2000
        mov     dword ptr [eax], 0x3f800000
        call    FUN_00684630
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
