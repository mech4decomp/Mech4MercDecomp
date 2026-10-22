/*
 * FUN_00644180 (34 B) — __thiscall destructor.
 *
 * Sets vtable pointer 0x792618 at this+0x00, releases the object at
 * this+0x88 (virtual call with arg 1) if non-null, then calls
 * FUN_00561730 on this. RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00561730(void);

__declspec(naked) void __stdcall FUN_00644180(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x88]
        test    ecx, ecx
        mov     dword ptr [esi], 0x792618
        jz      l_skip
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_skip:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
