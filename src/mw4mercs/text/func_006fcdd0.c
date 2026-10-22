/*
 * FUN_006FCDD0 (111 B) — COM class factory helper.
 *
 * __cdecl, RET 0x10. Gets "DllGetClassObject" from a module,
 * calls it to get a class factory, then calls CreateInstance
 * on the factory. Returns HRESULT or GetLastError.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fcdd0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    0x7a0338
        push    eax
        mov     dword ptr [esp + 0xc], 0
        _emit   0xFF
        _emit   0x15
        _emit   0xC8
        _emit   0xB0
        _emit   0x76
        _emit   0x00
        test    eax, eax
        jnz     l_got_proc
        _emit   0xFF
        _emit   0x15
        _emit   0xF8
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        pop     esi
        pop     ecx
        ret     0x10
    l_got_proc:
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [esp + 4]
        push    ecx
        push    0x7afb00
        push    edx
        call    eax
        test    eax, eax
        jl      l_done_outer
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    0x0
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     esi, eax
        test    esi, esi
        jl      l_done_inner
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_done_inner
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
    l_done_inner:
        mov     eax, esi
    l_done_outer:
        pop     esi
        pop     ecx
        ret     0x10
    }
}
