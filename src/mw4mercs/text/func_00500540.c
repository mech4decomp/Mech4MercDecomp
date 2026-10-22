/*
 * FUN_00500540 (113 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* External functions */
extern void *__cdecl FUN_00500520(void *param);
extern void *__cdecl FUN_005005c0(void *a, void *b);

__declspec(naked) void func_00500540(void)
{
    __asm {
        push ebx
        push esi
        push edi
        mov edi, [esp+0x14]
        mov esi, 0x00776264
        mov eax, edi
loop_start:
        mov dl, [eax]
        mov bl, [esi]
        mov cl, dl
        cmp dl, bl
        jnz mismatch
        test cl, cl
        jz match
        mov dl, [eax+0x01]
        mov bl, [esi+0x01]
        mov cl, dl
        cmp dl, bl
        jnz mismatch
        add eax, 0x02
        add esi, 0x02
        test cl, cl
        jnz loop_start
match:
        xor eax, eax
        jmp check_result
mismatch:
        sbb eax, eax
        sbb eax, -1
check_result:
        test eax, eax
        jnz try_alternate
        mov eax, [esp+0x10]
        push eax
        call FUN_00500520
        add esp, 0x04
        pop edi
        pop esi
        pop ebx
        ret
try_alternate:
        mov ecx, [esp+0x10]
        push edi
        push ecx
        call FUN_005005c0
        add esp, 0x08
        test eax, eax
        jnz return_field
        mov eax, [esp+0x18]
        pop edi
        pop esi
        pop ebx
        ret
return_field:
        mov eax, [eax+0x04]
        pop edi
        pop esi
        pop ebx
        ret
    }
}
