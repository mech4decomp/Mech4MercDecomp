/*
 * FUN_00525810 (960 B) — Bot AI initialization with switch dispatch.
 *
 * __thiscall (ECX = this). Dispatches based on a field at [ECX+0x40ee0]
 * to handle different bot AI initialization paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00417aa0(int param1);
extern int __fastcall FUN_004d1f80(int a, int b);
extern void *__cdecl FUN_004084d0(int size);
extern int __fastcall FUN_00592a70(int a, int b);
extern void __stdcall FUN_006f4230(int ptr);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern int __fastcall FUN_005936a0(int a, int b);
extern void __stdcall FUN_004084e0(int ptr);
extern int __fastcall FUN_004d21c0(void);
extern int __fastcall FUN_00595b60(int a, int b);
extern int DAT_00525bd0;   /* switch jump table base 0x00525BD0 */
extern int DAT_007f1fb8;   /* 0x007F1FB8 */
extern int DAT_007f1fc0;   /* 0x007F1FC0 */
extern int DAT_007f1fbc;   /* 0x007F1FBC */

__declspec(naked) void __stdcall FUN_00525810(void)
{
    __asm {
        sub     esp, 0x6c
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 8]
        push    edi
        mov     edi, dword ptr [eax + 0x0c]
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x80], eax
        mov     dword ptr [eax], 1
        mov     eax, dword ptr [ecx + 0x40ee0]
        cmp     eax, 3
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x10], ebx
        /* ja rel32 (target far) */
        ja      l_case_default
        /* jmp dword ptr [eax*4 + table] */
        jmp     dword ptr [eax*4 + DAT_00525bd0]

    /* Case 0: at 0x00525855 */
        mov     edx, dword ptr [edx]
        cmp     edx, -1
        jle     l_case0_fail
        /* mov ecx, [0x007F1FB8] */
        mov     ecx, dword ptr [DAT_007f1fb8]
        push    edx
        call    FUN_00595b60
        mov     dword ptr [esp + 0x1c], eax
        push    1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_case0_alloc_fail
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     l_case0_alloc_done
    l_case0_alloc_fail:
        xor     ebx, ebx
    l_case0_alloc_done:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebx + 0x40], 0
        jz      l_case0_free_old_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_case0_free_old_done:
        push    0
        push    0x80
        call    FUN_006f3c80
        lea     edx, [esp + 0x18]
        mov     ebp, eax
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esi], ebp
        call    FUN_005936a0
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_case0_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_case0_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_case0_skip_free1:
        test    ebx, ebx
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax + 0x40]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], ecx
        mov     edx, dword ptr [eax + 0x4c]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [ecx], 1
        mov     dword ptr [eax], edx
        jz      l_case0_skip_vcall
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
    l_case0_skip_vcall:
        lea     ecx, [esp + 0x38]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x6c
        ret     8

    l_case0_fail:
        mov     dword ptr [edi], 0
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx], 3
        mov     eax, 1
        pop     ebx
        add     esp, 0x6c
        ret     8

    /* Case 1: at 0x00525973 */
        mov     edx, dword ptr [edx]
        cmp     edx, -1
        /* jle rel32 (target far) */
        jle     l_case_default
        /* mov ecx, [0x007F1FB8] */
        mov     ecx, dword ptr [DAT_007f1fc0]
        push    edx
        call    FUN_00595b60
        mov     dword ptr [esp + 0x1c], eax
        push    1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_case1_alloc_fail
        lea     ecx, [esp + 0x38]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     l_case1_alloc_done
    l_case1_alloc_fail:
        xor     ebx, ebx
    l_case1_alloc_done:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebx + 0x40], 0
        jz      l_case1_free_old_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_case1_free_old_done:
        push    0
        push    0x80
        call    FUN_006f3c80
        lea     edx, [esp + 0x20]
        mov     ebp, eax
        push    edx
        mov     ecx, ebx
        mov     dword ptr [esi], ebp
        call    FUN_005936a0
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      l_case1_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_case1_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_case1_skip_free1:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx + 0x4c]
        mov     dword ptr [ecx], 3
        mov     ecx, dword ptr [esp + 0x80]
        lea     edx, [esp + 0x24]
        mov     dword ptr [ecx], eax
        push    edx
        mov     ecx, ebx
        call    FUN_005936a0
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      l_case1_skip_free2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_case1_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_case1_skip_free2:
        mov     ecx, dword ptr [esp + 0x14]
        xor     eax, eax
        test    esi, esi
        setnz   al
        test    ebx, ebx
        mov     dword ptr [ecx], eax
        jz      l_case1_skip_vcall
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
    l_case1_skip_vcall:
        lea     ecx, [esp + 0x38]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x6c
        ret     8

    /* Case 2: at 0x00525AA3 */
        /* mov eax, [0x007F1FBC] */
        mov     eax, dword ptr [DAT_007f1fbc]
        add     eax, 0x10
        mov     dword ptr [esp + 0x30], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x34], ecx
        push    0
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x30], 0x0077a080
        call    FUN_00417aa0
        mov     dword ptr [esp + 0x1c], eax
        push    1
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_case2_alloc_fail
        lea     edx, [esp + 0x38]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     ebx, eax
        jmp     l_case2_alloc_done
    l_case2_alloc_fail:
        xor     ebx, ebx
    l_case2_alloc_done:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [ebx + 0x40], 0
        jz      l_case2_free_old_done
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0
    l_case2_free_old_done:
        push    0
        push    0x100
        call    FUN_006f3c80
        mov     ebp, eax
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi], ebp
        call    FUN_005936a0
        mov     edi, dword ptr [eax]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      l_case2_skip_free1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_case2_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_case2_skip_free1:
        test    ebx, ebx
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [eax + 0x4c]
        mov     edx, dword ptr [esp + 0x80]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax], 0
        mov     dword ptr [ecx], 1
        jz      l_case2_skip_vcall
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
    l_case2_skip_vcall:
        lea     ecx, [esp + 0x38]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x6c
        ret     8

    /* Case 3: at 0x00525BB5 (jump-table target) */
    l_case3:
        mov     dword ptr [edi], 0
        mov     dword ptr [ebx], 0
    /* Default (ja/jle target): at 0x00525BC1 (epilogue) */
    l_case_default:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0x6c
        ret     8
    }
}
