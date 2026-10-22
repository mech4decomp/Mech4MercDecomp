/*
 * FUN_5e034241 (110 B) - wide-char string table initializer. Converts each
 * wide string in the DAT_5e77a8ac table to multibyte via WideCharToMultiByte
 * and registers it with FUN_5e034557.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_5e77a8ac;
extern int *g_5e035078;   /* IAT: WideCharToMultiByte */

extern void *FUN_5e02b6e4(int);
extern void __cdecl FUN_5e034557(void);

__declspec(naked) void FUN_5e034241(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [g_5e77a8ac]
        push edi
        xor edi, edi
    L424e:
        mov eax, dword ptr [esi]
        cmp eax, edi
        jz L42a2
        mov ebx, dword ptr [g_5e035078]
    L425a:
        push edi
        push edi
        push edi
        push edi
        push -1
        push eax
        push edi
        push 1
        call ebx
        mov ebp, eax
        cmp ebp, edi
        jz L42aa
        push ebp
        call FUN_5e02b6e4
        cmp eax, edi
        pop ecx
        mov dword ptr [esp+0x10], eax
        jz L42aa
        push edi
        push edi
        push ebp
        push eax
        push -1
        push dword ptr [esi]
        push edi
        push 1
        call ebx
        test eax, eax
        jz L42aa
        push edi
        push dword ptr [esp+0x14]
        call FUN_5e034557
        mov eax, dword ptr [esi+4]
        add esi, 4
        pop ecx
        cmp eax, edi
        pop ecx
        jnz L425a
    L42a2:
        xor eax, eax
    L42a4:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    L42aa:
        or eax, 0xffffffff
        jmp L42a4
    }
}
