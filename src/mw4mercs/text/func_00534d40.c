/*
 * FUN_00534d40 (1295 B) — Game state / multiplayer setup dispatcher.
 *
 * __thiscall-style (ebp frame, ret without cleanup). Dispatches on several
 * global flags to set up single/multiplayer game state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_0052a460(void);
extern void __stdcall FUN_0052a770(void);
extern int __stdcall FUN_0052aab0(void);
extern void __stdcall FUN_00511bb0(void);
extern void __stdcall FUN_00511640(void);
extern void __stdcall FUN_0051fb70(void);
extern void __stdcall FUN_00701da0(void);
extern char __stdcall FUN_00709c60(int a);
extern void __stdcall FUN_00703a20(int a, int b, int c, int d);
extern int __stdcall FUN_00701f20(int a, int b, int c);
extern void __stdcall FUN_004084d0(int a);
extern void __stdcall FUN_004cc3c0(int a);
extern void __stdcall FUN_004c8eb0(int a, int b);
extern void __stdcall FUN_00511760(void);
extern void __stdcall FUN_00536840(int a);
extern void __stdcall FUN_00405fa0(void);
extern void __stdcall FUN_00402f90(int a, int b, int c);
extern void __stdcall FUN_0053fa70(void);
extern void __stdcall FUN_005116e0(void);
extern void __stdcall FUN_005386c0(int a);
extern void __stdcall FUN_005394a0(void);
extern int __stdcall FUN_006fab90(const char *fmt, ...);
extern void __stdcall FUN_00704700(void);

extern void *g_007dd268;   /* 0x007DD268 */
extern char g_007ddd1d;    /* 0x007DDD1D */
extern char g_007ddd1c;    /* 0x007DDD1C */
extern char g_007ddd1e;    /* 0x007DDD1E */
extern int g_007ddd10;     /* 0x007DDD10 */
extern int g_007ddd14;     /* 0x007DDD14 */
extern int g_007ddd0c;     /* 0x007DDD0C */
extern int g_007ddd08;     /* 0x007DDD08 */
extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern char *g_007b7e40;   /* 0x007B7E40 */
extern int g_00858a38;     /* 0x00858A38 */
extern int g_00858930;     /* 0x00858930 */

__declspec(naked) void __cdecl FUN_00534d40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     ecx, dword ptr [g_007dd268]
        push    ebx
        push    esi
        push    edi
        call    FUN_0052a460
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0052a770
        mov     al, byte ptr [g_007ddd1d]
        test    al, al
        jnz     l_check_flags_done
        mov     al, byte ptr [g_007ddd1c]
        test    al, al
        jnz     l_check_flags_done
        mov     al, byte ptr [g_007ddd1e]
        test    al, al
        jz      l_loc_535015

    l_check_flags_done:
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0052aab0
        test    eax, eax
        jnz     l_loc_534da8
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00511bb0
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00511640

    l_ret_early:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_534da8:
        mov     al, byte ptr [g_007ddd1d]
        test    al, al
        jz      l_loc_534e89
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0051fb70
        call    FUN_00701da0
        xor     esi, esi
        push    esi
        call    FUN_00709c60
        test    al, al
        jnz     l_loc_53524f

    l_loc_534dd5:
        mov     eax, dword ptr [g_007ddd10]
        mov     ecx, dword ptr [g_007ddd14]
        mov     edx, dword ptr [g_007ddd0c]
        push    0
        push    eax
        push    ecx
        push    edx
        call    FUN_00703a20
        push    0
        push    0
        push    0
        call    FUN_00701f20
        test    eax, eax
        jnz     l_loc_534e1c
        inc     esi
        cmp     esi, 0xc350
        jnz     l_loc_534e0a
        xor     esi, esi

    l_loc_534e0a:
        push    0
        call    FUN_00709c60
        test    al, al
        jz      l_loc_534dd5
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_534e1c:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x0c]
        add     eax, 0x0c
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        xor     eax, 0x85739531
        push    0x1c18
        mov     byte ptr [edx + 0x17], 1
        mov     byte ptr [eax + 0x16], 0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_loc_534e60
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     l_loc_534e62

    l_loc_534e60:
        xor     eax, eax

    l_loc_534e62:
        push    5
        push    eax
        call    FUN_004c8eb0
        mov     ecx, dword ptr [g_007dd268]
        add     esp, 8
        call    FUN_00511760
        pop     edi
        pop     esi
        mov     dword ptr [g_00858a38], 0x535260
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_534e89:
        mov     al, byte ptr [g_007ddd1c]
        test    al, al
        jz      l_loc_535015
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, dword ptr [edx]
        mov     ecx, dword ptr [ecx + 0x0c]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536840
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_0051fb70
        call    FUN_00701da0
        call    FUN_00405fa0
        mov     eax, dword ptr [g_007ddd10]
        mov     ecx, dword ptr [g_007ddd14]
        mov     edx, dword ptr [g_007ddd0c]
        push    eax
        push    ecx
        push    edx
        call    FUN_00402f90
        push    0
        push    0
        push    0
        call    FUN_00701f20
        mov     edx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        xor     ecx, ebx
        lea     edx, [ecx + 0x0c]
        mov     ecx, dword ptr [edx]
        mov     edi, dword ptr [g_007ddd0c]
        test    eax, eax
        setnz   al
        xor     ecx, 0x85739531
        mov     byte ptr [ecx + 0x17], al
        mov     eax, dword ptr [edx]
        or      ecx, 0xffffffff
        xor     eax, 0x85739531
        mov     ebx, dword ptr [eax + 0x50]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     esi, [ebx + 0x4f8]
        mov     dword ptr [ebp - 4], esi
        mov     esi, edi
        mov     edi, dword ptr [ebp - 4]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [g_007b7e40]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     ebx, 0x5f8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jz      l_loc_534ff8
        mov     edx, dword ptr [edx]
        xor     edx, 0x85739531
        push    0x1c18
        mov     byte ptr [edx + 0x16], 1
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_loc_534fa5
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     l_loc_534fa7

    l_loc_534fa5:
        xor     eax, eax

    l_loc_534fa7:
        push    5
        push    eax
        call    FUN_004c8eb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x0c]
        add     esp, 8
        xor     ecx, 0x85739531
        call    FUN_0053fa70
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_005116e0
        mov     edx, dword ptr [g_007dd268]
        pop     edi
        pop     esi
        mov     dword ptr [g_00858a38], 0x535260
        mov     dword ptr [edx + 0x24], 3
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_534ff8:
        push    0x77b510
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_loc_53524f
        int     3
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_535015:
        mov     eax, dword ptr [g_007ddd08]
        test    eax, eax
        jz      l_loc_5350b8
        push    0x1c18
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_loc_53503c
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     l_loc_53503e

    l_loc_53503c:
        xor     eax, eax

    l_loc_53503e:
        push    5
        push    eax
        call    FUN_004c8eb0
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x0c]
        add     esp, 8
        xor     ecx, 0x85739531
        call    FUN_0053fa70
        mov     ecx, dword ptr [g_007dab44]
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [g_007ddd08]
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x0c]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_005386c0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x0c]
        xor     ecx, 0x85739531
        mov     dword ptr [g_00858a38], 0x538000
        call    FUN_005394a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_5350b8:
        mov     al, byte ptr [g_007ddd1e]
        test    al, al
        mov     ecx, dword ptr [g_007dd268]
        jz      l_loc_535239
        call    FUN_0051fb70
        mov     eax, dword ptr [g_007dd268]
        test    eax, eax
        jz      l_loc_5350ec
        mov     eax, dword ptr [eax + 0x40ee8]
        test    eax, eax
        jz      l_loc_5350ec
        mov     ecx, dword ptr [eax + 0x60]
        mov     dword ptr [g_00858930], ecx

    l_loc_5350ec:
        call    FUN_00704700
        push    0
        push    0
        push    0
        call    FUN_00701f20
        mov     ecx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [ecx]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ebx
        lea     ecx, [edx + 0x0c]
        test    eax, eax
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ecx]
        setnz   dl
        xor     eax, 0x85739531
        xor     ecx, 0x85739531
        mov     byte ptr [eax + 0x17], dl
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jz      l_loc_535231
        push    0
        push    0
        push    1
        call    FUN_00701f20
        mov     esi, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     edi, dword ptr [esi]
        mov     ecx, edx
        xor     ecx, edi
        mov     esi, dword ptr [ecx + 0x0c]
        mov     ecx, dword ptr [ecx + 0x14]
        test    eax, eax
        setnz   al
        xor     esi, 0x85739531
        xor     ecx, 0x85739531
        mov     byte ptr [esi + 0x16], al
        jnz     l_loc_535197
        push    0x1c18
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_loc_535184
        mov     ecx, eax
        call    FUN_004cc3c0
        jmp     l_loc_535186

    l_loc_535184:
        xor     eax, eax

    l_loc_535186:
        push    5
        push    eax
        call    FUN_004c8eb0
        mov     edx, dword ptr [g_007dab40]
        add     esp, 8

    l_loc_535197:
        mov     eax, dword ptr [g_007dab44]
        xor     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx + 0x0c]
        lea     eax, [edx + 0x0c]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x16]
        test    dl, dl
        jz      l_loc_5351ea
        mov     ecx, dword ptr [eax]
        push    1
        xor     ecx, 0x85739531
        call    FUN_00536840
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x0c]
        xor     ecx, 0x85739531
        call    FUN_0053fa70
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_005116e0
        jmp     l_loc_535213

    l_loc_5351ea:
        mov     esi, dword ptr [eax]
        xor     esi, 0x85739531
        mov     ecx, dword ptr [esi + 0x50]
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov     esi, dword ptr [esi + 0x54]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [g_007dd268]
        call    FUN_00511760

    l_loc_535213:
        mov     ecx, dword ptr [g_007dd268]
        pop     edi
        pop     esi
        mov     dword ptr [g_00858a38], 0x535260
        mov     dword ptr [ecx + 0x24], 3
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    l_loc_535231:
        mov     ecx, dword ptr [g_007dd268]
        jmp     l_loc_535240

    l_loc_535239:
        mov     dword ptr [ecx + 0x24], 0xffffffff

    l_loc_535240:
        call    FUN_00511640
        mov     dword ptr [g_00858a38], 0x535260

    l_loc_53524f:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
