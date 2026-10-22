/*
 * FUN_005df810 (294 B) — __fastcall site-flag dispatch
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df810(void)
{
    __asm {
        sub esp, 0x8
        _emit 0xA1          /* mov eax,[0x007dab44] — mov reg,[imm32] not encodable */
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push ebx
        push ebp
        push esi
        push edi
        _emit 0x8B          /* mov edi,[0x007dab40] — mov reg,[imm32] not encodable */
        _emit 0x3D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov esi, ecx
        mov ecx, dword ptr [eax]
        xor ecx, edi
        mov edi, dword ptr [ecx + 0x10]
        xor edi, 0x85739531
        mov eax, dword ptr [edi + 0x1c]
        test eax, eax
        mov dword ptr [esp + 0x10], 0x0
        jle L88c
        mov ebp, dword ptr [edi + 0x18]
        add ebp, 0x14
L846:
        mov ecx, dword ptr [ebp]
        _emit 0xE8          /* call 0x0041fd80 */
        _emit 0x32
        _emit 0x05
        _emit 0xE4
        _emit 0xFF
        mov ebx, eax
        test ebx, ebx
        jz L879
        push ebx
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0960 */
        _emit 0x04
        _emit 0x11
        _emit 0x00
        _emit 0x00
        test al, al
        jz L879
        mov eax, dword ptr [esi + 0x448]
        mov edx, dword ptr [esi]
        push 0x1
        push eax
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x5c]
        cmp al, 0x1
        jz L910
L879:
        mov eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [edi + 0x1c]
        inc eax
        add ebp, 0x1c
        cmp eax, ecx
        mov dword ptr [esp + 0x10], eax
        jl L846
L88c:
        mov ebx, dword ptr [edi + 0x2c]
        test ebx, ebx
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x10], 0x0
        jle L92e
        mov ebp, dword ptr [edi + 0x28]
        add ebp, 0x14
L8a9:
        mov ecx, dword ptr [ebp]
        _emit 0xE8          /* call 0x0041fd80 */
        _emit 0xCF
        _emit 0x04
        _emit 0xE4
        _emit 0xFF
        mov edi, eax
        test edi, edi
        jz L8f8
        _emit 0xA1          /* mov eax,[0x007dc890] — mov reg,[imm32] not encodable */
        _emit 0x90
        _emit 0xC8
        _emit 0x7D
        _emit 0x00
        mov ecx, dword ptr [edi + 0x4]
        push eax
        _emit 0xE8          /* call 0x00415230 */
        _emit 0x6B
        _emit 0x59
        _emit 0xE3
        _emit 0xFF
        cmp al, 0x1
        jnz L8f8
        mov ebx, dword ptr [edi + 0x170]
        test ebx, ebx
        jz L8f4
        push ebx
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0960 */
        _emit 0x85
        _emit 0x10
        _emit 0x00
        _emit 0x00
        test al, al
        jz L8f4
        mov eax, dword ptr [esi + 0x448]
        mov edx, dword ptr [esi]
        push 0x1
        push eax
        push ebx
        mov ecx, esi
        call dword ptr [edx + 0x5c]
        cmp al, 0x1
        jz L920
L8f4:
        mov ebx, dword ptr [esp + 0x14]
L8f8:
        mov eax, dword ptr [esp + 0x10]
        inc eax
        add ebp, 0x1c
        cmp eax, ebx
        mov dword ptr [esp + 0x10], eax
        jl L8a9
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
L910:
        push ebx
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0b50 */
        _emit 0x38
        _emit 0x12
        _emit 0x00
        _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
L920:
        mov ecx, dword ptr [edi + 0x170]
        push ecx
        mov ecx, esi
        _emit 0xE8          /* call 0x005e0b50 */
        _emit 0x22
        _emit 0x12
        _emit 0x00
        _emit 0x00
L92e:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret
    }
}
