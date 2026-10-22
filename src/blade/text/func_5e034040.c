/*
 * __aulldiv (104 B) - statically-linked CRT 64-bit unsigned divide helper.
 * __stdcall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned __int64 __aulldiv(void)
{
    __asm {
        push ebx
        push esi
        mov eax, dword ptr [esp+0x18]
        or eax, eax
        jnz L4062
        mov ecx, dword ptr [esp+0x14]
        mov eax, dword ptr [esp+0x10]
        xor edx, edx
        div ecx
        mov ebx, eax
        mov eax, dword ptr [esp+0xc]
        div ecx
        mov edx, ebx
        jmp L40a3
    L4062:
        mov ecx, eax
        mov ebx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+0x10]
        mov eax, dword ptr [esp+0xc]
    L4070:
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jnz L4070
        div ebx
        mov esi, eax
        mul dword ptr [esp+0x18]
        mov ecx, eax
        mov eax, dword ptr [esp+0x14]
        mul esi
        add edx, ecx
        jc L409e
        cmp edx, dword ptr [esp+0x10]
        ja L409e
        jc L409f
        cmp eax, dword ptr [esp+0xc]
        jbe L409f
    L409e:
        dec esi
    L409f:
        xor edx, edx
        mov eax, esi
    L40a3:
        pop esi
        pop ebx
        ret 0x10
    }
}
