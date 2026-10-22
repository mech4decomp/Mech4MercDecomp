/*
 * FUN_005cc0c0 (37 B) — __cdecl. Copies dwords from [esp+4] to [esp+0xc]
 * until [esp+4] reaches [esp+8]. Returns void. Identical to FUN_005cc090.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cc0c0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L_E4
        push    esi
L_D1:
        test    eax, eax
        jz      L_D9
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
L_D9:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L_D1
        pop     esi
L_E4:
        ret
    }
}
