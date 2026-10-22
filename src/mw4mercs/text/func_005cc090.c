/*
 * FUN_005cc090 (37 B) — __cdecl. Copies dwords from [esp+4] to [esp+0xc]
 * until [esp+4] reaches [esp+8]. Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005cc090(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L_B4
        push    esi
L_A1:
        test    eax, eax
        jz      L_A9
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
L_A9:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     L_A1
        pop     esi
L_B4:
        ret
    }
}
