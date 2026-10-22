/*
 * FUN_0065ab00 (77 B) — __thiscall (ECX = this), RET 0 (one stack param).
 *
 * Calls FUN_005c1720(1) on this, conditionally clears this+0x544,
 * conditionally dispatches a virtual method (vtable+0x11C), then calls
 * FUN_005c98a0 / FUN_005c9850.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_005c9850(void);

__declspec(naked) void __stdcall FUN_0065ab00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x1
        mov     ecx, esi
        call    FUN_005c1720
        cmp     byte ptr [esp + 0xC], 0x1
        jnz     L_1
        mov     byte ptr [esi + 0x544], 0x0
L_1:
        cmp     byte ptr [esi + 0x2F2], 0x1
        jnz     L_2
        mov     al, byte ptr [esi + 0x2F9]
        test    al, al
        jz      L_3
L_2:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x11C]
L_3:
        mov     ecx, esi
        call    FUN_005c98a0
        cmp     al, 0x1
        jnz     L_4
        mov     ecx, esi
        call    FUN_005c9850
L_4:
        pop     esi
        ret
    }
}
