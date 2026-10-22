/*
 * FUN_0050DC90 (54 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050dc90(void)
{
    

extern void __cdecl FUN_10050d612(void);
extern int DAT_0076b2d0;
__asm {
push ebx
        mov ebx, [esp+0x08]
        push esi
        push edi
        mov edi, [ebx+0x04]
        test edi, edi
        jle call_free
        mov esi, [ebx]
loop_top:
        mov eax, [esi]
        push eax
        call FUN_10050d612
        add esp, 0x04
        add esi, 0x04
        dec edi
        jnz loop_top
call_free:
        mov ecx, [ebx]
        mov esi, dword ptr [DAT_0076b2d0]
        push ecx
        call esi
        push ebx
        call esi
        add esp, 0x08
        pop edi
        pop esi
        pop ebx
        ret
    }


}
