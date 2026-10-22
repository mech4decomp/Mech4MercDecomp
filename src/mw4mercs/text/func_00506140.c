/*
 * FUN_00506140 (29 B) — Getter with null/negative check
 * Checks if [ecx+0x54] != -1 and [ecx] > [ecx+0x54], then calls 0x00722661
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00506140(void)
{
    

extern void __cdecl FUN_0072264e(void);
__asm {
mov eax, [ecx+0x54]
        cmp eax, -1
        jnz check_range
        xor al, al
        ret
check_range:
        cmp [ecx], eax
        jg call_func
        xor al, al
        ret
call_func:
        push eax
        mov eax, [ecx+0x38]
        push eax
        call FUN_0072264e
        ret
    }


}
