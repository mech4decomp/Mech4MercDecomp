/*
 * FUN_0047ac10 (96 B) — MLR PMesh stream-load (__thiscall, RET 0x4).
 * Calls FUN_0047fe80, then reads material/texture buffers from a stream
 * via virtual calls (vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047fe80(void);

__declspec(naked) void FUN_0047ac10(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0xc]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_0047fe80
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ebx, [edi+0x64]
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     ebx, dword ptr [ebx]
        test    ebx, ebx
        jbe     L_47ac3e
        mov     eax, dword ptr [edi+0x60]
        mov     edx, dword ptr [esi]
        push    ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
L_47ac3e:
        mov     ecx, dword ptr [edi+0x5c]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x14]
        mov     dword ptr [esp+0x14], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jbe     L_47ac6a
        mov     edx, dword ptr [esi]
        shl     eax, 0x4
        push    eax
        mov     eax, dword ptr [edi+0x58]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
L_47ac6a:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
