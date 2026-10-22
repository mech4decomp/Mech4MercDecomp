/*
 * FUN_004a5df0 (275 B) — MLR object init-from-param (__thiscall, RET 0x4).
 * Wires sub-objects at +0x2b8..+0x380 to the param object via virtual
 * calls (vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004addb0(void);

__declspec(naked) void FUN_004a5df0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004a9430
        push    esi
        lea     ecx, [edi+0x2b8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x2c4]
        call    FUN_004adf40
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi+0x2d8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    esi
        lea     ecx, [edi+0x2e0]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi+0x2e8]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi+0x2fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    esi
        lea     ecx, [edi+0x304]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x310]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi+0x31c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    esi
        lea     ecx, [edi+0x324]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x330]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi+0x33c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    esi
        lea     ecx, [edi+0x344]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x350]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi+0x35c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    esi
        lea     ecx, [edi+0x364]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi+0x370]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi+0x37c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        add     edi, 0x380
        push    edi
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
