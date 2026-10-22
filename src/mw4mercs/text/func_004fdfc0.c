/*
 * FUN_004FDFC0 (310 B) -- MLR/Adept object constructor (__thiscall, RET 0xC).
 * Sets up vtable 0x776108, initializes members, reads a stream via virtual
 * calls, copies a 0xc-dword template from 0x7b9460, then dispatches on a
 * 30-entry jump table (0x4fe15c) that sets a byte in [ebx] via and/or.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004179b0(void);

extern int g_7b8c10;          /* DAT_007b8c10 */
extern int g_jt_4fe15c[];     /* jump table @ 0x4fe15c */

__declspec(naked) void __stdcall FUN_004fdfc0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        call    FUN_00415180
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        xor     eax, eax
        mov     dword ptr [ebp + 0x90], eax
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x94], eax
        push    0x40
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp], 0x776108
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     ebx, [ebp + 0x9c]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        lea     edi, [ebp + 0x50]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     edi, dword ptr [esp + 0x20]
        cmp     edi, 0x1
        mov     dword ptr [ebp + 0x8c], 0xbf800000
        jle     L_4fe067
        mov     esi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        mov     dword ptr [esp + 0x28], 0x0
        call    FUN_00412a00
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 0x8
        test    eax, eax
        jz      L_4fe06b
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4fe06b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_4fe06b
L_4fe067:
        mov     esi, dword ptr [esp + 0x1c]
L_4fe06b:
        cmp     edi, 0x3
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x98], ecx
        jge     L_4fe0f5
        xor     eax, eax
        mov     al, byte ptr [ebx]
        mov     ecx, eax
        and     ecx, 0x1f
        cmp     ecx, 0x1e
        ja      L_4fe0f5
        jmp     dword ptr [ecx*4 + g_jt_4fe15c]
        and     al, 0xeb
        or      al, 0x0b
        jmp     L_4fe0f3
        and     al, 0xf1
        or      al, 0x11
        jmp     L_4fe0f3
        and     al, 0xf2
        or      al, 0x12
        jmp     L_4fe0f3
        and     al, 0xf0
        or      al, 0x10
        jmp     L_4fe0f3
        and     al, 0xef
        or      al, 0x0f
        jmp     L_4fe0f3
        and     al, 0xed
        or      al, 0x0d
        jmp     L_4fe0f3
        and     al, 0xe3
        or      al, 0x03
        jmp     L_4fe0f3
        and     al, 0xec
        or      al, 0x0c
        jmp     L_4fe0f3
        and     al, 0xe2
        or      al, 0x02
        jmp     L_4fe0f3
        and     al, 0xe5
        or      al, 0x05
        jmp     L_4fe0f3
        and     al, 0xe1
        or      al, 0x01
        jmp     L_4fe0f3
        and     al, 0xe6
        or      al, 0x06
        jmp     L_4fe0f3
        and     al, 0xe4
        or      al, 0x04
        jmp     L_4fe0f3
        and     al, 0xe9
        or      al, 0x09
        jmp     L_4fe0f3
        and     al, 0xea
        or      al, 0x0a
        jmp     L_4fe0f3
        and     al, 0xe7
        or      al, 0x07
        jmp     L_4fe0f3
        and     al, 0xe8
        or      al, 0x08
L_4fe0f3:
        mov     byte ptr [ebx], al
L_4fe0f5:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     al, byte ptr [esp + 0x13]
        mov     cl, al
        dec     al
        test    cl, cl
        mov     byte ptr [esp + 0x13], al
        jbe     L_4fe152
L_4fe113:
        push    0xa0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4fe134
        mov     edx, dword ptr [esp + 0x18]
        push    edi
        push    esi
        push    edx
        mov     ecx, eax
        call    FUN_004fdfc0
        jmp     L_4fe136
L_4fe134:
        xor     eax, eax
L_4fe136:
        push    eax
        lea     ecx, [ebp + 0x90]
        call    FUN_004179b0
        mov     al, byte ptr [esp + 0x13]
        mov     cl, al
        dec     al
        test    cl, cl
        mov     byte ptr [esp + 0x13], al
        ja      L_4fe113
L_4fe152:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
