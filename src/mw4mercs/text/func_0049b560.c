/*
 * FUN_0049b560 (349 B) — MLR particle/flare object data loader (__thiscall,
 * RET 0x4). Reads curve data via virtual calls and initializes sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00493940(void);
extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_00412a50(void);

__declspec(naked) void FUN_0049b560(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea     ecx, [edi + 0x60]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x68]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0x80]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x8c]
        call    FUN_004ae560
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x98]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0xa0]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xac]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xc0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xc8]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0xd0]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0xdc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xe4]
        call    FUN_004adf40
        push    esi
        lea     ecx, [edi + 0xf8]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x104]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x10c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x118]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x124]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x12c]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x138]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x144]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x14c]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x160]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0xc
        lea     eax, [edi + 0x164]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 0x190
        push    edi
        push    esi
        call    FUN_00412a50
        add     esp, 0x8
        pop     edi
        pop     esi
        ret     0x4
    }
}
