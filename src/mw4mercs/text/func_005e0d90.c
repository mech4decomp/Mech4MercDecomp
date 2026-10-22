/*
 * FUN_005e0d90 (110 B) — __fastcall, ECX = this (ESI)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e0d90(void)
{
    __asm {
        push esi
        push edi
        mov esi, ecx
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x87
        _emit 0xE8
        _emit 0xFF
        _emit 0xFF
        mov eax, dword ptr [eax + 0x10]
        shr eax, 0x13
        and al, 0x1
        cmp al, 0x1
        jz label_ret0
        _emit 0x8B              /* mov edi,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x3D
        _emit 0x84
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x6E
        _emit 0xE8
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [eax + 0x4]
        push edi
        _emit 0xE8              /* call rel32 -> absolute target 0x00415230 */
        _emit 0x75
        _emit 0x44
        _emit 0xE3
        _emit 0xFF
        test al, al
        jz label_ret0
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005dfd80 */
        _emit 0xBA
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        cmp eax, 0x8
        jz label_0de3
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x4E
        _emit 0xE8
        _emit 0xFF
        _emit 0xFF
        mov edi, dword ptr [eax + 0x4cc]
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005dfd80 */
        _emit 0xA1
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        cmp edi, eax
        jz label_ret0
label_0de3:
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0x36
        _emit 0xE8
        _emit 0xFF
        _emit 0xFF
        mov ecx, eax
        _emit 0xE8              /* call rel32 -> absolute target 0x0058b5f0 */
        _emit 0xFF
        _emit 0xA7
        _emit 0xFA
        _emit 0xFF
        cmp al, 0x1
        pop edi
        setnz al
        pop esi
        ret
label_ret0:
        pop edi
        xor al, al
        pop esi
        ret
    }
}
