/*
 * FUN_00507400 (535 B) — __thiscall (this in ecx) / __stdcall (RET 4,
 * 1 stack param).
 *
 * In-.text data block at 0x5070A9. If this+0x16c does not match the
 * 0x7db0ac/0x7db0ae pair, builds a string (0x776fa0) into a stack buffer,
 * then iterates two linked lists (this+0x170) calling FUN_00412000 /
 * FUN_004120B0 per node, formatting via IAT 0x76b420. Cleans up via
 * FUN_0040E500/FUN_0040DE20/FUN_004D21C0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern short g_7db0ac;  /* DAT_007db0ac */
extern short g_7db0ae;  /* DAT_007db0ae */

extern void *g_76b420;  /* IAT 0x76b420 */

extern void __cdecl FUN_004D1F80(void);
extern void __cdecl FUN_0040DD50(void);
extern void __cdecl FUN_0040EDC0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00412000(void);
extern void __cdecl FUN_0041ACB0(void);
extern void __cdecl FUN_004120B0(void);
extern void __cdecl FUN_0040E500(void);
extern void __cdecl FUN_0040DE20(void);
extern void __cdecl FUN_004D21C0(void);

__declspec(naked) void __cdecl FUN_00507400(void)
{
    __asm {
        sub     esp, 0x21c
        push    ebx
        mov     ebx, ecx
        mov     cx, word ptr [ebx + 0x16c]
        cmp     cx, word ptr [g_7db0ac]
        lea     eax, [ebx + 0x16c]
        mov     dword ptr [esp + 0x10], ebx
        jne     L507434
        mov     dx, word ptr [eax + 2]
        cmp     dx, word ptr [g_7db0ae]
        je      L50760d
L507434:
        push    ebp
        push    esi
        push    edi
        push    1
        push    eax
        lea     ecx, [esp + 0xf0]
        call    FUN_004D1F80
        push    0
        lea     ecx, [esp + 0x9c]
        call    FUN_0040DD50
        push    0x776fa0
        lea     ecx, [esp + 0x9c]
        call    FUN_0040EDC0
        or      ecx, 0xffffffff
        mov     ebp, eax
        xor     eax, eax
        mov     edi, 0x76ffb4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [esp + 0x12c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebx + 0x170]
        mov     edi, 1
        test    esi, esi
        je      L507517
L50749b:
        mov     ebx, dword ptr [esi]
        test    ebx, ebx
        mov     esi, dword ptr [esi + 4]
        je      L507517
        push    edi
        lea     ecx, [esp + 0x130]
        push    0x776fb8
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        add     ebx, 0x10
        push    ebx
        lea     ecx, [esp + 0x3c]
        call    FUN_00428850
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x6c]
        call    FUN_00419460
        lea     eax, [esp + 0x68]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        push    ecx
        lea     edx, [esp + 0x130]
        push    edx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00412000
        inc     edi
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (call-reloc between branch and target) */
        __emit 0xEB
        __emit 0x84
L507517:
        push    0x776f94
        lea     ecx, [esp + 0x9c]
        call    FUN_0040EDC0
        or      ecx, 0xffffffff
        mov     ebp, eax
        xor     eax, eax
        mov     edi, 0x776fb4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0x12c]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ecx + 0x170]
        mov     ebx, 1
        test    esi, esi
        je      L5075de
L507562:
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 4]
        je      L5075de
        push    ebx
        lea     edx, [esp + 0x130]
        push    0x776fac
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        add     edi, 0x10
        push    edi
        lea     ecx, [esp + 0x6c]
        call    FUN_00428850
        lea     eax, [esp + 0x68]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_00419460
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0041ACB0
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x30], edx
        lea     edx, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], eax
        push    edx
        lea     eax, [esp + 0x130]
        mov     dword ptr [esp + 0x38], ecx
        push    eax
        mov     ecx, ebp
        call    FUN_004120B0
        inc     ebx
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (call-reloc between branch and target) */
        __emit 0xEB
        __emit 0x84
L5075de:
        mov     ecx, dword ptr [esp + 0x230]
        push    ecx
        lea     ecx, [esp + 0x9c]
        call    FUN_0040E500
        lea     ecx, [esp + 0x98]
        call    FUN_0040DE20
        lea     ecx, [esp + 0xe8]
        call    FUN_004D21C0
        pop     edi
        pop     esi
        pop     ebp
L50760d:
        pop     ebx
        add     esp, 0x21c
        ret     4
    }
}
