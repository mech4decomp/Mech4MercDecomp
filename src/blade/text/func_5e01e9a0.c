/*
 * FUN_5e01e9a0 (111 B) — __thiscall (ECX = this), RET 0x14.
 * Calls FUN_5e012df0/FUN_5e00e670; updates globals 0x5e77a834/838/840;
 * then FUN_5e01e930 + FUN_5e02852d.
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
extern void __cdecl FUN_5e02852d(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

__declspec(naked) void FUN_5e01e9a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_5e012df0
        mov     ecx, dword ptr [esi + 0x64]
        call    FUN_5e00e670
        test    eax, eax
        jz      L_e9cf
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a834], 0x1
        mov     dword ptr [g_5e77a838], eax
        add     eax, eax
        mov     dword ptr [g_5e77a840], eax
        jmp     L_e9e2
    L_e9cf:
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a834], 0x0
        mov     dword ptr [g_5e77a840], ecx
    L_e9e2:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_5e01e930
        push    eax
        call    FUN_5e02852d
        add     esp, 0x14
        pop     esi
        ret     0x14
    }
}
