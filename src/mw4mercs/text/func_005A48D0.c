/*
 * In-.text data block 0x5A4873 (433 B) — two __thiscall methods (this in ECX,
 * RET 0x8, 2 params) on the same gameplay object.
 *
 *   FUN_005A48D0 (107 B): dispatches on vtable[0xe0]->[0x14] (0xb / 0xe) to
 *     call helper methods; computes a double delta from [this+0xe4].
 *   FUN_005A4940 (321 B): state-machine update — checks two float thresholds
 *     against [0x76c5b0], resets a 3-dword counter block, copies a 0xc-dword
 *     matrix, stores a double, and calls a tail helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005F39C0(void);
extern void __cdecl FUN_005F4B30(void);
extern void __cdecl FUN_005F52D0(void);
extern void __cdecl FUN_004DA620(void);
extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_005FAD50(void);
extern void __cdecl FUN_0041FCB0(void);
extern void __cdecl FUN_0041FCD0(void);
extern void __cdecl FUN_004DB240(void);
extern void __cdecl FUN_005F3FF0(void);
extern float g_76C5B0;

__declspec(naked) void FUN_005A48D0(void)
{
    __asm {
        /* ---- FUN_005A48D0 ---- */
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005F39C0
        fld     qword ptr [esp + 0xc]
        fsub    qword ptr [esi + 0xe4]
        mov     edx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [edx + 0x14]
        cmp     eax, 0xb
        fstp    dword ptr [esp + 0xc]
        je      L5A491F
        cmp     eax, 0xe
        jne     L5A4936
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, esi
        call    FUN_005F4B30
        push    edi
        mov     ecx, esi
        call    FUN_005F52D0
        pop     edi
        pop     esi
        ret     8
L5A491F:
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x150]
        push    edi
        mov     ecx, esi
        call    FUN_005F52D0
L5A4936:
        pop     edi
        pop     esi
        ret     8

        /* alignment pad between the two methods */
        nop
        nop
        nop
        nop
        nop

        /* ---- FUN_005A4940 ---- */
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0xe0]
        cmp     dword ptr [eax + 0x14], 0xe
        push    esi
        push    edi
        jne     L5A4A6A
        fld     dword ptr [ebx + 0x170]
        fcomp   dword ptr [g_76C5B0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x40
        je      L5A4A6A
        fld     dword ptr [ebx + 0x16c]
        fcomp   dword ptr [g_76C5B0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x40
        je      L5A4A6A
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [ebx + 0x470]
        mov     edx, dword ptr [ebx + 0x46c]
        push    ecx
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x41c], 0
        mov     dword ptr [ebx + 0x420], 0
        mov     dword ptr [ebx + 0x424], 0
        call    FUN_004DA620
        lea     edi, [ebx + 0x148]
        mov     ecx, edi
        call    FUN_0041FD80
        test    eax, eax
        jne     L5A4A0A
        mov     dx, word ptr [esi + 0x66]
        push    ecx
        mov     cx, word ptr [esi + 0x64]
        mov     eax, esp
        mov     word ptr [eax], cx
        mov     ecx, ebx
        mov     word ptr [eax + 2], dx
        call    FUN_005FAD50
        mov     esi, eax
        test    esi, esi
        je      L5A4A0A
        mov     ecx, edi
        call    FUN_0041FCB0
        push    esi
        mov     ecx, edi
        call    FUN_0041FCD0
L5A4A0A:
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        mov     esi, dword ptr [ebx + 0xd8]
        or      dword ptr [esi + 0x18], 0xc0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, ebx
        call    FUN_004DB240
        fld     qword ptr [esp + 0x10]
        fsub    qword ptr [ebx + 0xe4]
        mov     esi, dword ptr [ebx + 0xd8]
        add     esi, 0x50
        lea     edi, [ebx + 0xf4]
        mov     ecx, 0xc
        rep     movsd
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        fstp    qword ptr [ebx + 0xec]
        call    dword ptr [edx + 0x48]
L5A4A6A:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005F3FF0
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
