/*
 * FUN_0060B9F0 (416 B) — __thiscall, RET 8 (2 stack params). Rebuilds a
 * per-object table: frees/allocates a buffer (FUN_006f4230 /
 * FUN_006f3c80), walks a linked list (FUN_00416cc0) of entries, copies
 * string data, and writes 16-bit fields. Uses XOR key 0x85739531 to
 * decode pointers. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;     /* DAT_007dab44 */
extern int g_7dab40;     /* DAT_007dab40 */
extern char g_779e88;    /* vtable 0x00779e88 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0060B9F0(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [eax + 4]
        mov     eax, dword ptr [esi + 0x10]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], edi
        je      L_ba1a
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0x10], ebp
L_ba1a:
        mov     ecx, dword ptr [esi + 0x3c]
        push    ebp
        shl     ecx, 2
        push    ecx
        call    FUN_006f3c80
        mov     edx, dword ptr [g_7dab44]
        mov     dword ptr [esi + 0x10], eax
        mov     esi, dword ptr [edx]
        xor     esi, dword ptr [g_7dab40]
        mov     eax, dword ptr [esi + 0x4c]
        xor     eax, 0x85739531
        mov     byte ptr [esp + 0x28], 0
        mov     byte ptr [esp + 0x13], 0
        je      L_ba51
        mov     byte ptr [esp + 0x28], 1
L_ba51:
        mov     ecx, dword ptr [esi + 0x58]
        xor     ecx, 0x85739531
        je      L_ba61
        mov     byte ptr [esp + 0x13], 1
L_ba61:
        push    0x14
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, ebp
        je      L_ba99
        mov     edx, dword ptr [esi + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, ebx
        call    FUN_00416bc0
        mov     esi, ebx
        mov     dword ptr [ebx], offset g_779e88
        mov     dword ptr [esp + 0x14], esi
        jmp     L_ba9f
L_ba99:
        mov     dword ptr [esp + 0x14], ebp
        mov     esi, ebp
L_ba9f:
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        je      L_bb75
        xor     ebx, ebx
L_bab2:
        mov     al, byte ptr [esp + 0x28]
        test    al, al
        jne     L_bac4
        cmp     dword ptr [ebp + 0x20], 1
        je      L_bb64
L_bac4:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jne     L_bad6
        cmp     dword ptr [ebp + 0x20], 2
        je      L_bb64
L_bad6:
        mov     eax, dword ptr [ebx + edi]
        test    eax, eax
        je      L_baea
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx + edi], 0
L_baea:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebp + 0x18]
        test    edx, edx
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebx + edi], eax
        je      L_bb07
        inc     byte ptr [edx - 1]
L_bb07:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x18]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep     movsb
        je      L_bb41
        mov     cl, byte ptr [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_bb41
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_bb41:
        mov     edx, dword ptr [esp + 0x1c]
        mov     cx, word ptr [ebp + 0x10]
        mov     eax, dword ptr [edx + 0x10]
        mov     bp, word ptr [ebp + 0x12]
        mov     esi, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x20]
        add     eax, ebx
        mov     word ptr [eax], cx
        mov     word ptr [eax + 2], bp
        add     ebx, 4
L_bb64:
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jne     L_bab2
L_bb75:
        test    esi, esi
        je      L_bb81
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
L_bb81:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}
