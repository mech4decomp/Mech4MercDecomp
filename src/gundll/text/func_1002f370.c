/*
 * FUN_1002f370 (288 B) — __stdcall, RET 0x8.
 * Locked queue pop helper: InterlockedExchange spin loop, unlinks a
 * node, calls FUN_1000c4c0/FUN_1002f5d0 and several IAT function
 * pointers (0x1004908c/0x10049090/0x100490a0/0x100490a8/0x100491bc).
 *
 * CFLAGS: /O1
 */

extern void (__cdecl *g_1004908c)(void);   /* InterlockedExchange */
extern void (__cdecl *g_10049090)(void);   /* Sleep */
extern void (__cdecl *g_100490a0)(void);   /* InterlockedExchangeAdd */
extern void (__cdecl *g_100490a8)(void);   /* ResetEvent */
extern void (__cdecl *g_100491bc)(void);   /* InterlockedDecrement */
extern unsigned int g_1005504c;            /* DAT_1005504c */
extern void __cdecl FUN_1000c4c0(void);
extern void __cdecl FUN_1002f5d0(void);

__declspec(naked) void __stdcall func_1002f370(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        /* __emit: MSVC6 drops zero disp on [esp]; ref uses C7 44 24 00 + imm32 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        jnz     L_f38a
        mov     eax, 0x80070057
        pop     ecx
        ret     8
    L_f38a:
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [g_1004908c]
        push    1
        lea     ebx, [ebp + 4]
        push    ebx
        mov     esi, 0x32
        call    edi
        cmp     eax, 1
        jnz     L_f3d1
        /* __emit: 6-byte alignment NOP (lea ebx,[ebx+0]); MSVC6 emits 8D 1B */
        __emit  0x8D
        __emit  0x9B
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
    L_f3b0:
        test    esi, esi
        mov     eax, esi
        jg      L_f3c1
        neg     eax
        push    eax
        call    dword ptr [g_10049090]
        jmp     L_f3c7
    L_f3c1:
        xor     esi, esi
    L_f3c3:
        nop
        dec     eax
        jnz     L_f3c3
    L_f3c7:
        push    1
        push    ebx
        call    edi
        cmp     eax, 1
        jz      L_f3b0
    L_f3d1:
        mov     eax, dword ptr [ebp + 0x18]
        lea     esi, [ebp + 0x18]
        cmp     eax, esi
        jnz     L_f3df
        xor     esi, esi
        jmp     L_f42f
    L_f3df:
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], ecx
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 4], esi
        mov     edi, dword ptr [eax + 8]
        push    eax
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax], 0
        mov     eax, dword ptr [g_1005504c]
        push    eax
        call    FUN_1000c4c0
        mov     ecx, dword ptr [esi + 0x18]
        dec     ecx
        test    edi, edi
        mov     dword ptr [esi + 0x18], ecx
        mov     esi, edi
        jz      L_f429
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_f429
        mov     eax, dword ptr [ebp + 0x30]
        test    eax, eax
        jnz     L_f429
        mov     ecx, dword ptr [ebp + 0x14]
        push    ecx
        call    dword ptr [g_100490a8]
    L_f429:
        mov     edi, dword ptr [g_1004908c]
    L_f42f:
        push    0
        push    ebx
        call    edi
        test    esi, esi
        jz      L_f47c
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [edx]
        test    eax, eax
        jge     L_f44e
        mov     dword ptr [esp + 0x10], 1
    L_f44e:
        lea     eax, [ebp + 0x38]
        push    eax
        call    dword ptr [g_100491bc]
        mov     ecx, dword ptr [esi + 0xc]
        neg     ecx
        push    ecx
        lea     edx, [ebp + 0x34]
        push    edx
        call    dword ptr [g_100490a0]
        push    esi
        mov     ecx, ebp
        call    FUN_1002f5d0
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    L_f47c:
        pop     edi
        pop     esi
        mov     dword ptr [esp + 0x8], 0x8000000a
        mov     eax, dword ptr [esp + 0x8]
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
