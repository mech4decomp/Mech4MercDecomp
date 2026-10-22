/*
 * FUN_0053C0F0 (45 B) — __stdcall method.
 * Computes index: eax = arg * 0x3F8 (shift-add pattern),
 * then eax = ecx + eax*8. Checks byte at [eax+0x353B].
 * If != 1, sets bytes at [eax+0x353A] and [eax+0x3542] to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_0053C0F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        lea     eax, [ecx + edx * 8]
        cmp     byte ptr [eax + 0x353B], 1
        je      label_ret
        xor     cl, cl
        mov     byte ptr [eax + 0x353A], cl
        mov     byte ptr [eax + 0x3542], cl
label_ret:
        ret     8
    }
}
