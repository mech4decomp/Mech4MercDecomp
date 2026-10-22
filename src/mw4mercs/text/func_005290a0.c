/*
 * FUN_005290a0 (966 B) — Joystick calibration config reader.
 *
 * Reads joystick calibration settings from options.ini, processes throttle
 * calibration entries (bi-throttle or single-throttle), and populates output
 * arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412780(const char *str);
extern int __stdcall FUN_004125e0(char *dst, const char *a, const char *b);
extern void __stdcall FUN_00412740(char *str);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_0040dca0(const char *path, int a, int b);
extern int __stdcall FUN_0040ecc0(const char *key);
extern void __stdcall FUN_0040dd50(void *a, int b);
extern int __stdcall FUN_00412390(int a, void *b, const char *key);
extern int __stdcall FUN_00411a80(const char *key);
extern int __stdcall FUN_0041f8d0(int a, void *b);
extern int __stdcall FUN_00529470(const char *key, int *a, int *b);
extern void __stdcall FUN_0040de20(void *a);
extern void __stdcall FUN_00417980(int a);

extern void *g_007dd268;   /* 0x007DD268 */

__declspec(naked) int __cdecl FUN_005290a0(int param_1)
{
    
__asm {
mov     ecx, dword ptr [g_007dd268]
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 0x4c]
        sub     esp, 0x14c
        cmp     eax, edx
        jle     l_check_neg
        test    eax, eax
        jge     l_check_neg
        xor     eax, eax
        add     esp, 0x14c
        ret

    l_check_neg:
        push    0x779cb0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], 0
        call    FUN_00412780
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 4]
        push    eax
        lea     ecx, [esp + 0x0c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 4]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_skip_refcnt1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt1:
        /* __emit: MSVC6 encodes mov ecx,[esp] as 8B 0C 24, not 8B 4C 24 00 */
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    0x779d60
        push    ecx
        lea     ecx, [esp + 0x0c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 4]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_skip_refcnt2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt2:
        /* __emit: MSVC6 encodes mov edx,[esp] as 8B 14 24, not 8B 54 24 00 */
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0
        push    0
        push    edx
        lea     ecx, [esp + 0x118]
        call    FUN_0040dca0
        push    0x779fb0
        lea     ecx, [esp + 0x110]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0
        jz      l_single_throttle

        push    0
        lea     ecx, [esp + 0x70]
        call    FUN_0040dd50
        push    0
        lea     eax, [esp + 0x70]
        push    eax
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        mov     ecx, esi
        call    FUN_00412390
        push    0x7727b4
        lea     ecx, [esp + 0x70]
        call    FUN_0040ecc0
        push    0x77a498
        mov     ecx, eax
        call    FUN_00411a80
        mov     ebx, eax
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      l_bi_list_empty
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [esi + 4]
        jmp     l_bi_list_check

    l_bi_list_empty:
        xor     edi, edi

    l_bi_list_check:
        test    edi, edi
        jz      l_bi_list_done

    l_bi_loop_entry:
        mov     ebp, dword ptr [esp + 0x168]

    l_bi_loop:
        push    0
        lea     ecx, [esp + 0x20]
        call    FUN_0040dd50
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_0041f8d0
        push    0x77a490
        lea     ecx, [esp + 0x20]
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_bi_skip_entry
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x164]
        lea     edx, [ebp + edi * 4]
        push    edx
        lea     edx, [ecx + edi * 4]
        push    edx
        push    eax
        call    FUN_00529470
        add     esp, 0x0c
        add     edi, eax
        mov     dword ptr [esp + 0x14], edi

    l_bi_skip_entry:
        test    esi, esi
        jz      l_bi_next_empty
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [esi + 4]
        jmp     l_bi_next_check

    l_bi_next_empty:
        xor     edi, edi

    l_bi_next_check:
        lea     ecx, [esp + 0x1c]
        call    FUN_0040de20
        test    edi, edi
        jnz     l_bi_loop

    l_bi_list_done:
        test    ebx, ebx
        jz      l_bi_free_skip
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4

    l_bi_free_skip:
        lea     ecx, [esp + 0x6c]
        jmp     l_epilogue_cleanup1

    l_single_throttle:
        push    0x779d68
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x60]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_skip_refcnt3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt3
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt3:
        mov     ecx, dword ptr [esp + 0x10]
        push    0x779d60
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_skip_refcnt4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt4
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt4:
        mov     edx, dword ptr [esp + 0x10]
        push    0
        push    0
        push    edx
        lea     ecx, [esp + 0x0c8]
        call    FUN_0040dca0
        push    0x779fb0
        lea     ecx, [esp + 0x0c0]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      l_single_done

        push    0
        lea     ecx, [esp + 0x20]
        call    FUN_0040dd50
        push    0
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [g_007dd268]
        mov     ecx, dword ptr [eax + 0x54]
        mov     edx, ecx
        shl     edx, 9
        add     eax, edx
        lea     eax, [ecx + eax + 0x160]
        push    eax
        mov     ecx, esi
        call    FUN_00412390
        push    0x7727b4
        lea     ecx, [esp + 0x20]
        call    FUN_0040ecc0
        push    0x77a498
        mov     ecx, eax
        call    FUN_00411a80
        mov     ebx, eax
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      l_single_list_empty
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [esi + 4]
        jmp     l_single_list_check

    l_single_list_empty:
        xor     edi, edi

    l_single_list_check:
        test    edi, edi
        jz      l_single_list_done

    l_single_loop_entry:
        mov     ebp, dword ptr [esp + 0x168]

    l_single_loop:
        push    0
        lea     ecx, [esp + 0x70]
        call    FUN_0040dd50
        lea     ecx, [esp + 0x6c]
        push    ecx
        mov     ecx, edi
        call    FUN_0041f8d0
        push    0x77a490
        lea     ecx, [esp + 0x70]
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_single_skip_entry
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x164]
        lea     edx, [ebp + edi * 4]
        push    edx
        lea     edx, [ecx + edi * 4]
        push    edx
        push    eax
        call    FUN_00529470
        add     esp, 0x0c
        add     edi, eax
        mov     dword ptr [esp + 0x14], edi

    l_single_skip_entry:
        test    esi, esi
        jz      l_single_next_empty
        mov     edi, dword ptr [esi]
        mov     esi, dword ptr [esi + 4]
        jmp     l_single_next_check

    l_single_next_empty:
        xor     edi, edi

    l_single_next_check:
        lea     ecx, [esp + 0x6c]
        call    FUN_0040de20
        test    edi, edi
        jnz     l_single_loop

    l_single_list_done:
        test    ebx, ebx
        jz      l_single_free_skip
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4

    l_single_free_skip:
        lea     ecx, [esp + 0x1c]
        call    FUN_0040de20
        /* fall through */

    l_single_done:
        lea     ecx, [esp + 0xbc]

    l_epilogue_cleanup1:
        call    FUN_0040de20
        /* fall through */

    l_epilogue_cleanup2:
        lea     ecx, [esp + 0x10c]
        call    FUN_0040de20

    l_epilogue:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      l_final_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_final_skip
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_final_skip:
        mov     eax, dword ptr [esp + 4]
        add     esp, 0x14c
        ret
    }


}
