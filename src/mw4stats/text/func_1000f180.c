/*
 * FUN_1000f180 (34 B) - __thiscall. Computes wcslen(param_1)<<1 and forwards
 * (this, param_1, len) to FUN_1000f210.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* wcslen IAT @ 0x100210f4 */
extern void FUN_1000f210(void);

__declspec(naked) void FUN_1000f180(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        mov     ecx, esi
        shl     eax, 0x1
        push    eax
        push    edi
        call    FUN_1000f210
        pop     edi
        pop     esi
        ret     0x4
    }
}
