/*
 * FUN_00502DF0 (59 B) — Switch/table lookup returning string pointers
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00502df0(void)
{
    __asm {
        mov eax, [esp+0x04]
        dec eax
        cmp eax, 0x05
        ja default_case
        jmp dword ptr [eax*4 + 0x502e2c]
case_0:
        mov eax, 0x007765C8
        ret
case_1:
        mov eax, 0x007765C0
        ret
case_2:
        mov eax, 0x007765B8
        ret
case_3:
        mov eax, 0x007765B0
        ret
case_4:
        mov eax, 0x007765A8
        ret
case_5:
        mov eax, 0x007765A0
        ret
default_case:
        mov eax, 0x00772C5C
        ret
    }
}
