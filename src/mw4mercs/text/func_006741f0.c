/*
 * FUN_006741f0 (41 B) — __thiscall linear search over an array of 12-byte
 * records. Scans from [this+0x84] to [this+0x88] (exclusive), comparing the
 * first dword of each record against the stack param. Returns AL=1 on match,
 * AL=0 if not found. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006741f0(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x84]
        mov     ecx, dword ptr [ecx + 0x88]
        cmp     eax, ecx
        jz      L_ret0
        mov     edx, dword ptr [esp + 0x4]
    L_loop:
        cmp     dword ptr [eax], edx
        jz      L_ret1
        add     eax, 0xc
        cmp     eax, ecx
        jnz     L_loop
    L_ret0:
        xor     al, al
        ret     4
    L_ret1:
        mov     al, 0x1
        ret     4
    }
}
