/*
 * FUN_006C9920 (567 B) — GAF texture loader (constructor).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: filename string).
 *
 * Reads a GAF header via FUN_006faca0, dispatches on the version byte
 * (cases 1, 2/4, 5/6/7) to build a texture object, then copies the
 * filename into the object's name buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82e22c;                       /* DAT_0082e22c (heap context) */
extern char g_79e270[];                    /* "Bad GAF version: %s" */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern void __stdcall FUN_006faca0(void);
extern void *__cdecl FUN_004084c0(int size, int a);
extern void *__fastcall FUN_006c8790(void *this, int a, int b);
extern void *__stdcall FUN_006f3c80(int size, int context);
extern void __cdecl FUN_006bfa50(const char *fmt, ...);
extern void __fastcall FUN_006c9b80(void *this, int a, int b);

__declspec(naked) void __stdcall FUN_006c9920(void)
{
    __asm {
        mov     eax, dword ptr [g_82e22c]
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     ebp, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     esi, [ebx + 8]
        push    esi
        push    ebp
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     esi, dword ptr [esi]
        xor     eax, eax
        mov     al, byte ptr [esi + 4]
        mov     dword ptr [ebx], esi
        dec     eax
        cmp     eax, 6
        ja      L_6c9b3d
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x58
        __emit 0x9B
        __emit 0x6C
        __emit 0x00

L_6c9966:
        mov     edx, dword ptr [g_82e22c]
        push    edx
        push    0x28
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_6c9990
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006c8790
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_6c999c
L_6c9990:
        mov     dword ptr [esp + 0x1c], 0
        mov     eax, dword ptr [esp + 0x1c]
L_6c999c:
        mov     edx, dword ptr [esi + 0xc]
        imul    edx, dword ptr [esi + 8]
        add     esi, 0x18
        test    edx, edx
        mov     byte ptr [eax + 0x1d], 1
        mov     ecx, dword ptr [eax + 0x18]
        mov     dword ptr [ebx + 4], eax
        mov     dword ptr [ebx + 0x10], 0xffffffff
        jle     L_6c9a04
        mov     dword ptr [esp + 0x14], edx
L_6c99bf:
        mov     ax, word ptr [esi]
        add     esi, 2
        add     ecx, 4
        mov     edx, eax
        shr     edx, 7
        and     edx, 0xf8
        mov     edi, eax
        add     edx, 0xff00
        shl     al, 3
        shl     edx, 8
        shr     edi, 2
        and     edi, 0xf0
        add     edx, edi
        shl     edx, 8
        and     eax, 0xff
        add     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ecx - 4], edx
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     L_6c99bf
L_6c9a04:
        mov     eax, dword ptr [g_82e22c]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, eax
        mov     dword ptr [ecx + 0x20], edx
        jmp     L_6c9aed

L_6c9a29:
        mov     eax, dword ptr [g_82e22c]
        push    eax
        push    0x28
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_6c9a4e
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006c8790
        jmp     L_6c9a50
L_6c9a4e:
        xor     eax, eax
L_6c9a50:
        mov     ecx, dword ptr [esi + 0xc]
        imul    ecx, dword ptr [esi + 8]
        shl     ecx, 2
        mov     byte ptr [eax + 0x1d], 1
        mov     edi, dword ptr [eax + 0x18]
        mov     dword ptr [ebx + 4], eax
        mov     eax, ecx
        shr     ecx, 2
        add     esi, 0x18
        mov     dword ptr [ebx + 0x10], 0xffffffff
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [g_82e22c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edx, eax
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [eax + 0x20], edx
        jmp     L_6c9aed

L_6c9a9e:
        mov     eax, dword ptr [g_82e22c]
        push    eax
        push    0x28
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      L_6c9ac5
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006c8790
        mov     esi, eax
        jmp     L_6c9ac7
L_6c9ac5:
        xor     esi, esi
L_6c9ac7:
        mov     eax, dword ptr [g_82e22c]
        or      ecx, 0xffffffff
        push    eax
        mov     dword ptr [ebx + 0x10], ecx
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        push    ecx
        mov     dword ptr [ebx + 4], esi
        mov     byte ptr [esi + 0x1d], 1
        call    FUN_006f3c80
        mov     edx, eax
        mov     dword ptr [esi + 0x20], edx
L_6c9aed:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebx + 8]
        shl     edx, 2
        sub     eax, edx
        lea     edx, [eax + ecx + 4]
        lea     eax, [ebx + 4]
        push    eax
        push    0
        mov     ecx, ebx
        mov     dword ptr [ebx + 0xc], edx
        call    FUN_006c9b80
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     4

L_6c9b3d:
        push    ebp
        push    offset g_79e270
        call    FUN_006bfa50
        add     esp, 8
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 8
        ret     4
    }
}
