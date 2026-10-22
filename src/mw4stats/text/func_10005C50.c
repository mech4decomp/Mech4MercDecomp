/*
 * FUN_10005c50 (151 B) - __thiscall copy-constructor. Calls FUN_10005d10,
 * copies a run of dword fields, then FUN_100040f0 on several sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005d10(void);
extern void __cdecl FUN_100040f0(void);

__declspec(naked) void __cdecl FUN_10005c50(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_10005d10
        lea     eax, [edi + 4]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 4]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [edi + 0x18]
        mov     dword ptr [ecx + 0xc], eax
        mov     ecx, dword ptr [edi + 0x14]
        lea     eax, [edi + 0x1c]
        mov     dword ptr [esi + 0x14], ecx
        push    eax
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [esi + 0x18], edx
        call    FUN_100040f0
        lea     ecx, [edi + 0xb4]
        push    ecx
        lea     ecx, [esi + 0xb4]
        call    FUN_100040f0
        mov     edx, dword ptr [edi + 0x14c]
        lea     eax, [edi + 0x150]
        push    eax
        lea     ecx, [esi + 0x150]
        mov     dword ptr [esi + 0x14c], edx
        call    FUN_100040f0
        lea     ecx, [edi + 0x1e8]
        push    ecx
        lea     ecx, [esi + 0x1e8]
        call    FUN_100040f0
        mov     edx, dword ptr [edi + 0x280]
        pop     edi
        mov     dword ptr [esi + 0x280], edx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
