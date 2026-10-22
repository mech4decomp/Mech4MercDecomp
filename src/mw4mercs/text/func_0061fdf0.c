/*
 * FUN_0061FDF0 (67 B) — __thiscall (ECX = this), plain RET.
 * Dispatches on global DAT_008058ac (2 or 0xe), calling FUN_0061fa00 /
 * FUN_0061fa40 / FUN_00649150 accordingly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00649150(void);
extern void __fastcall FUN_0061fa40(void);
extern void __fastcall FUN_0061fa00(void);
extern int g_8058ac;
extern int g_8050a0;
extern int g_8050a4;

__declspec(naked) int __fastcall FUN_0061fdf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        sub     eax, 0x2
        jz      l_case2
        sub     eax, 0xc
        jnz     l_ret
        mov     ecx, dword ptr [esi + 0x8]
        call    FUN_0061fa40
        xor     eax, eax
        pop     esi
        ret
    l_case2:
        mov     eax, dword ptr [g_8050a0]
        test    eax, eax
        jnz     l_call150
        mov     eax, dword ptr [g_8050a4]
        mov     ecx, dword ptr [esi + 0x8]
        push    eax
        call    FUN_0061fa00
    l_call150:
        call    FUN_00649150
    l_ret:
        xor     eax, eax
        pop     esi
        ret
    }
}
