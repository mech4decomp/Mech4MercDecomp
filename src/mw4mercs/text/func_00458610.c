/*
 * FUN_00458610 (63 B) — MLR helper (__thiscall, RET 0x4). Calls a base
 * ctor, then copies the 16-byte-element array via a virtual method on arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047fe80(void);

__declspec(naked) void FUN_00458610(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_0047fe80
        mov     eax, dword ptr [edi+0x60]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp+0xc], eax
        push    4
        lea     eax, [esp+0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jbe     L_45864A
        mov     edx, dword ptr [esi]
        shl     eax, 4
        push    eax
        mov     eax, dword ptr [edi+0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
L_45864A:
        pop     edi
        pop     esi
        ret     0x4
    }
}
