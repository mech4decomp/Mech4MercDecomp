/*
 * FUN_005db570 (43 B) — __thiscall (ECX=this). Destroys the object at
 * [this+0x2e4] if non-null and clears the field.
 *
 * Match: target 100%
 */

extern void __stdcall FUN_0064c620(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005db570(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x2e4]
        test    esi, esi
        jz      L_b598
        mov     ecx, esi
        call    FUN_0064c620
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x2e4], 0x0
    L_b598:
        pop     edi
        pop     esi
        ret
    }
}
