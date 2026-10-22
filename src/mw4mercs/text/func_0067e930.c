/*
 * FUN_0067E930 (477 B) — HUD map object creation/update loop (__thiscall, RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0077b648;
extern unsigned int g_007f2d20;
extern unsigned int g_007b8c10;
extern unsigned int g_007b8d88;
extern unsigned int g_007b8d8c;
extern unsigned int g_007b8d90;

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00637f70(void);
extern void __cdecl FUN_005bf3d0(void);
extern void __cdecl FUN_0041e710(void);

__declspec(naked) void __fastcall FUN_0067e930(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x50]
        mov     eax, dword ptr [edi]
        mov     ebp, ecx
        xor     ebx, ebx
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebp
        mov     byte ptr [esp + 0xf], bl
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [eax + 8]
        test    eax, eax
        jz      L_eb04
        mov     ecx, dword ptr [ebp]
        push    esi
        mov     dword ptr [esp + 0x24], ecx
L_e961:
        cmp     byte ptr [esp + 0x13], bl
        jnz     L_e9cc
        mov     edx, dword ptr [edi]
        push    0x2
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x5c], ebx
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x54]
        cmp     eax, 0x1f40
        jle     L_ea9e
        mov     dword ptr [esp + 0x54], 0x1f40
L_e990:
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, eax
        sub     ecx, esi
        cmp     ecx, 0x1f40
        jle     L_e9b6
        mov     ecx, 0x1f40
L_e9b6:
        mov     edx, dword ptr [esp + 0x54]
        cmp     edx, ecx
        jle     L_e9c4
        sub     edx, ecx
        mov     dword ptr [esp + 0x1c], edx
L_e9c4:
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [esp + 0x13], 0x1
L_e9cc:
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edi]
        push    ebx
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 4]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0041e690
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        mov     ecx, dword ptr [g_007f2d20]
        call    FUN_00416110
        mov     esi, eax
        cmp     esi, ebx
        jz      L_eabd
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        lea     ebp, [esi + 0x14]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esi + 8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [ebp], 0x773328
        lea     ebp, [esi + 0x1c]
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fc80
        mov     eax, dword ptr [g_007b8d88]
        mov     ecx, dword ptr [g_007b8d8c]
        mov     edx, dword ptr [g_007b8d90]
        mov     dword ptr [ebp], 0x773328
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esi], 0x77ce78
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], ecx
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     byte ptr [esi + 0xb9], bl
        jmp     L_eabf
L_ea9e:
        cmp     eax, ebx
        jnz     L_e990
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        jmp     L_e9c4
L_eabd:
        xor     esi, esi
L_eabf:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x4c]
        lea     eax, [esp + 0x28]
        push    eax
        push    esi
        push    ecx
        push    edx
        call    FUN_00637f70
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x10
        push    esi
        mov     dword ptr [esi + 0xb4], eax
        call    FUN_005bf3d0
        lea     ecx, [esp + 0x28]
        call    FUN_0041e710
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 8]
        test    eax, eax
        jnz     L_e961
        pop     esi
L_eb04:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x38
        ret     0xc
    }
}
