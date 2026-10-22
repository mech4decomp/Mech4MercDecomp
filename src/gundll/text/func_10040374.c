/*
 * FUN_10040374 (134 B) - __stdcall, RET 0x4. Initializes a device/context
 * via FUN_10040617, calls an IAT function pointer, and sets global flags.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040617(void);   /* rel32 call */
extern void __cdecl FUN_10037bf0(void);   /* rel32 call */
extern void __cdecl FUN_1004047a(void);   /* rel32 call */

extern int g_100756fc;   /* [0x100756fc] */
extern int g_10075710;   /* [0x10075710] */
extern int g_1007570c;   /* [0x1007570c] */
extern int g_10075714;   /* [0x10075714] */
extern int g_100756f8;   /* [0x100756f8] */
extern int *g_10075718;  /* IAT [0x10075718] */

__declspec(naked) void __stdcall func_10040374(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        push    esi
        push    dword ptr [ebp + 0x8]
        call    FUN_10040617
        pop     ecx
        mov     esi, eax
        lea     eax, [ebp - 0x78]
        push    0x78
        push    eax
        mov     eax, dword ptr [g_100756fc]
        neg     eax
        sbb     eax, eax
        and     ax, 0xf005
        add     eax, 0x1002
        push    eax
        push    esi
        call    dword ptr [g_10075718]
        test    eax, eax
        jnz     L_b5
        and     dword ptr [g_10075710], eax
        push    0x1
        pop     eax
        jmp     L_f5
    L_b5:
        lea     eax, [ebp - 0x78]
        push    eax
        push    dword ptr [g_1007570c]
        call    FUN_10037bf0
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_e8
        push    esi
        call    FUN_1004047a
        test    eax, eax
        pop     ecx
        jz      L_e8
        or      dword ptr [g_10075710], 0x4
        mov     dword ptr [g_10075714], esi
        mov     dword ptr [g_100756f8], esi
    L_e8:
        mov     eax, dword ptr [g_10075710]
        not     eax
        shr     eax, 0x2
        and     eax, 0x1
    L_f5:
        pop     esi
        leave
        ret     0x4
    }
}
