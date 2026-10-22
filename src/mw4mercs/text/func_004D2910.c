/*
 * FUN_004D2910 (168 B) — constructs an archive entry object, copying fields
 * and calling into the archive API.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7db0b8;
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00412d50(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004171b0(void);

__declspec(naked) void FUN_004D2910(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    esi
        mov     esi, ecx
        xor     eax, eax
        mov     ax, word ptr [esi+0x40]
        push    edi
        lea     ecx, [esp+0xc]
        push    ecx
        mov     dword ptr [esp+0x10], eax
        mov     eax, dword ptr [g_7db0b8]
        lea     ecx, [eax+0x14]
        call    FUN_00416f60
        mov     edx, dword ptr [g_7db0b8]
        add     edx, 0x14
        push    edx
        lea     ecx, [esp+0x14]
        mov     ebx, eax
        call    FUN_00417170
        lea     ecx, [esp+0x10]
        mov     dword ptr [esp+0x10], 0x7725a0
        call    FUN_004171e0
        add     esi, 0x20
        mov     ecx, 8
        lea     edi, [esp+0x24]
        rep movsd
        mov     eax, dword ptr [ebx+0x14]
        push    1
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x28], eax
        call    FUN_00413be0
        mov     ecx, dword ptr [esp+0x38]
        mov     edx, dword ptr [esp+0x3c]
        push    0
        push    ecx
        push    edx
        lea     ecx, [esp+0x50]
        call    FUN_0041e690
        mov     ecx, dword ptr [esp+0x68]
        lea     eax, [esp+0x44]
        push    eax
        call    FUN_00412d50
        lea     ecx, [esp+0x44]
        call    FUN_0041e710
        lea     ecx, [esp+0x10]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x58
        ret     4
    }
}
