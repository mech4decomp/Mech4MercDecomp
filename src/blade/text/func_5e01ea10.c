/*
 * FUN_5e01ea10 (101 B) — __thiscall (ECX = this), RET 0xc.
 * Calls FUN_5e012df0/FUN_5e00e670; updates globals 0x5e77a834/838/840;
 * then FUN_5e01e930 + FUN_5e0284e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a834;
extern int g_5e77a838;
extern int g_5e77a840;
extern void __cdecl FUN_5e012df0(void);
extern int __cdecl FUN_5e00e670(void);
extern unsigned int __cdecl FUN_5e01e930(unsigned int);
extern void __cdecl FUN_5e0284e0(unsigned int, unsigned int, unsigned int);

__declspec(naked) void FUN_5e01ea10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_5e012df0
        mov     ecx, dword ptr [esi + 0x64]
        call    FUN_5e00e670
        test    eax, eax
        jz      L_ea3f
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a834], 0x1
        mov     dword ptr [g_5e77a838], eax
        add     eax, eax
        mov     dword ptr [g_5e77a840], eax
        jmp     L_ea52
    L_ea3f:
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a834], 0x0
        mov     dword ptr [g_5e77a840], ecx
    L_ea52:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_5e01e930
        push    eax
        call    FUN_5e0284e0
        add     esp, 0xc
        pop     esi
        ret     0xc
    }
}
