/*
 * FUN_004ee3e0 (87 B) — __thiscall. MLR/Adept state-engine subsystem.
 * Copies a 4-word block (this+0x10..0x24) into a stream object via
 * virtual call [vtable+0x24] with per-field sizes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004b99a0(void);

__declspec(naked) void FUN_004ee3e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        lea     eax, [edi+0x10]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     ecx, dword ptr [edi+0x14]
        add     esp, 0x8
        push    esi
        call    FUN_004b99a0
        mov     eax, dword ptr [edi+0x18]
        mov     edx, dword ptr [esi]
        push    0x40
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [edi+0x1c]
        mov     edx, dword ptr [esi]
        push    0x40
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [edi+0x20]
        mov     edx, dword ptr [esi]
        push    0x20
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [edi+0x24]
        mov     edx, dword ptr [esi]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
