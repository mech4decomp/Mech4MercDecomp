/*
 * FUN_006E2B60 (91 B) — Reference-counted string assignment with
 * InterlockedIncrement. If the two pointers differ, either copies
 * via FUN_006E2B20 (if non-refcounted) or increments refcount.
 *
 * __thiscall (ECX = this), RET 4 (1 param: int*). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006e2b20(int, int);
extern void FUN_006e28e0(void);

__declspec(naked) void __stdcall FUN_006e2b60(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [ecx]
        cmp     eax, edi
        jz      l_done
        mov     ecx, dword ptr [eax - 0xC]
        test    ecx, ecx
        jge     l_check_other
        _emit   0x8B
        _emit   0x0D
        _emit   0x34
        _emit   0x69
        _emit   0x7B
        _emit   0x00
        add     eax, -0xC
        cmp     eax, ecx
        jnz     l_copy
    l_check_other:
        mov     eax, dword ptr [edi - 0xC]
        test    eax, eax
        lea     ebx, [edi - 0xC]
        jge     l_increment
    l_copy:
        mov     edx, dword ptr [edi - 8]
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_006e2b20
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    l_increment:
        mov     ecx, esi
        call    FUN_006e28e0
        push    ebx
        mov     dword ptr [esi], edi
        _emit   0xFF
        _emit   0x15
        _emit   0x20
        _emit   0xB1
        _emit   0x76
        _emit   0x00
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
