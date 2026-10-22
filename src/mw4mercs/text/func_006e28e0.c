/*
 * FUN_006E28E0 (55 B) — String buffer refcount decrement.
 *
 * If the refcount header at (*param_1 - 0x0c) != global 0x007b6934,
 * decrements the refcount via InterlockedDecrement. If result < 1,
 * frees the header via free(). Then calls FUN_006e27b0 to get a new
 * empty buffer and stores it in *param_1.
 *
 * __fastcall (ECX = param_1), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_006e27b0(void);

__declspec(naked) void __fastcall FUN_006e28e0(void)
{
    __asm {
        _emit   0x8B
        _emit   0x15
        _emit   0x34
        _emit   0x69
        _emit   0x7B
        _emit   0x00
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        lea     ecx, dword ptr [eax - 0x0C]
        cmp     ecx, edx
        jz      l_skip_free
        push    esi
        lea     esi, dword ptr [eax - 0x0C]
        push    esi
        _emit   0xFF
        _emit   0x15
        _emit   0x24
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        test    eax, eax
        jg      l_skip_free2
        push    esi
        _emit   0xFF
        _emit   0x15
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        add     esp, 4
    l_skip_free2:
        call    FUN_006e27b0
        mov     edx, dword ptr [eax]
        mov     dword ptr [edi], edx
        pop     esi
    l_skip_free:
        pop     edi
        ret
    }
}
