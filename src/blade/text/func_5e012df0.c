/*
 * FUN_5e012df0 (186 B) — DirectDraw caps/format init (__fastcall, ECX=this).
 *
 * __fastcall, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a824;
extern int g_5e77a828;
extern int g_5e77a82c;
extern int g_5e77a830;
extern int g_5e77a81c;
extern int g_5e77a844;
extern int g_5e77a820;
extern int g_5e77a848;
extern int g_5e77a858;
extern int g_5e77a574;
extern int g_5e77a57c;
extern int g_5e77a6cc;
extern int g_5e77a6d0;

extern int __cdecl FUN_5e00eb00(void);

__declspec(naked) void __fastcall FUN_5e012df0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     eax, dword ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x40]
        mov     edx, dword ptr [esi + 0x48]
        mov     dword ptr [g_5e77a824], eax
        mov     eax, dword ptr [esi + 0x44]
        mov     dword ptr [g_5e77a828], ecx
        mov     ecx, dword ptr [esi + 0x54]
        mov     dword ptr [g_5e77a830], eax
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [g_5e77a81c], ecx
        mov     ecx, dword ptr [esi + 0x64]
        mov     dword ptr [g_5e77a82c], edx
        mov     edx, dword ptr [esi + 0x58]
        mov     dword ptr [g_5e77a844], eax
        mov     eax, dword ptr [ecx + 0x4634]
        mov     dword ptr [g_5e77a820], edx
        mov     edx, eax
        mov     edi, eax
        shr     edx, 0x2
        and     edx, 0x3e
        and     edi, 0xf800
        or      edx, edi
        and     eax, 0xf80000
        shr     edx, 0x1
        shl     eax, 0x1
        or      edx, eax
        mov     eax, dword ptr [ecx + 0x45ec]
        mov     dword ptr [g_5e77a848], edx
        mov     dword ptr [g_5e77a858], eax
        call    FUN_5e00eb00
        test    eax, eax
        jz      L_e87
        mov     eax, dword ptr [g_5e77a848]
        mov     ecx, eax
        shl     ecx, 0xa
        or      ecx, eax
        shl     ecx, 0xa
        or      ecx, eax
        mov     dword ptr [g_5e77a848], ecx
L_e87:
        mov     edx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [g_5e77a574], esi
        pop     edi
        mov     dword ptr [g_5e77a57c], edx
        mov     dword ptr [g_5e77a6cc], eax
        mov     dword ptr [g_5e77a6d0], ecx
        pop     esi
        ret
    }
}
