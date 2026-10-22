/*
 * FUN_10040280 (189 B) — __stdcall, RET 0x4.
 * Registry/state helper: calls an IAT function, validates, and returns
 * ~g_10075710 >> 2 & 1.
 */

extern void __cdecl FUN_10040617(void);
extern void __cdecl FUN_10037bf0(void);
extern void __cdecl FUN_10043b70(void);
extern void __cdecl FUN_10040499(void);
extern void *g_10075718;   /* IAT */

extern int g_10075704;
extern int g_10075710;
extern int g_10075708;
extern int g_10075700;
extern int g_10075714;
extern int g_100756f8;

__declspec(naked) void __stdcall FUN_10040280(void)
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
        mov     eax, dword ptr [g_10075704]
        neg     eax
        sbb     eax, eax
        and     ax, 0xf002
        add     eax, 0x1001
        push    eax
        push    esi
        call    dword ptr [g_10075718]
        test    eax, eax
        jnz     L_2c1
        and     dword ptr [g_10075710], eax
        push    1
        pop     eax
        jmp     L_338
    L_2c1:
        lea     eax, [ebp - 0x78]
        push    eax
        push    dword ptr [g_10075708]
        call    FUN_10037bf0
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_2e2
        cmp     dword ptr [g_10075704], eax
        jnz     L_318
        push    1
        jmp     L_30c
    L_2e2:
        cmp     dword ptr [g_10075704], 0
        jnz     L_32b
        mov     eax, dword ptr [g_10075700]
        test    eax, eax
        jz      L_32b
        push    eax
        lea     eax, [ebp - 0x78]
        push    eax
        push    dword ptr [g_10075708]
        call    FUN_10043b70
        add     esp, 0xc
        test    eax, eax
        jnz     L_32b
        push    eax
    L_30c:
        push    esi
        call    FUN_10040499
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_32b
    L_318:
        or      dword ptr [g_10075710], 4
        mov     dword ptr [g_10075714], esi
        mov     dword ptr [g_100756f8], esi
    L_32b:
        mov     eax, dword ptr [g_10075710]
        not     eax
        shr     eax, 2
        and     eax, 1
    L_338:
        pop     esi
        leave
        ret     4
    }
}
