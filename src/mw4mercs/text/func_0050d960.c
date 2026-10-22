/*
 * FUN_0050D960 (80 B) — Binary search function
 * Searches an array using a comparison callback
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0050d960(void)
{
    __asm {
        mov eax, [esp+0x0C]
        push ebx
        push ebp
        mov ebp, [esp+0x18]
        push edi
        lea edi, [eax-0x01]
        xor ebx, ebx
        test edi, edi
        jl done
        push esi
loop_top:
        mov ecx, [esp+0x14]
        lea esi, [edi+ebx]
        sar esi, 0x01
        mov edx, esi
        imul edx, ebp
        push ecx
        add edx, [esp+0x1C]
        push edx
        call dword ptr [esp+0x2C]
        add esp, 0x08
        test eax, eax
        jge check_upper
        lea ebx, [esi+0x01]
        jmp check_bounds
check_upper:
        lea edi, [esi-0x01]
check_bounds:
        cmp ebx, edi
        jle loop_top
        pop esi
done:
        mov ecx, [esp+0x14]
        mov eax, ebx
        imul eax, ebp
        pop edi
        pop ebp
        add eax, ecx
        pop ebx
        ret
    }
}
