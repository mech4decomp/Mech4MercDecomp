/*
 * FUN_004CEC70 (44 B) — Thiscall helper with max update.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00417530(void *this, void *param);
extern void FUN_004cecd0(void *this, void *param);

__declspec(naked) void FUN_004cec70(void *param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx

        push    edi
        lea     ecx, [esi + 0x14]
        call    FUN_00417530

        mov     ax, word ptr [edi + 0x16]
        cmp     ax, word ptr [esi + 0x36]
        jbe     l_skip_update
        mov     word ptr [esi + 0x36], ax

    l_skip_update:
        push    edi
        mov     ecx, esi
        call    FUN_004cecd0

        pop     edi
        pop     esi
        ret     4
    }
}
