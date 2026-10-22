/*
 * FUN_006a2230 (42 B) — __thiscall pointer-release helper.
 *
 * If (*this & 1) == 1, clears the low 2 bits, stores it back, and
 * calls FUN_004084e0(cleared). Always sets *this = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(unsigned int a);

__declspec(naked) void __fastcall FUN_006a2230(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        mov     ecx, eax
        and     ecx, 1
        cmp     cl, 1
        jnz     L_skip
        mov     edx, eax
        and     eax, 0xFFFFFFFC
        push    eax
        and     edx, 2
        mov     dword ptr [esi], eax
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov     dword ptr [esi], 0
        pop     esi
        ret
    }
}
