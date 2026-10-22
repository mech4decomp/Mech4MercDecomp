/*
 * FUN_004EB0A0 (184 B) - MLR/Adept tile update (__thiscall, RET 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004eb480(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004ebe90(void);
extern char  g_7dc7b0;   /* DAT_007dc7b0 */

__declspec(naked) void __fastcall FUN_004eb0a0(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2c]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    edi
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    0x0
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00707e70
        fadd    dword ptr [esi + 0x68]
        mov     al, byte ptr [g_7dc7b0]
        test    al, al
        fstp    qword ptr [esi + 0x24]
        lea     eax, [esi + 0x40]
        jnz     LEB0E9
        lea     eax, [esi + 0x3c]
    LEB0E9:
        mov     ecx, dword ptr [esi + 0x64]
        mov     edx, dword ptr [esi + 0x60]
        push    ecx
        mov     ecx, dword ptr [esi + 0x5c]
        push    edx
        mov     edx, dword ptr [esi + 0x58]
        push    ecx
        mov     ecx, dword ptr [esi + 0x54]
        push    edx
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esi + 0x50]
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4c]
        push    edx
        mov     edx, dword ptr [esi + 0x48]
        push    ecx
        mov     ecx, dword ptr [esi + 0x44]
        push    edx
        mov     edx, dword ptr [esi + 0x34]
        push    ecx
        push    eax
        push    edx
        mov     dword ptr [esp + 0x3c], 0x0
        mov     dword ptr [esp + 0x40], 0x0
        mov     dword ptr [esp + 0x44], 0x0
        call    FUN_004eb480
        add     esp, 0x34
        mov     edi, eax
        push    edi
        lea     ecx, [esi + 0x6c]
        call    FUN_0041fcd0
        mov     eax, dword ptr [esi + 0x38]
        push    eax
        mov     ecx, edi
        call    FUN_004ebe90
        pop     edi
        pop     esi
        add     esp, 0x18
        ret
    }
}
