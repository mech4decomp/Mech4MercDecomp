/*
 * func_005005F0 - 123 bytes
 * String comparison / lookup function
 */
extern void __cdecl FUN_00500510(void);
extern void __cdecl FUN_005005c0(void);

extern int *DAT_0076b318;   /* IAT entry (atoi) at 0x0076B318 */

__declspec(naked) void func_005005F0()
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp + 0x14]
        mov     esi, 0x0076B864
        mov     eax, edi
loop_start:
        mov     dl, [eax]
        mov     bl, [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     mismatch
        test    cl, cl
        jz      match
        mov     dl, [eax + 1]
        mov     bl, [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     mismatch
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     loop_start
match:
        xor     eax, eax
        jmp     check_result
mismatch:
        sbb     eax, eax
        sbb     eax, -1
check_result:
        test    eax, eax
        jnz     try_other
        mov     eax, [esp + 0x10]
        push    eax
        call    FUN_00500510
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret
try_other:
        mov     ecx, [esp + 0x10]
        push    edi
        push    ecx
        call    FUN_005005c0
        add     esp, 8
        test    eax, eax
        jnz     call_vtable
        mov     eax, [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        ret
call_vtable:
        mov     edx, [eax + 4]
        push    edx
        call    dword ptr [DAT_0076b318]
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
