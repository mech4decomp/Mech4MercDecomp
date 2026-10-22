/*
 * FUN_005ea8e0 (145 B) — __thiscall, no stack params (plain RET).
 *
 * Twin of FUN_005ea840 but reads this+0x19c, this+0x180, and global
 * 0x007b8ce8. Copies 0xc dwords from 0x7b9460 to a local, calls
 * FUN_0041a070(&local), then FUN_004daa20(local).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041a070(void);
extern void __stdcall FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005ea8e0(void)
{
    

extern int DAT_007b8cf0;
extern int DAT_007b8ce8;
__asm {
sub     esp, 0x48
        mov edx, dword ptr [DAT_007b8cf0]
        mov     eax, ecx
        mov ecx, dword ptr [DAT_007b8ce8]
        fld     dword ptr [eax + 0x19c]
        mov     dword ptr [esp + 0xc], ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x1c], edx
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x20]
        rep movsd
        mov     esi, dword ptr [eax + 0x180]
        fstp    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x5c]
        mov     edx, dword ptr [eax + 0x6c]
        add     eax, 0x50
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x8], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041a070
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x2c], edx
        lea     edx, [esp + 0x20]
        mov     dword ptr [esp + 0x4c], ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x40], eax
        call    FUN_004daa20
        pop     edi
        pop     esi
        add     esp, 0x48
        ret
    }


}
