/*
 * FUN_00528b40 (810 B) — Screen resolution mode setup helper.
 *
 * __stdcall. Queries display modes at 5 resolutions, allocates string buffers
 * for mode descriptions, copies string constants, returns count of modes set up.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_00704a80(int a, int b, int c, int d);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern void __stdcall FUN_00412570(const char *str);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_00528b40(int param_1)
{
    

extern int DAT_0085894c;
__asm {
sub     esp, 8
        mov     eax, dword ptr [esp + 0x0c]
        mov ecx, dword ptr [DAT_0085894c]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        push    esi
        push    edi
        push    0x1e0
        push    0x280
        push    ecx
        push    0x13
        mov     dword ptr [esp + 0x2c], eax
        xor     ebx, ebx
        call    FUN_00704a80
        test    eax, eax
        jz      l_skip1
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_alloc1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], ebx

    l_alloc1:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        push    0x77a484
        lea     ecx, [esp + 0x14]
        mov     dword ptr [ebp], ebx
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     ebx, 1
        jz      l_skip1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip1:
        mov eax, dword ptr [DAT_0085894c]
        push    0x258
        push    0x320
        push    eax
        push    0x13
        call    FUN_00704a80
        test    eax, eax
        jz      l_skip2
        mov     eax, dword ptr [ebp + ebx * 4]
        test    eax, eax
        jz      l_alloc2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp + ebx * 4], 0

    l_alloc2:
        push    0
        push    0x80
        call    FUN_006f3c80
        push    0x77a478
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebp + ebx * 4], eax
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        test    eax, eax
        jz      l_skip2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip2:
        mov eax, dword ptr [DAT_0085894c]
        push    0x300
        push    0x400
        push    eax
        push    0x13
        call    FUN_00704a80
        test    eax, eax
        jz      l_skip3
        mov     eax, dword ptr [ebp + ebx * 4]
        test    eax, eax
        jz      l_alloc3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp + ebx * 4], 0

    l_alloc3:
        push    0
        push    0x80
        call    FUN_006f3c80
        push    0x77a46c
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebp + ebx * 4], eax
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        test    eax, eax
        jz      l_skip3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip3
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip3:
        mov eax, dword ptr [DAT_0085894c]
        push    0x400
        push    0x500
        push    eax
        push    0x13
        call    FUN_00704a80
        test    eax, eax
        jz      l_skip4
        mov     eax, dword ptr [ebp + ebx * 4]
        test    eax, eax
        jz      l_alloc4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp + ebx * 4], 0

    l_alloc4:
        push    0
        push    0x80
        call    FUN_006f3c80
        push    0x77a460
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebp + ebx * 4], eax
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        test    eax, eax
        jz      l_skip4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip4
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip4:
        mov eax, dword ptr [DAT_0085894c]
        push    0x4b0
        push    0x640
        push    eax
        push    0x13
        call    FUN_00704a80
        test    eax, eax
        jz      l_last_epilogue_eax
        mov     eax, dword ptr [ebp + ebx * 4]
        test    eax, eax
        jz      l_alloc5
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp + ebx * 4], 0

    l_alloc5:
        push    0
        push    0x80
        call    FUN_006f3c80
        push    0x77a454
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [ebp + ebx * 4], eax
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        test    eax, eax
        jz      l_last_refcnt_jz
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_last_refcnt_jnz
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_last_epilogue_eax:
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        mov     dword ptr [eax], ebx
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 8
        ret     8

    l_last_refcnt_jnz:
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], ebx
        mov     eax, 1
        pop     ebx
        add     esp, 8
        ret     8

    l_last_refcnt_jz:
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], ebx
        mov     eax, 1
        pop     ebx
        add     esp, 8
        ret     8
    }


}
