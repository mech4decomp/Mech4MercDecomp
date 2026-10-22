/*
 * FUN_00660ec0 (52 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 4. Calls sub-object destructors
 * FUN_006a22e0 (this+0x30 and this+0x24) and FUN_00661e50 (this),
 * then frees this via FUN_004084e0 if (param & 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00660ec0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x24]
        lea     ecx, [edi + 0xc]
        call    FUN_006a22e0
        mov     ecx, edi
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
