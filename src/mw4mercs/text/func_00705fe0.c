/*
 * FUN_00705fe0 (1277 B) — Game creation / server info registration.
 *
 * __stdcall, RET 0x10 (4 stack params). Builds a GUID string, registers a
 * game with the session object (ESI) via its vtable, and writes a set of
 * key/value pairs describing the game.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_858920;   /* DAT_00858920 */
extern void *g_858a2c;   /* function pointer */

/* IAT function pointers */
extern void *g_76b320;   /* strncpy */
extern void *g_76b420;   /* sprintf */
extern void *g_76b2f8;   /* strncat */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_00705d80(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ae0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707920(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006f59f0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __cdecl FUN_00705fe0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x554
        test    byte ptr [ebp + 0x14], 0x1
        push    ebx
        push    esi
        push    edi
        jz      L_5ffd
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_5ffd:
        call    FUN_006f89f0
        mov     edi, dword ptr [ebp + 0xc]
        mov     ebx, dword ptr [ebp + 0x8]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x30]
        push    0xbb8
        push    eax
        lea     ecx, [ebx + 0x7c]
        push    ecx
        call    dword ptr [g_76b320]
        add     esp, 0xc
        mov     ecx, ebx
        call    FUN_00705d80
        mov     al, byte ptr [ebx + 0x1878]
        test    al, al
        jz      L_64e2
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x17]
        xor     eax, eax
        mov     al, byte ptr [edi + 0x16]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x15]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x14]
        push    eax
        push    ecx
        xor     eax, eax
        mov     al, byte ptr [edi + 0x13]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x12]
        push    edx
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x11]
        push    eax
        xor     eax, eax
        mov     al, byte ptr [edi + 0x10]
        push    ecx
        xor     ecx, ecx
        mov     cx, word ptr [edi + 0xe]
        push    edx
        xor     edx, edx
        mov     dx, word ptr [edi + 0xc]
        push    eax
        mov     eax, dword ptr [edi + 0x8]
        push    ecx
        lea     ecx, [ebp - 0x254]
        push    edx
        push    eax
        push    0x7a1120
        push    ecx
        call    dword ptr [g_76b420]
        push    0x100
        lea     edx, [ebx + 0x4a]
        push    edx
        lea     eax, [ebp - 0x154]
        push    eax
        call    dword ptr [g_76b320]
        add     esp, 0x40
        push    0x100
        lea     ecx, [ebp - 0x154]
        push    0x7884c4
        push    ecx
        call    dword ptr [g_76b2f8]
        push    0x100
        lea     eax, [ebx + 0x1878]
        push    eax
        lea     edx, [ebp - 0x154]
        push    edx
        call    dword ptr [g_76b2f8]
        push    0x100
        lea     eax, [ebp - 0x254]
        push    eax
        lea     ecx, [ebp - 0x154]
        push    ecx
        call    dword ptr [g_76b2f8]
        mov     eax, dword ptr [edi + 0x44]
        mov     edx, dword ptr [edi + 0x2c]
        mov     ecx, eax
        mov     dword ptr [ebp + 0x8], eax
        shr     eax, 0x8
        and     eax, 0xf
        shr     ecx, 0xc
        and     ecx, 0xf
        add     ecx, eax
        mov     eax, dword ptr [edi + 0x40]
        and     eax, 0x100
        neg     eax
        sbb     eax, eax
        add     edx, eax
        add     edx, ecx
        push    edx
        mov     dword ptr [ebp + 0xc], eax
        push    0x76b9a8
        lea     eax, [ebp - 0x354]
        mov     dword ptr [ebp + 0x14], ecx
        push    eax
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [ebp + 0x14]
        add     ecx, eax
        add     ecx, edx
        push    ecx
        lea     edx, [ebp - 0x454]
        push    0x76b9a8
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x3c
        call    FUN_006f5ed0
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    FUN_006f5ae0
        test    al, al
        jnz     L_61a9
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        test    al, al
        jnz     L_61a9
        lea     ecx, [ebp - 0x154]
        push    ecx
        push    0x7a12f0
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_64dd
        int     3
        /* dead epilogue copy after int 3 (unreachable finally block, kept to preserve offsets) */
        call    FUN_006f5ee0
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_61a9:
        mov     eax, dword ptr [edi + 0x40]
        push    eax
        lea     edx, [ebp - 0x54]
        push    0x772f4c
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        call    FUN_00707920
        push    eax
        lea     eax, [ebp - 0x38]
        push    0x772f4c
        push    eax
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        lea     edx, [ebp - 0x1c]
        push    0x772f4c
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [esi]
        add     esp, 0x18
        push    0x76b768
        push    0x79faa0
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     eax, dword ptr [g_858920]
        mov     edx, dword ptr [esi]
        push    eax
        push    0x79fa90
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x18b8]
        push    eax
        push    0x79fa48
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x2c]
        push    eax
        push    0x79fa18
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x38]
        push    eax
        push    0x79fa54
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x1878]
        push    eax
        push    0x79fa10
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x354]
        push    eax
        push    0x79fa24
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x1c]
        push    eax
        push    0x79fa84
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x454]
        push    eax
        push    0x79fa60
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        push    0x76b768
        push    0x79fa2c
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [edi + 0x4]
        __emit 0xF6 /* __emit: MSVC6 rejects `test ah, imm8`; emit F6 C4 04 directly */
        __emit 0xC4
        __emit 0x04
        mov     edx, dword ptr [esi]
        jz      L_62f1
        push    0x770d38
        jmp     L_62f6
L_62f1:
        push    0x770d24
L_62f6:
        push    0x79fa34
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x254]
        push    eax
        push    0x79fa78
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x14]
        push    eax
        push    0x79fab8
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x54]
        push    eax
        push    0x79fae0
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebx + 0x78]
        mov     edx, dword ptr [esi]
        push    eax
        push    0x79fad4
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x1834]
        push    eax
        push    0x79fa2c
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        xor     eax, eax
        mov     al, byte ptr [ebp + 0xa]
        lea     edx, [ebp - 0x554]
        push    edx
        push    0x100
        push    eax
        push    0x0
        call    dword ptr [g_858a2c]
        mov     edx, dword ptr [esi]
        add     esp, 0x10
        lea     eax, [ebp - 0x554]
        push    eax
        push    0x79fa6c
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fac8
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        push    0x79fb4c
        push    0x79fafc
        lea     eax, [ebp - 0x154]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x18f8]
        push    eax
        push    0x79fb0c
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x1938]
        push    eax
        push    0x79fb1c
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        lea     eax, [ebx + 0x1978]
        push    eax
        push    0x79fb24
        lea     ecx, [ebp - 0x154]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        lea     edx, [ebp - 0x154]
        push    edx
        mov     ecx, esi
        call    FUN_006f6410
        mov     esi, eax
        test    esi, esi
        jz      L_64dd
        mov     ecx, esi
        call    FUN_006f59f0
        mov     eax, dword ptr [ebx + 0x1874]
        xor     edi, edi
        test    eax, eax
        jle     L_64dd
        lea     eax, [ebx + 0x1234]
        mov     dword ptr [ebp + 0xc], eax
L_6469:
        push    edi
        lea     ecx, [ebp + 0x14]
        push    0x77b35c
        push    ecx
        call    dword ptr [g_76b420]
        mov     edx, dword ptr [esi]
        add     esp, 0xc
        lea     eax, [ebp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi]
        add     eax, 0xfffffa00
        push    eax
        push    0x79fb68
        lea     ecx, [ebp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     eax, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [esi]
        push    eax
        push    0x79fb70
        lea     ecx, [ebp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fb7c
        lea     eax, [ebp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebx + 0x1874]
        inc     edi
        add     ecx, 0x40
        cmp     edi, eax
        mov     dword ptr [ebp + 0xc], ecx
        jl      L_6469
L_64dd:
        call    FUN_006f5ee0
L_64e2:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
