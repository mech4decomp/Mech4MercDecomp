/*
 * FUN_004da2a0 (68 B) — __thiscall, RET 0x4. MLR/Adept core helper:
 * walks an object chain, calls FUN_004ea800, ORs a flag into [this+0x10],
 * then calls FUN_004ea3d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004ea800(void);
extern void FUN_004ea3d0(void);

__declspec(naked) void FUN_004da2a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [edi + 0x4]
        cmp     dword ptr [ecx], 0x234
        jnz     L1
        mov     edx, dword ptr [edi + 0x10]
        mov     edi, dword ptr [edx + 0x10]
L1:
        push    esi
        mov     ecx, edi
        call    FUN_004ea800
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        and     eax, 0xffff0fff
        or      eax, ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esi + 0x10], eax
        call    FUN_004ea3d0
        pop     edi
        pop     esi
        ret     0x4
    }
}
