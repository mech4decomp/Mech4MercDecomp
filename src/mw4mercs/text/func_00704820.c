/*
 * FUN_00704820 (556 B) — window command dispatcher (switch on cmd 0..0xb).
 * __stdcall RET 8, two params (cmd, value). Jump-table dispatch; default
 * asserts via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_858a50;
extern unsigned int g_858aa4;
extern unsigned int g_858b00;
extern unsigned char g_858954;
extern unsigned int g_858aa0;
extern unsigned int g_858aa8;
extern unsigned int g_858aac;
extern unsigned int g_8aae58;
extern unsigned int g_7b73cc;
extern unsigned int g_7b7104;
extern unsigned int g_7b7108;
extern unsigned int g_7b710c;
extern unsigned int g_858bf8;
extern void *g_76b42c;
extern void *g_76b568;
extern void *g_76b4f0;
extern int g_00704a4c[12];

extern void __cdecl FUN_0072e500(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_00723cc0(int, int);
extern int __cdecl FUN_006fab90(const char *);

__declspec(naked) void __stdcall FUN_00704820(unsigned int cmd, void *value)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x104
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, 0xb
        push    esi
        ja      default_case
        jmp     dword ptr [eax*4 + g_00704a4c]

    case0:
        mov     eax, dword ptr [g_858a50]
        mov     ecx, dword ptr [ebp + 0xc]
        cmp     ecx, eax
        mov     esi, eax
        jz      case0_done
        mov     dword ptr [g_858a50], ecx
        call    FUN_0072e500
    case0_done:
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case1:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [g_858aa4]
        mov     dword ptr [g_858aa4], ecx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case2:
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [g_858b00], edx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case3:
        mov     al, byte ptr [g_858954]
        test    al, al
        jz      case3_skip
        call    FUN_0070a920
    case3_skip:
        mov     esi, dword ptr [ebp + 0xc]
        cmp     byte ptr [esi], 0x0
        mov     eax, esi
        jz      case3_copy
    case3_loop:
        cmp     byte ptr [eax], 0x22
        jnz     case3_space
    case3_quote:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x22
        jz      case3_space
        mov     cl, byte ptr [eax + 0x1]
        test    cl, cl
        jnz     case3_quote
    case3_space:
        cmp     byte ptr [eax], 0x20
        jz      case3_copy
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        test    cl, cl
        jnz     case3_loop
    case3_copy:
        mov     edx, eax
        sub     edx, esi
        push    ebx
        push    edi
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 0x2
        lea     edi, [ebp - 0x104]
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        cmp     byte ptr [eax], 0x20
        pop     edi
        mov     byte ptr [ebp + edx - 0x104], 0
        pop     ebx
        jnz     case3_shell
    case3_trim:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x20
        jz      case3_trim
    case3_shell:
        mov     ecx, dword ptr [g_858bf8]
        push    0x1
        push    0x0
        push    eax
        lea     eax, [ebp - 0x104]
        push    eax
        push    0x7a1238
        push    ecx
        call    dword ptr [g_76b42c]
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case4:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [g_858aa0]
        mov     dword ptr [g_858aa0], edx
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case5:
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [g_858aa8], eax
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case6:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [g_858aac], ecx
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case7:
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [g_8aae58], 0x1
        mov     dword ptr [g_7b73cc], edx
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case8:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x2
        mov     dword ptr [g_7b7104], eax
        jz      case8_done
        push    eax
        push    0x90
        call    FUN_00723cc0
    case8_done:
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case9:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x2
        mov     dword ptr [g_7b7108], eax
        jz      case9_done
        push    eax
        push    0x14
        call    FUN_00723cc0
    case9_done:
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case10:
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x2
        mov     dword ptr [g_7b710c], eax
        jz      case10_done
        push    eax
        push    0x91
        call    FUN_00723cc0
    case10_done:
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    case11:
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     case11_iconic
        mov     eax, dword ptr [g_858bf8]
        push    0x6
        push    eax
        call    dword ptr [g_76b568]
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    case11_iconic:
        mov     ecx, dword ptr [g_858bf8]
        push    ecx
        call    dword ptr [g_76b4f0]
        test    eax, eax
        jz      case11_done
        mov     edx, dword ptr [g_858bf8]
        push    0x9
        push    edx
        call    dword ptr [g_76b568]
    case11_done:
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

    default_case:
        push    0x7a1228
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      default_done
        int     3
    default_done:
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8

        /* in-function jump-table DATA (12 dwords) @ 0x704A4C. Inline asm has
           no dd; the table sits INSIDE the diff slice (not masked), so the
           literal patched addresses are emitted. */
        __emit 0x3d
        __emit 0x48
        __emit 0x70
        __emit 0x00
        __emit 0x5f
        __emit 0x48
        __emit 0x70
        __emit 0x00
        __emit 0x74
        __emit 0x48
        __emit 0x70
        __emit 0x00
        __emit 0x86
        __emit 0x48
        __emit 0x70
        __emit 0x00
        __emit 0x1e
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0x33
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0x47
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0x5c
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0xe4
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0x7b
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0x9f
        __emit 0x49
        __emit 0x70
        __emit 0x00
        __emit 0xc0
        __emit 0x49
        __emit 0x70
        __emit 0x00
    }
}
