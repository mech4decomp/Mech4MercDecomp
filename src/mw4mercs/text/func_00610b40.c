/*
 * FUN_00610B40 (66 B) — __fastcall (ECX = this).
 * Destructor: installs vtable 0x78c13c, calls virtual method 0 (arg 1)
 * on sub-objects at +0xa8/+0xb8/+0xbc if non-null, then FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00610b40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xa8]
        test    ecx, ecx
        mov     dword ptr [esi], 0x78c13c
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esi + 0xb8]
        test    ecx, ecx
        jz      l_skip2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    l_skip2:
        mov     ecx, dword ptr [esi + 0xbc]
        test    ecx, ecx
        jz      l_skip3
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_skip3:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
