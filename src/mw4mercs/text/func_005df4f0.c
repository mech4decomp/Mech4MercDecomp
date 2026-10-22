/*
 * FUN_005df4f0 (256 B) — __thiscall site-flag loader
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df4f0(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov esi, dword ptr [esp + 0x18]
        cmp eax, esi
        jz L5e8
        lea ebx, [edi + 0x42c]
L50e:
        test esi, esi
        jnz L518
        mov dword ptr [edi + 0x488], esi
L518:
        mov ecx, ebx
        _emit 0xE8          /* call 0x0041fcb0 */
        _emit 0x91
        _emit 0x07
        _emit 0xE4
        _emit 0xFF
        test esi, esi
        jz L5e8
        cmp byte ptr [edi + 0x41c], 0x1
        jnz L5e8
        push 0x0
        _emit 0xE8          /* call 0x00707e70 */
        _emit 0x35
        _emit 0x89
        _emit 0x12
        _emit 0x00
        fstp qword ptr [edi + 0x424]
        push esi
        mov ecx, ebx
        _emit 0xE8          /* call 0x0041fcd0 */
        _emit 0x87
        _emit 0x07
        _emit 0xE4
        _emit 0xFF
        push 0x788894
        lea ecx, [esp + 0x1c]
        _emit 0xE8          /* call 0x00412570 */
        _emit 0x19
        _emit 0x30
        _emit 0xE3
        _emit 0xFF
        lea eax, [esp + 0x18]
        add esi, 0x28c
        push eax
        mov ecx, esi
        _emit 0xE8          /* call 0x00416b60 */
        _emit 0xF7
        _emit 0x75
        _emit 0xE3
        _emit 0xFF
        mov ebp, eax
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jz L586
        mov cl, byte ptr [eax - 0x1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L586
        push eax
        _emit 0xE8          /* call 0x004084e0 */
        _emit 0x5D
        _emit 0x8F
        _emit 0xE2
        _emit 0xFF
        add esp, 0x4
L586:
        test ebp, ebp
        mov dword ptr [edi + 0x434], ebp
        jnz L5cd
        push 0x782330
        lea ecx, [esp + 0x14]
        _emit 0xE8          /* call 0x00412570 */
        _emit 0xD2
        _emit 0x2F
        _emit 0xE3
        _emit 0xFF
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, esi
        _emit 0xE8          /* call 0x00416b60 */
        _emit 0xB6
        _emit 0x75
        _emit 0xE3
        _emit 0xFF
        mov esi, eax
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jz L5c7
        mov cl, byte ptr [eax - 0x1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L5c7
        push eax
        _emit 0xE8          /* call 0x004084e0 */
        _emit 0x1C
        _emit 0x8F
        _emit 0xE2
        _emit 0xFF
        add esp, 0x4
L5c7:
        mov dword ptr [edi + 0x434], esi
L5cd:
        mov eax, dword ptr [edi + 0x434]
        test eax, eax
        jnz L5e8
        mov ecx, edi
        xor esi, esi
        _emit 0xE8          /* call 0x005df620 */
        _emit 0x40
        _emit 0x00
        _emit 0x00
        _emit 0x00
        test eax, eax
        jnz L50e
L5e8:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x4
    }
}
