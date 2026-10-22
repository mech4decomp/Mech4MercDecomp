/*
 * FUN_006F8B70 (67 B) — Process "ExpectRefresh" messages from a linked list.
 *
 * __cdecl. If global 0x008493d0 is non-null, repeatedly calls
 * FUN_006F5E50("ExpectRefresh", 0x79FB44) and dispatches each result
 * to vtable[0x10] on the global object, until the function returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f5e50(int, int);

__declspec(naked) void __cdecl FUN_006f8b70(void)
{
    __asm {
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    ecx, ecx
        jz      l_done
    l_first:
        push    0x79FB44
        push    0x79FAFC
        call    FUN_006f5e50
        test    eax, eax
        jz      l_done
    l_loop:
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x10]
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        push    0x79FB44
        push    0x79FAFC
        call    FUN_006f5e50
        test    eax, eax
        jnz     l_loop
    l_done:
        ret
    }
}
