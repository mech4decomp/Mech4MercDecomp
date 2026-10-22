/*
 * FUN_0067D440 (412 B) — HUD map/radar object creation/update (__thiscall, RET 0xc).
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

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00637f70(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005bf280(void);
extern void __cdecl FUN_005bf3d0(void);

__declspec(naked) void __fastcall FUN_0067d440(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0xd
        lea     eax, [esp + 0x14]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x28]
        xor     edi, edi
        push    eax
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, 0x1f40
        jle     L_d567
        mov     dword ptr [esp + 0x10], 0x1f40
L_d47a:
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        mov     ebp, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ebx + ebp*4 + 0x2ed8]
        mov     ecx, eax
        sub     ecx, esi
        cmp     ecx, 0x1f40
        jle     L_d4a8
        mov     ecx, 0x1f40
L_d4a8:
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, ecx
        jle     L_d4b6
        sub     edx, ecx
        mov     dword ptr [esp + 0x14], edx
L_d4b6:
        mov     dword ptr [ebx + ebp*4 + 0x2ed8], eax
        mov     eax, dword ptr [ebx + ebp*4 + 0x32d8]
        cmp     eax, edi
        jz      L_d4dd
        mov     ecx, dword ptr [ebx + ebp*4 + 0x2ed8]
        sub     ecx, eax
        cmp     ecx, 0xfa
        jl      L_d5d2
L_d4dd:
        mov     ecx, dword ptr [g_007f2d20]
        call    FUN_00416110
        mov     esi, eax
        cmp     esi, edi
        jz      L_d58a
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        mov     ecx, esi
        call    FUN_00415180
        mov     dword ptr [esi + 8], edi
        mov     dword ptr [esi + 0xc], edi
        lea     edi, [esi + 0x14]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x773328
        lea     edi, [esi + 0x1c]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [g_007b8d88]
        mov     edx, dword ptr [g_007b8d8c]
        mov     dword ptr [edi], 0x773328
        xor     eax, eax
        mov     dword ptr [esi], 0x77ce78
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [g_007b8d90]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x28], edx
        mov     dword ptr [esi + 0x2c], ecx
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0xb4], eax
        mov     byte ptr [esi + 0xb9], al
        jmp     L_d58c
L_d567:
        cmp     eax, edi
        jnz     L_d47a
        mov     ebp, dword ptr [esp + 0x1c]
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        jmp     L_d4b6
L_d58a:
        xor     esi, esi
L_d58c:
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    esi
        push    eax
        push    ebp
        call    FUN_00637f70
        mov     al, byte ptr [esi + 0xb8]
        mov     ecx, dword ptr [esp + 0x24]
        add     esp, 0x10
        test    al, al
        mov     dword ptr [esi + 0xb4], ecx
        jnz     L_d5d2
        lea     ecx, [esi + 0x14]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_d5d2
        mov     ebx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    FUN_005bf280
        push    esi
        mov     ecx, ebx
        call    FUN_005bf3d0
L_d5d2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
