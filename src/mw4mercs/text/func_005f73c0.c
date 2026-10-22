/*
 * FUN_005f73c0 (66 B) — __thiscall, RET 4.
 *
 * Calls a virtual method (vtable+0x9C); if it returns true and a flag bit
 * (bit 0x13 of this+0x10) is clear, calls virtual methods +0x80 and +0x88.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005f73c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x9C]
        test    al, al
        jz      L1
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x13
        test    cl, 1
        jnz     L1
        mov     edx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        push    0
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x80]
        movsx   ecx, byte ptr [edi + 0x1C]
        mov     eax, dword ptr [esi]
        push    ecx
        push    3
        mov     ecx, esi
        call    dword ptr [eax + 0x88]
        pop     edi
L1:
        pop     esi
        ret     4
    }
}
