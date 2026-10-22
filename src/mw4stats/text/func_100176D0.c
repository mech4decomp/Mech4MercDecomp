/*
 * FUN_100176d0 (55 B) - __stdcall destructor helper. Calls a virtual
 * method at vtable+0x3c, then frees two buffers at +0x34/+0x38 if set.
 *
 * __stdcall (1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100176d0 (55 B, __stdcall, 1 param, RET 0x4) - destructor helper.
 * Calls a virtual method at vtable+0x3c (passing this on the stack,
 * __stdcall), then frees the two buffers at +0x34 and +0x38 if set.
 * CFLAGS: /O2
 */

extern void __cdecl FUN_1000a0e0(void);

__declspec(naked) void __cdecl FUN_100176d0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x3c]
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_1000a0e0
        mov     dword ptr [esi + 0x34], 0
L1:
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_1000a0e0
        mov     dword ptr [esi + 0x38], 0
L2:
        pop     esi
        ret     4
    }
}
