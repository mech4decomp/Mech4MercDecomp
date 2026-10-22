/*
 * __aullrem (117 B) - statically-linked CRT 64-bit unsigned remainder helper.
 * __stdcall, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned __int64 __aullrem(void)
{
    __asm {
        push ebx
        mov eax, dword ptr [esp+0x14]
        or eax, eax
        jnz L40d1
        mov ecx, dword ptr [esp+0x10]
        mov eax, dword ptr [esp+0xc]
        xor edx, edx
        div ecx
        mov eax, dword ptr [esp+0x8]
        div ecx
        mov eax, edx
        xor edx, edx
        jmp L4121
    L40d1:
        mov ecx, eax
        mov ebx, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0xc]
        mov eax, dword ptr [esp+0x8]
    L40df:
        shr ecx, 1
        rcr ebx, 1
        shr edx, 1
        rcr eax, 1
        or ecx, ecx
        jnz L40df
        div ebx
        mov ecx, eax
        mul dword ptr [esp+0x14]
        xchg eax, ecx
        mul dword ptr [esp+0x10]
        add edx, ecx
        jc L410a
        cmp edx, dword ptr [esp+0xc]
        ja L410a
        jc L4112
        cmp eax, dword ptr [esp+0x8]
        jbe L4112
    L410a:
        sub eax, dword ptr [esp+0x10]
        sbb edx, dword ptr [esp+0x14]
    L4112:
        sub eax, dword ptr [esp+0x8]
        sbb edx, dword ptr [esp+0xc]
        neg edx
        neg eax
        sbb edx, 0
    L4121:
        pop ebx
        ret 0x10
    }
}
