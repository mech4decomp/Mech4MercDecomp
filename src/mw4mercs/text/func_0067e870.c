/*
 * FUN_0067E870 (178 B) — HUD map object creation (__thiscall, RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007f2d20;
extern unsigned int g_007b8c10;
extern unsigned int g_007b8d88;
extern unsigned int g_007b8d8c;
extern unsigned int g_007b8d90;

extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00637f70(void);
extern void __cdecl FUN_005bf3d0(void);

__declspec(naked) void __fastcall FUN_0067e870(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [g_007f2d20]
        push    esi
        call    FUN_00416110
        mov     esi, eax
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L_e8f9
        mov     eax, dword ptr [g_007b8c10]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        lea     edi, [esi + 0x14]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi + 0x1c]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [g_007b8d88]
        mov     edx, dword ptr [g_007b8d8c]
        mov     eax, dword ptr [g_007b8d90]
        mov     dword ptr [edi], 0x773328
        mov     dword ptr [esi], 0x77ce78
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     byte ptr [esi + 0xb9], bl
        pop     edi
        jmp     L_e8fb
L_e8f9:
        xor     esi, esi
L_e8fb:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        push    edx
        push    eax
        call    FUN_00637f70
        mov     ecx, dword ptr [ebp]
        add     esp, 0x10
        push    esi
        call    FUN_005bf3d0
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
