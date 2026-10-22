/*
 * FUN_006E2AC0 (85 B) — Wide string setter: copies a wide string into
 * the buffer. Calls wcslen, allocates, copies via FUN_006E3110.
 *
 * __thiscall (ECX = this), RET 4 (1 param: wchar_t*).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int * FUN_006e27b0(void);
extern void FUN_006e2890(int);
extern void __cdecl FUN_006e3110(void *, void *, int);
extern void FUN_006e2f20(int);

__declspec(naked) void __stdcall FUN_006e2ac0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        call    FUN_006e27b0
        mov     ebx, dword ptr [esp + 0xC]
        test    ebx, ebx
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi], eax
        jz      l_done
        push    ebx
        _emit   0xFF
        _emit   0x15
        _emit   0x04
        _emit   0xB4
        _emit   0x76
        _emit   0x00
        add     esp, 4
        test    eax, eax
        jz      l_done
        push    edi
        lea     edi, [eax + eax]
        push    edi
        mov     ecx, esi
        call    FUN_006e2890
        mov     ecx, dword ptr [esi]
        inc     edi
        push    edi
        push    ebx
        push    ecx
        call    FUN_006e3110
        add     esp, 0xC
        push    -1
        mov     ecx, esi
        call    FUN_006e2f20
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    l_done:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
