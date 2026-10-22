/*
 * FUN_004ebb70 (94 B) — __thiscall. Tile/init callback: copies a 0xc-float
 * vector from the global camera transform (g_007dc868 -> [..+0x88] ->
 * [..+0xd8] + 0x80), subtracts it from the object's position fields
 * [EAX+0x38/0x3c/0x40], and calls FUN_00767550 with the resulting vector.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern void __cdecl FUN_00767550(void *);

__declspec(naked) void FUN_004ebb70(void)
{
    __asm {
        sub     esp, 0x3c
        mov     eax, ecx
        mov     ecx, dword ptr [g_007dc868]
        fld     dword ptr [eax + 0x38]
        mov     edx, dword ptr [ecx + 0x88]
        push    esi
        mov     esi, dword ptr [edx + 0xd8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x14]
        rep movsd
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [eax + 0x3c]
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 0x40]
        fsub    dword ptr [esp + 0x40]
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     ecx, [eax + 0x50]
        fstp    dword ptr [esp + 0x14]
        call    FUN_00767550
        pop     edi
        pop     esi
        add     esp, 0x3c
        ret
    }
}
