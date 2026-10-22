/*
 * FUN_100339a0 (20 B) - __fastcall. Stores vtable ptr; if [ecx+8] != NULL,
 * call its virtual method at vtable+8.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_100339a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004b12c
        mov     ecx, dword ptr [ecx + 0x8]
        test    ecx, ecx
        jz      L1
        mov     eax, dword ptr [ecx]
        push    ecx
        call    dword ptr [eax + 0x8]
    L1:
        ret
    }
}
