/*
 * FUN_0051a820 (569 B) — Custom decal texture loader.
 *
 * __stdcall (RET 0x4). Loads a custom decal texture by name,
 * computing a CRC-like hash and building a filename.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412570(const char *str);
extern void __stdcall FUN_00412950(void);
extern void __stdcall FUN_00412780(const char *str);
extern int __stdcall FUN_004125e0(int param1, const char *str);
extern void __stdcall FUN_00412740(int param);
extern void __stdcall FUN_0040d9b0(void);
extern void __stdcall FUN_0041de80(int param1, int param2);
extern void __stdcall FUN_0041e110(int *out, int count);
extern void __stdcall FUN_0041dec0(void);
extern void __stdcall FUN_004084e0(int ptr);
extern void __stdcall FUN_006fb7a0(int param1, int param2);

__declspec(naked) void FUN_0051a820(void)
{
    

extern int DAT_0076b298;
extern int DAT_0076b420;
__asm {
sub     esp, 0x50
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x5c]
        push    ebp
        lea     ecx, [esp + 0x14]
        call    FUN_00412570

        lea     ecx, [esp + 0x10]
        call    FUN_00412950

        mov     eax, dword ptr [esp + 0x10]
        push    0x77a070
        push    eax
        call dword ptr [DAT_0076b298]
        mov     edx, eax
        xor     ebx, ebx
        add     esp, 8
        cmp     edx, ebx
        jz      l_no_underscore

        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xb
        pop     edi
        jnz     l_null_term

        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret

    l_null_term:
        mov     byte ptr [edx], bl

    l_no_underscore:
        push    esi
        push    0x779ff0
        lea     ecx, [esp + 0x10]
        xor     esi, esi
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00412780

        mov     ecx, dword ptr [esp + 0xc]
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0

        mov     edx, dword ptr [esp + 0xc]
        push    ebx
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_0041de80

        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x48]
        sub     eax, edx
        add     eax, ecx
        jz      l_hash_done

    l_hash_loop:
        push    1
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_0041e110

        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x48]
        and     edx, 0xffff
        add     esi, edx
        sub     eax, dword ptr [esp + 0x40]
        add     eax, ecx
        jnz     l_hash_loop

    l_hash_done:
        lea     ecx, [esp + 0x2c]
        call    FUN_0041dec0

        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        mov     dword ptr [esp + 0x60], eax
        jz      l_skip_inc_refcnt

        inc     byte ptr [eax - 1]

    l_skip_inc_refcnt:
        mov     ecx, dword ptr [esp + 0x60]
        push    0x77a070
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
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
        push    esi
        lea     edx, [esp + 0x20]
        push    0x77a064
        push    edx
        call dword ptr [DAT_0076b420]

        mov     ecx, dword ptr [esp + 0x6c]
        add     esp, 0xc
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_00412740

        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0

        push    0x779ff0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00412780

        mov     edx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        pop     esi
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
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_006fb7a0

        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
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
        mov     eax, dword ptr [esp + 0x5c]
        cmp     eax, ebx
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
        mov     eax, dword ptr [esp + 8]
        cmp     eax, ebx
        jz      l_skip_refcnt5

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt5

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt5:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      l_skip_refcnt6

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt6

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt6:
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret
    }


}
