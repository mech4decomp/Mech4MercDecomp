/*
 * FUN_006769c0 (83 B) — HUD map/hud4 family __thiscall. Walks a doubly-linked
 * list (head at this->[0x4], next at +0x2c, prev at +0x30) looking for a node
 * whose +0x34 field equals param_1, unlinks it, and frees it via the
 * __thiscall FUN_00416130 (this=[0x0080daa4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416130(void);

extern int g_0080daa4;   /* 0x0080daa4 (this for FUN_00416130) */

__declspec(naked) void FUN_006769c0(int param_1)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4]
        mov     eax, edx
        test    eax, eax
        push    esi
        jz      L6A0F
        mov     esi, dword ptr [esp + 0x8]
L69CE:
        cmp     dword ptr [eax + 0x34], esi
        jz      L69DE
        mov     eax, dword ptr [eax + 0x2c]
        test    eax, eax
        jnz     L69CE
        pop     esi
        ret     0x4
L69DE:
        cmp     edx, eax
        jnz     L69E8
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [ecx + 0x4], edx
L69E8:
        mov     ecx, dword ptr [eax + 0x30]
        test    ecx, ecx
        jz      L69F5
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [ecx + 0x2c], edx
L69F5:
        mov     edx, dword ptr [eax + 0x2c]
        test    edx, edx
        jz      L69FF
        mov     dword ptr [edx + 0x30], ecx
L69FF:
        test    eax, eax
        jz      L6A0F
        mov     ecx, dword ptr [g_0080daa4]
        push    eax
        call    FUN_00416130
L6A0F:
        pop     esi
        ret     0x4
    }
}
