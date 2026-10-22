/* FUN_00590F90 - __thiscall, 142 bytes */
/* Copies 15 stack parameters into object fields, RET 0x3C */

__declspec(naked) void FUN_00590F90(void)
{
    __asm {
        mov     eax, [esp + 8]       /* eax = param_2 */
        mov     edx, [esp + 4]       /* edx = param_1 */
        mov     [ecx + 4], eax       /* this->field_04 = param_2 */
        mov     eax, [esp + 0xC]     /* eax = param_3 */
        mov     [ecx], edx           /* this->field_00 = param_1 */
        mov     edx, [esp + 0x14]    /* edx = param_5 */
        mov     [ecx + 8], eax       /* this->field_08 = param_3 */
        mov     eax, [esp + 0x10]    /* eax = param_4 */
        mov     [ecx + 0x10], edx    /* this->field_10 = param_5 */
        mov     edx, [esp + 0x18]    /* edx = param_6 */
        mov     [ecx + 0xC], eax     /* this->field_0C = param_4 */
        mov     eax, [esp + 0x20]    /* eax = param_8 */
        mov     [ecx + 0x14], edx    /* this->field_14 = param_6 */
        mov     edx, [esp + 0x1C]    /* edx = param_7 */
        mov     [ecx + 0x1C], eax    /* this->field_1C = param_8 */
        mov     eax, [esp + 0x24]    /* eax = param_9 */
        mov     [ecx + 0x18], edx    /* this->field_18 = param_7 */
        mov     edx, [esp + 0x2C]    /* edx = param_11 */
        mov     [ecx + 0x20], eax    /* this->field_20 = param_9 */
        mov     eax, [esp + 0x28]    /* eax = param_10 */
        mov     [ecx + 0x34], edx    /* this->field_34 = param_11 */
        mov     edx, [esp + 0x30]    /* edx = param_12 */
        mov     [ecx + 0x30], eax    /* this->field_30 = param_10 */
        mov     eax, [ecx + 0x34]    /* eax = this->field_34 */
        mov     [ecx + 0x38], edx    /* this->field_38 = param_12 */
        mov     [ecx + 0x40], eax    /* this->field_40 = this->field_34 */
        mov     edx, [ecx + 0x30]    /* edx = this->field_30 */
        mov     eax, [ecx + 0x38]    /* eax = this->field_38 */
        mov     [ecx + 0x3C], edx    /* this->field_3C = this->field_30 */
        mov     edx, [esp + 0x38]    /* edx = param_14 */
        mov     [ecx + 0x44], eax    /* this->field_44 = this->field_38 */
        mov     eax, [esp + 0x34]    /* eax = param_13 */
        mov     [ecx + 0x28], edx    /* this->field_28 = param_14 */
        mov     edx, [esp + 0x3C]    /* edx = param_15 */
        mov     [ecx + 0x24], eax    /* this->field_24 = param_13 */
        lea     eax, [ecx + 0x48]    /* eax = &this->field_48 */
        mov     [ecx + 0x2C], edx    /* this->field_2C = param_15 */
        mov     byte ptr [ecx + 0x54], 1 /* this->field_54 = 1 */
        xor     ecx, ecx             /* ecx = 0 */
        mov     [eax], ecx           /* this->field_48 = 0 */
        mov     [eax + 4], ecx       /* this->field_4C = 0 */
        mov     [eax + 8], ecx       /* this->field_50 = 0 */
        ret     0x3C
    }
}
