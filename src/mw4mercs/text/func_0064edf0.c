/*
 * FUN_0064edf0 (55 B) — __cdecl, RET (one param, no stack cleanup).
 * Dispatches on [param+0x1c]: 0 -> FUN_0064f060, 1 -> FUN_0064ee70,
 * else -> (*g_0080590c)(param) if set, otherwise 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0080590c;
extern void *__cdecl FUN_0064f060(void *param);
extern void *__cdecl FUN_0064ee70(void *param);

__declspec(naked) void *__cdecl FUN_0064edf0(void *param)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x1c]
        test    eax, eax
        jnz     L_case1
        push    ecx
        call    FUN_0064f060
        add     esp, 0x4
        ret
    L_case1:
        cmp     eax, 0x1
        jnz     L_case2
        push    ecx
        call    FUN_0064ee70
        add     esp, 0x4
        ret
    L_case2:
        mov     eax, dword ptr [g_0080590c]
        test    eax, eax
        jz      L_zero
        push    ecx
        call    eax
        add     esp, 0x4
        ret
    L_zero:
        xor     eax, eax
        ret
    }
}
