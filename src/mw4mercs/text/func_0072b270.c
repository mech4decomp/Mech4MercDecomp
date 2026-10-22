/*
 * FUN_0072B270 (474 B) — Builds a 4x4 float matrix from 5 int params
 * (clamped to DAT_00858940/DAT_00858944 bounds), then issues a series of
 * render-state setup calls (FUN_00713cc0) and passes the matrix to
 * FUN_00713ae0.
 *
 * __stdcall RET 0x14 (5 int params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858940;
extern int g_858944;

extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713ae0(void);

__declspec(naked) void __stdcall FUN_0072b270(int param_1, int param_2,
                                              int param_3, int param_4,
                                              unsigned int param_5)
{
    __asm {
        sub     esp, 0x88
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x94]
        test    edi, edi
        jge     L_b28c
        xor     edi, edi
        mov     dword ptr [esp + 0x94], edi
    L_b28c:
        mov     esi, dword ptr [esp + 0x9c]
        test    esi, esi
        jge     L_b2a0
        xor     esi, esi
        mov     dword ptr [esp + 0x9c], esi
    L_b2a0:
        mov     edx, dword ptr [esp + 0x98]
        test    edx, edx
        jge     L_b2b4
        xor     edx, edx
        mov     dword ptr [esp + 0x98], edx
    L_b2b4:
        mov     ecx, dword ptr [esp + 0xa0]
        test    ecx, ecx
        jge     L_b2c8
        xor     ecx, ecx
        mov     dword ptr [esp + 0xa0], ecx
    L_b2c8:
        mov     eax, dword ptr [g_858940]
        cmp     edi, eax
        jle     L_b2da
        mov     edi, eax
        mov     dword ptr [esp + 0x94], edi
    L_b2da:
        cmp     esi, eax
        jle     L_b2e7
        mov     esi, eax
        mov     dword ptr [esp + 0x9c], esi
    L_b2e7:
        mov     eax, dword ptr [g_858944]
        cmp     edx, eax
        jle     L_b2f9
        mov     edx, eax
        mov     dword ptr [esp + 0x98], edx
    L_b2f9:
        cmp     ecx, eax
        jle     L_b306
        mov     ecx, eax
        mov     dword ptr [esp + 0xa0], ecx
    L_b306:
        cmp     edi, esi
        jz      L_b43f
        cmp     edx, ecx
        jz      L_b43f
        fild    dword ptr [esp + 0x94]
        mov     esi, dword ptr [esp + 0xa4]
        xor     eax, eax
        mov     ecx, 0x20
        lea     edi, [esp + 0x10]
        rep stosd
        fst     dword ptr [esp + 0x10]
        fild    dword ptr [esp + 0x98]
        fst     dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 8]
        fstp    dword ptr [esp + 0x14]
        push    0
        push    1
        fstp    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x24], 0x3f800000
        fild    dword ptr [esp + 0xa8]
        mov     dword ptr [esp + 0x44], 0x3f800000
        mov     dword ptr [esp + 0x64], 0x3f800000
        mov     dword ptr [esp + 0x84], 0x3f800000
        fst     dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x28], esi
        fild    dword ptr [esp + 0xa4]
        mov     dword ptr [esp + 0x48], esi
        mov     dword ptr [esp + 0x68], esi
        mov     dword ptr [esp + 0x7c], ecx
        fst     dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x58]
        mov     dword ptr [esp + 0x78], eax
        mov     dword ptr [esp + 0x88], esi
        fstp    dword ptr [esp + 0x5c]
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x13
        call    FUN_00713cc0
        and     esi, 0xff000000
        cmp     esi, 0xff000000
        jnz     L_b42a
        push    1
        jmp     L_b42c
    L_b42a:
        push    3
    L_b42c:
        push    0xd
        call    FUN_00713cc0
        push    4
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_00713ae0
    L_b43f:
        pop     edi
        pop     esi
        add     esp, 0x88
        ret     0x14
    }
}
