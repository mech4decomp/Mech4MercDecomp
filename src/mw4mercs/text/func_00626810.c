/*
 * FUN_00626810 (170 B) — Object teardown / destructor.
 *
 * __fastcall (ECX = this), RET. Sets vtable 0x78D04C, calls vtable[0]
 * on this->[0x4c]/[0x50]/[0x54] (if non-NULL), calls FUN_00629410,
 * frees this->[0x9c]/[0xb8]/[0xf0] via FUN_006f4230, frees this->[0xf8]
 * via FUN_004084e0, destroys sub-objects at +0x5c/+0x44 via
 * FUN_0041fc90, and calls FUN_006f31e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl  FUN_00629410(void);
extern void __cdecl  FUN_006f4230(void);
extern void __cdecl  FUN_004084e0(void);
extern void __cdecl  FUN_0041fc90(void);
extern void __cdecl  FUN_006f31e0(void);

__declspec(naked) void __fastcall FUN_00626810(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4c]
        test    ecx, ecx
        mov     dword ptr [esi], 0x78d04c
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esi + 0xf8]
        mov     eax, dword ptr [esi + 0xfc]
        push    0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_00629410
        mov     ecx, dword ptr [esi + 0x50]
        add     esp, 0x14
        test    ecx, ecx
        mov     dword ptr [esi + 0xfc], eax
        jz      l_skip2
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip2:
        mov     ecx, dword ptr [esi + 0x54]
        test    ecx, ecx
        jz      l_skip3
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip3:
        mov     eax, dword ptr [esi + 0x9c]
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [esi + 0xb8]
        push    ecx
        call    FUN_006f4230
        mov     edx, dword ptr [esi + 0xf0]
        push    edx
        call    FUN_006f4230
        mov     eax, dword ptr [esi + 0xf8]
        test    eax, eax
        mov     dword ptr [esp + 4], eax
        jz      l_skip4
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip4:
        lea     ecx, [esi + 0x5c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x44]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_006f31e0
        pop     esi
        pop     ecx
        ret
    }
}
