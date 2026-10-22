/*
 * FUN_1002e6a0 (35 B) — __fastcall.
 * If *(short*)this->field_8 == 0x3c:
 *   this->field_30 = (this->field_8 - this->field_2C) >> 1;
 *   this->field_0 = 7; return 9;
 * else return 0xb.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1002e6a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        cmp     word ptr [eax], 0x3c
        jnz     ret_b
        sub     eax, dword ptr [ecx + 0x2c]
        sar     eax, 0x1
        mov     dword ptr [ecx + 0x30], eax
        mov     dword ptr [ecx], 0x7
        mov     eax, 0x9
        ret
    ret_b:
        mov     eax, 0xb
        ret
    }
}
