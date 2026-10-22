/*
 * FUN_005e0b10 (58 B) — __thiscall (ECX=this) initializer: calls FUN_004daa20
 * on this+0x454, FUN_005e1ac0, conditionally FUN_005e0490, then zeroes
 * this+0x438 / this+0x43c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004daa20(void *a);
extern void __stdcall FUN_005e1ac0(void *a);
extern void __stdcall FUN_005e0490(void *a);

__declspec(naked) void __stdcall FUN_005e0b10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0x454]
        push    eax
        call    FUN_004daa20
        mov     ecx, esi
        call    FUN_005e1ac0
        mov     eax, dword ptr [esi + 0x44c]
        cmp     eax, 0x8
        jz      L_b3a
        push    eax
        call    FUN_005e0490
        add     esp, 0x4
L_b3a:
        xor     eax, eax
        mov     dword ptr [esi + 0x438], eax
        mov     dword ptr [esi + 0x43c], eax
        pop     esi
        ret
    }
}
