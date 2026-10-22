/*
 * FUN_004a49a0 (203 B) — MLR subsystem. Initializes sub-objects from a
 * source object (virtual calls at vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004add70(void);

__declspec(naked) void FUN_004a49a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_004a9430
        push    esi
        lea     ecx, [edi + 0x2b8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x2c4]
        call    FUN_004ae560
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [edi + 0x2d0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0x2d8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x2e4]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x2f0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x2f8]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x304]
        call    FUN_004adf40
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x318]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x31c]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x324]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x32c]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0x334]
        call    FUN_004add70
        mov     edx, dword ptr [esi]
        push    0x1
        add     edi, 0x33c
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
