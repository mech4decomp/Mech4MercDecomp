/*
 * FUN_005eae20 (150 B) — __thiscall, no stack params (plain RET).
 *
 * Similar to FUN_005ea840/8e0: copies 0xc dwords from 0x7b9460 to a local,
 * reads floats this+0x198/0x19c, dereferences this+0x180 -> +0xd8 to gather
 * three fields, calls FUN_0041a070(&local), then FUN_004daa20(local) on
 * this+0x184.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041a070(void);
extern void __stdcall FUN_004daa20(void);

__declspec(naked) void __stdcall FUN_005eae20(void)
{
    

extern int DAT_007b8cf0;
__asm {
sub     esp, 0x48
        mov eax, dword ptr [DAT_007b8cf0]
        push    ebx
        mov     ebx, ecx
        fld     dword ptr [ebx + 0x198]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x20], eax
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [ebx + 0x19c]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x24]
        rep movsd
        mov     ecx, dword ptr [ebx + 0x180]
        fstp    dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x5c]
        mov     ecx, dword ptr [eax + 0x6c]
        add     eax, 0x50
        mov     dword ptr [esp + 0xc], edx
        mov     edx, dword ptr [eax + 0x2c]
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0041a070
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x30], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x184]
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x54], eax
        call    FUN_004daa20
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x48
        ret
    }


}
