/*
 * FUN_00663670 (644 B) — Object update/refresh routine.
 *
 * Calls virtual methods on the object (vtable offsets 0x44, 0x34, 0xa0,
 * 0x8, 0x4, 0x6c), builds several 12-byte records, and conditionally
 * invokes FUN_00663900 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0054fd90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0058ea70(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_006632e0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern float g_795468;

__declspec(naked) void FUN_00663670(void)
{
    __asm {
        sub     esp, 0xd0
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xdc]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x0
        mov     ecx, esi
        call    dword ptr [eax + 0x44]
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_ac
        mov     ecx, dword ptr [esp + 0xe4]
        push    0x2
        push    ecx
        push    esi
        call    FUN_00663900
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xd0
        ret
L_ac:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x98]
        call    FUN_00419460
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_00419480
        lea     ecx, [esp + 0x70]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_00428730
        lea     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x98]
        call    FUN_0054fd90
        lea     eax, [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        mov     edi, dword ptr [esp + 0xe4]
        push    edi
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040ca40
        lea     edx, [esp + 0x64]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c9e0
        lea     ecx, [esp + 0x7c]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0040c410
        push    edi
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_0040ca40
        lea     eax, [esp + 0x64]
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9e0
        mov     edx, dword ptr [ebx + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x5c]
        call    FUN_00419480
        lea     eax, [esp + 0x88]
        push    eax
        lea     ecx, [esp + 0x98]
        call    FUN_00428730
        lea     ecx, [esp + 0x88]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_0058ea70
        lea     edx, [esp + 0x94]
        push    edx
        lea     ecx, [esp + 0xd4]
        call    FUN_005d2900
        push    eax
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0040cbb0
        lea     ecx, [esp + 0x4c]
        push    ecx
        lea     ecx, [esp + 0x98]
        call    FUN_0054fd90
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x44]
        call    FUN_0058ea70
        lea     eax, [esp + 0x94]
        push    eax
        lea     ecx, [esp + 0xc8]
        call    FUN_005d2900
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     ecx, [esp + 0x48]
        call    FUN_0040cbb0
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        call    FUN_006632e0
        lea     ecx, [esp + 0x3c]
        push    ecx
        lea     edx, [esp + 0x64]
        fstp    dword ptr [esp + 0x18]
        push    edx
        call    FUN_006632e0
        fcomp   dword ptr [esp + 0x1c]
        add     esp, 0x10
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_84a
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0040c410
        mov     byte ptr [esp + 0xc], 0
        jmp     L_867
L_84a:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        mov     byte ptr [esp + 0xc], 1
L_867:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0xc4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa0]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_0040ca10
        lea     ecx, [esp + 0x4c]
        call    FUN_0040cb00
        fcomp   dword ptr [g_795468]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_8ea
        mov     edx, dword ptr [esi]
        push    0x0
        push    0x1
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        test    al, al
        jnz     L_8c8
        push    0x2
        push    edi
        push    esi
        call    FUN_00663900
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xd0
        ret
L_8c8:
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esi]
        push    ebx
        push    0x1
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [esi]
        push    0x1
        push    0x40c00000
        mov     ecx, esi
        call    dword ptr [edx + 0x6c]
L_8ea:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xd0
        ret
    }
}
