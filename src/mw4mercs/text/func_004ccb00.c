/*
 * FUN_004ccb00 (87 B) — __thiscall (RET 0x4). Zeroes a per-slot counter
 * block across 0x12 sub-objects of the object at [this+0x1814].
 * (Near-duplicate of FUN_004ccaa0.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004ccb00(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x1814]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        lea     edx, [edi*4+0x404]
        lea     esi, [edi*4+0x8]
        sub     esi, edx
        lea     edi, [edi*4+0x800]
        lea     eax, [edx+ecx]
        sub     edi, edx
        mov     edx, 0x12
    L2d:
        mov     byte ptr [ecx], 0x1
        mov     dword ptr [esi+eax], 0
        mov     dword ptr [eax], 0
        mov     dword ptr [edi+eax], 0
        add     ecx, 0xc0c
        add     eax, 0xc0c
        dec     edx
        jnz     L2d
        pop     edi
        pop     esi
        ret     0x4
    }
}
