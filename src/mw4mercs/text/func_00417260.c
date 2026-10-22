/*
 * FUN_00417260 (28 B) — __fastcall. If this->[+0x10] != -1, index into
 * this->[+4]->[+0xc] array at [idx*4], decrement this->[+0x10], and
 * return that element's [+0xc]; else return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417260(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        cmp     eax, -0x1
        jz      fail
        mov     edx, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx + eax*0x4]
        dec     eax
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [edx + 0xc]
        ret
fail:
        xor     eax, eax
        ret
    }
}
