/* FUN_005906E0 - __thiscall, 52 bytes */
/* Frees a pointer at this+0x8A4, zeros fields at +0x8A8, +0x8AC, +0x4D0 */

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005906E0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx               /* esi = this */
        mov     eax, [esi + 0x8A4]     /* eax = this->field_8A4 */
        xor     ebx, ebx               /* ebx = 0 */
        cmp     eax, ebx
        jz      skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     [esi + 0x8A4], ebx     /* this->field_8A4 = NULL */

skip_free:
        mov     [esi + 0x8A8], ebx     /* this->field_8A8 = 0 */
        mov     [esi + 0x8AC], ebx     /* this->field_8AC = 0 */
        mov     byte ptr [esi + 0x4D0], bl /* this->field_4D0 = 0 */
        pop     esi
        pop     ebx
        ret
    }
}
