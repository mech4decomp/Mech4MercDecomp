/*
 * FUN_00417280 (24 B) — __fastcall. If this->[+0x10] != -1, index into
 * this->[+4]->[+0xc] array at [idx*4] and return that element's [+0xc];
 * else return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417280(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        cmp     eax, -0x1
        jz      fail
        mov     ecx, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx + 0xc]
        mov     eax, dword ptr [edx + eax*0x4]
        mov     eax, dword ptr [eax + 0xc]
        ret
fail:
        xor     eax, eax
        ret
    }
}
