/*
 * FUN_006F5E00 (78 B) — String comparison and field assignment.
 *
 * __cdecl, RET 12 (3 params). If param3+0x30 and param3+0x34 are both
 * non-null, calls FUN_006F5D90(param1+1, param3+0x30). If the result
 * is non-null and _stricmp(result+4, param3+0x34) == 0, sets
 * param3+0x38 = param1[0] and returns 0. Otherwise returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f5d90(int, int);

__declspec(naked) void __cdecl FUN_006f5e00(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ebx + 0x30]
        test    eax, eax
        push    esi
        push    edi
        jz      l_fail
        mov     esi, dword ptr [ebx + 0x34]
        test    esi, esi
        jz      l_fail
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        lea     eax, [edi + 4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      l_success
        mov     ecx, dword ptr [eax + 4]
        push    esi
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0xAC
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 8
        test    eax, eax
        jnz     l_success
        mov     edx, dword ptr [edi]
        mov     dword ptr [ebx + 0x38], edx
    l_fail:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0xC
    l_success:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret     0xC
    }
}
