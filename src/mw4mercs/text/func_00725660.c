/*
 * FUN_00725660 (209 B) — Resource-type dispatcher.
 *
 * Branches on param_2 (1/2/3 vs other) and calls one of three helper
 * constructors, storing the result through param_1.
 *
 * __stdcall, RET 0x1c (7 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aadc8;
extern int __cdecl FUN_004084c0(int a, int b);
extern void __cdecl FUN_00725fb0(void);
extern void __cdecl FUN_007258b0(void);
extern void __cdecl FUN_00725db0(void);

__declspec(naked) void __stdcall FUN_00725660(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        cmp     esi, 1
        jz      L_e3
        cmp     esi, 2
        jz      L_e3
        cmp     esi, 3
        mov     eax, dword ptr [g_8aadc8]
        push    eax
        push    0xf0
        jnz     L_af
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_25
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00725fb0
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edx], eax
        pop     esi
        ret     0x1c
    L_af:
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_d7
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        push    edx
        mov     ecx, eax
        call    FUN_007258b0
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        pop     esi
        ret     0x1c
    L_d7:
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        mov     dword ptr [ecx], eax
        pop     esi
        ret     0x1c
    L_e3:
        mov     edx, dword ptr [g_8aadc8]
        push    edx
        push    0xf0
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_25
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00725db0
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edx], eax
        pop     esi
        ret     0x1c
    L_25:
        mov     edx, dword ptr [esp + 8]
        xor     eax, eax
        mov     dword ptr [edx], eax
        pop     esi
        ret     0x1c
    }
}
