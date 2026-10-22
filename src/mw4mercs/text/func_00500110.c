/*
 * FUN_00500110 (50 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* External functions */
extern int __cdecl FUN_0050d680(void *ptr);
extern void *__cdecl FUN_0050d690(void *ptr, int index);

__declspec(naked) void func_00500110(void)
{
    __asm {
        push esi
        push edi
        mov edi, [esp+0x10]
        test edi, edi
        jl skip_return_zero
        mov eax, [esp+0x0c]
        mov esi, [eax+0x04]
        push esi
        call FUN_0050d680
        add esp, 0x04
        cmp edi, eax
        jge skip_return_zero
        push edi
        push esi
        call FUN_0050d690
        mov eax, [eax]
        add esp, 0x08
        pop edi
        pop esi
        ret
skip_return_zero:
        pop edi
        xor eax, eax
        pop esi
        ret
    }
}
