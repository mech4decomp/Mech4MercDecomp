/*
 * FUN_00419d60 (41 B) — copy 3 dwords (offsets 0xc/0x1c/0x2c) from [ESP+4]
 * into ECX (this) at offsets 0/4/8, after calling FUN_0041afd0 on
 * this+0xc. Returns this. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041afd0(void);

__declspec(naked) void FUN_00419d60(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        lea     ecx, [esi+0xc]
        call    FUN_0041afd0
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [edi+0x1c]
        mov     edx, dword ptr [edi+0x2c]
        mov     dword ptr [esi], eax
        pop     edi
        mov     dword ptr [esi+0x4], ecx
        mov     dword ptr [esi+0x8], edx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
