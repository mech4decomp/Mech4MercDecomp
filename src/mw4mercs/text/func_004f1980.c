/*
 * FUN_004f1980 (62 B) - Adept::ComponentWeb update helper (__thiscall, RET 0x4,
 * 1 param). Based on flag bits in [param+0x1c], conditionally calls
 * FUN_004179b0 on sub-objects at +0x30/+0x28, then always on +0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f1980(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x1c]
        shr     eax, 0x1
        test    al, 0x1
        push    edi
        mov     edi, ecx
        jz      L199a
        push    esi
        lea     ecx, [edi + 0x30]
        call    FUN_004179b0
L199a:
        mov     ecx, dword ptr [esi + 0x1c]
        shr     ecx, 0x5
        test    cl, 0x1
        jz      L19ae
        push    esi
        lea     ecx, [edi + 0x28]
        call    FUN_004179b0
L19ae:
        push    esi
        lea     ecx, [edi + 0x18]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
