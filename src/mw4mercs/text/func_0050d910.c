/*
 * FUN_0050D910 (69 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d910(void)
{
    __asm {
        push ebx
        push ebp
        mov ebp, [esp+0x14]
        push esi
        xor esi, esi
        test ebp, ebp
        push edi
        jle return_zero
loop_top:
        mov edi, [esp+0x18]
        mov ebx, [esp+0x20]
        mov eax, [esp+0x14]
        push edi
        push eax
        call dword ptr [esp+0x2C]
        add esp, 0x08
        test eax, eax
        jz found
        inc esi
        add edi, ebx
        cmp esi, ebp
        /* __emit: MSVC6 computes wrong branch offset (7C E0) for jl loop_top; reference is 7C E8 */
        __asm _emit 0x7C
        __asm _emit 0xE8
return_zero:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret
found:
        mov ecx, [esp+0x18]
        mov eax, esi
        imul eax, ebx
        pop edi
        pop esi
        pop ebp
        add eax, ecx
        pop ebx
        ret
    }
}
