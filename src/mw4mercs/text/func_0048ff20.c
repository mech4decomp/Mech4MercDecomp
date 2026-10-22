/*
 * FUN_0048ff20 (427 B) — MLR light-object factory (__cdecl, 2 params).
 * Reads the light type via a virtual call, then dispatches through a jump
 * table to allocate + construct the appropriate light subclass.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004827b0(void);
extern void __cdecl FUN_00482530(void);
extern void __cdecl FUN_00481a20(void);
extern void __cdecl FUN_00481390(void);
extern void __cdecl FUN_004309b0(void);
extern void __cdecl FUN_0042ab80(void);
extern void __cdecl FUN_00429b20(void);
extern void __cdecl FUN_006fab90(void);
extern int g_007b9584;
extern int g_007da6a8;
extern int g_0076ff84;
extern int g_jt_004900cc[8];

__declspec(naked) void FUN_0048ff20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [g_007b9584]
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     edi, dword ptr [ebp + 8]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [ebp - 4]
        push    eax
        mov     ecx, edi
        xor     esi, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp - 4]
        cmp     eax, 7
        ja      L_default
        /* __emit: MSVC6 encodes jmp [eax*4+disp32] as FF 25 (drops SIB); ref needs FF 24 85 */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xCC
        __emit 0x00
        __emit 0x49
        __emit 0x00

    L_case0:
        push    0x80
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edi
        mov     ecx, eax
        call    FUN_004827b0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_ret0:
        xor     esi, esi
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case1:
        push    0x80
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [g_007da6a8]
        push    edx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_00482530
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case3:
        push    0x90
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        mov     ecx, eax
        call    FUN_00481a20
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case4:
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edi
        mov     ecx, eax
        call    FUN_00481390
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case5:
        push    0xe0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        mov     ecx, eax
        call    FUN_004309b0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case6:
        push    0x128
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    edi
        mov     ecx, eax
        call    FUN_0042ab80
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_case7:
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        mov     ecx, eax
        call    FUN_00429b20
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

    L_default:
        push    offset g_0076ff84
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_default_ret
        int     3
    L_default_ret:
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
