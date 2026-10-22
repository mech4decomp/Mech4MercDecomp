/*
 * FUN_004933D0 (68 B) — __cdecl.
 * Reads version info via vtable method +0x20 twice, checks if version > 25,
 * and asserts if so.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *str);

__declspec(naked) int * FUN_004933d0(int *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp - 4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp + 8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, 0x19
        pop     esi
        jle     l_done
        push    0x7b2580
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip_int3
        int     3
l_skip_int3:
        mov     eax, dword ptr [ebp + 8]
l_done:
        mov     esp, ebp
        pop     ebp
        ret
    }
}
