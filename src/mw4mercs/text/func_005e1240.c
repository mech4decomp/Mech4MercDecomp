/*
 * FUN_005e1240 (138 B) — __fastcall, ECX = this
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall func_005e1240(void)
{
    __asm {
        push esi
        mov esi, dword ptr [ecx + 0x44c]
        cmp esi, 0x8
        jz label_1279
        _emit 0xA1              /* mov eax,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        _emit 0x8B              /* mov ecx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        jz label_12c6
        mov ecx, dword ptr [eax + 0xc]
        push esi
        xor ecx, 0x85739531
        _emit 0xE8              /* call rel32 -> absolute target 0x00545660 */
        _emit 0xEB
        _emit 0x43
        _emit 0xF6
        _emit 0xFF
        test al, al
        jz label_12c6
label_1279:
        _emit 0x8B              /* mov edx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x15
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        _emit 0x8B              /* mov ecx,[imm32] encoded as immediate load by MSVC6 */
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov eax, dword ptr [edx]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x20]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx + 0x29c]
        cmp eax, 0x3
        ja label_12c6
        jmp dword ptr [eax*4 + 0x5e12cc]
label_12a4:
        test esi, esi
        jl label_12b4
        cmp esi, 0x7
        jg label_12b4
        mov eax, 0x1
        pop esi
        ret
label_12b4:
        xor eax, eax
        pop esi
        ret
label_12b8:
        xor eax, eax
        cmp esi, 0x8
        setz al
        pop esi
        ret
label_12c2:
        mov al, 0x1
        pop esi
        ret
label_12c6:
        xor al, al
        pop esi
        ret
    }
}
