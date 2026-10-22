/*
 * FUN_00760da0 (46 B) — __cdecl, RET (no stack cleanup).
 *
 * Calls FUN_00760f00(p1); if zero, returns. Otherwise computes
 * wcslen(p1)*2+2 into *p2 and returns 1 (AX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00760f00(void *p);
extern int __cdecl FUN_0075dc5a(void *p);

__declspec(naked) void __cdecl FUN_00760da0(void *p1, int *p2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_00760f00
        add     esp, 4
        test    ax, ax
        jnz     L_cont
        pop     esi
        ret
L_cont:
        push    esi
        call    FUN_0075dc5a
        mov     ecx, dword ptr [esp + 0x10]
        add     esp, 4
        lea     eax, [eax + eax + 2]
        mov     dword ptr [ecx], eax
        mov     ax, 1
        pop     esi
        ret
    }
}
