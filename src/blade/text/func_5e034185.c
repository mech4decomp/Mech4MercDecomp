/*
 * FUN_5e034185 (125 B) - string-table lookup. Searches the DAT_5e77a8a4
 * table for an entry whose prefix matches param_1 (case-insensitive via
 * __mbsnbicoll), returning a pointer past the matched prefix.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77af44;
extern char *g_5e77a8a4;
extern char *g_5e77a8ac;

extern void __cdecl FUN_5e034241(void);
extern int FUN_5e02e6b0(char *);
extern int __cdecl __mbsnbicoll(char *, char *, int);

__declspec(naked) void FUN_5e034185(void)
{
    __asm {
        cmp dword ptr [g_5e77af44], 0
        push ebx
        push esi
        mov esi, dword ptr [g_5e77a8a4]
        push edi
        jz L41fc
        test esi, esi
        jnz L41b6
        cmp dword ptr [g_5e77a8ac], esi
        jz L41fc
        call FUN_5e034241
        test eax, eax
        jnz L41fc
        mov esi, dword ptr [g_5e77a8a4]
        test esi, esi
        jz L41fc
    L41b6:
        mov ebx, dword ptr [esp+0x10]
        test ebx, ebx
        jz L41fc
        push ebx
        call FUN_5e02e6b0
        pop ecx
        mov edi, eax
    L41c7:
        mov eax, dword ptr [esi]
        test eax, eax
        jz L41fc
        push eax
        call FUN_5e02e6b0
        cmp eax, edi
        pop ecx
        jbe L41ef
        mov eax, dword ptr [esi]
        cmp byte ptr [eax+edi*1], 0x3d
        jnz L41ef
        push edi
        push ebx
        push eax
        call __mbsnbicoll
        add esp, 0xc
        test eax, eax
        jz L41f4
    L41ef:
        add esi, 4
        jmp L41c7
    L41f4:
        mov eax, dword ptr [esi]
        lea eax, [eax+edi*1+1]
        jmp L41fe
    L41fc:
        xor eax, eax
    L41fe:
        pop edi
        pop esi
        pop ebx
        ret
    }
}
