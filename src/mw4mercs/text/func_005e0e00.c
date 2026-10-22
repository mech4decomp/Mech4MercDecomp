/*
 * FUN_005e0e00 (109 B) — __fastcall, ECX = this (ESI)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e0e00(void)
{
    __asm {
        _emit 0xA1              /* mov eax,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        _emit 0x8B              /* mov edx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x15
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ecx + 0x20]
        xor edx, 0x85739531
        mov al, byte ptr [edx + 0x2a0]
        test al, al
        push edi
        jz label_ret0
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005df620 */
        _emit 0xF3
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        mov ecx, esi
        mov edi, eax
        _emit 0xE8              /* call rel32 -> absolute target 0x005dfd80 */
        _emit 0x4A
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        cmp eax, 0x8
        jnz label_0e4c
        mov eax, dword ptr [edi + 0x4cc]
        push eax
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0670 */
        _emit 0x27
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        pop edi
        pop esi
        ret
label_0e4c:
        mov edi, dword ptr [edi + 0x4cc]
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005dfd80 */
        _emit 0x27
        _emit 0xEF
        _emit 0xFF
        _emit 0xFF
        cmp edi, eax
        jz label_ret0
        push edi
        mov ecx, esi
        _emit 0xE8              /* call rel32 -> absolute target 0x005e0670 */
        _emit 0x0B
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        pop edi
        pop esi
        ret
label_ret0:
        pop edi
        xor al, al
        pop esi
        ret
    }
}
