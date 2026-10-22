/* FUN_00591060 - __thiscall, 30 bytes */
/* Zeros field_48..field_50, copies field_34->field_40, field_30->field_3C, field_38->field_44 */

__declspec(naked) void FUN_00591060(void)
{
    __asm {
        mov     edx, [ecx + 0x34]    /* edx = this->field_34 */
        xor     eax, eax             /* eax = 0 */
        mov     [ecx + 0x48], eax    /* this->field_48 = 0 */
        mov     [ecx + 0x4C], eax    /* this->field_4C = 0 */
        mov     [ecx + 0x50], eax    /* this->field_50 = 0 */
        mov     [ecx + 0x40], edx    /* this->field_40 = this->field_34 */
        mov     eax, [ecx + 0x30]    /* eax = this->field_30 */
        mov     edx, [ecx + 0x38]    /* edx = this->field_38 */
        mov     [ecx + 0x3C], eax    /* this->field_3C = this->field_30 */
        mov     [ecx + 0x44], edx    /* this->field_44 = this->field_38 */
        ret
    }
}
