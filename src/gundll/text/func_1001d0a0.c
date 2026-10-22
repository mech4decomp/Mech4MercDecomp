/*
 * FUN_1001d0a0 (43 B) — __thiscall.
 * If (this->count_208 < 0x80) store param_1 at this->arr[count_208] and
 * increment count; else return 0xc1121c05. Returns 0 on success.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001d0a0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x208]
        xor     eax, eax
        cmp     edx, 0x80
        jb      store
        mov     eax, 0xc1121c05
        ret     0x4
    store:
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        inc     dword ptr [ecx + 0x208]
        pop     esi
        ret     0x4
    }
}
