/*
 * 86 bytes — __thiscall constructor.
 * Calls an init function with 4 stack params, zeroes several fields,
 * sets vtable pointer, returns this.
 * ret 0x10 (4 stack params).
 */

void FUN_005E6CF0(void);

__declspec(naked) void FUN_0059A730(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10] /* arg4 */
        mov     edx, dword ptr [esp + 8]    /* arg2 */
        push    esi
        push    eax                         /* push arg4 */
        mov     eax, dword ptr [esp + 0xC]  /* arg1 (after 2 pushes) */
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14] /* arg3 (after 2 pushes) */
        push    ecx                         /* push arg3 */
        push    edx                         /* push arg2 */
        push    eax                         /* push arg1 */
        mov     ecx, esi
        call    FUN_005E6CF0
        xor     eax, eax
        mov     dword ptr [esi + 0x220], eax
        mov     dword ptr [esi + 0x228], eax
        mov     dword ptr [esi + 0x230], eax
        mov     dword ptr [esi + 0x224], eax
        mov     dword ptr [esi + 0x22C], eax
        mov     dword ptr [esi + 0x234], eax
        mov     byte ptr [esi + 0x240], al
        mov     dword ptr [esi], 0x7836A0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
