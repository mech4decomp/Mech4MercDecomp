/*
 * FUN_004912b0 (52 B) — __thiscall, RET 4 (1 stack param).
 * Copy constructor: copies 6 dwords from source to this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004911e0(void);

__declspec(naked) void * __fastcall FUN_004912b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004911e0
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esi + 0x8], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     dword ptr [esi + 0x4], edx
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
