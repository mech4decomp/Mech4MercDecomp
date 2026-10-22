/*
 * FUN_00527010 (297 B) — Pilot name resolver.
 *
 * Resolves pilot name from game data, copies to buffer.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __stdcall FUN_00412570(const char *str);
extern void __stdcall FUN_004084e0(void *ptr);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;

__declspec(naked) void FUN_00527010(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x4]     ; param_1
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]     ; piVar2 = param_1->field_4
        mov     eax, dword ptr [ebx]           ; *piVar2
        test    eax, eax
        push    esi
        push    edi
        jz      alloc_buf
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x0

alloc_buf:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        mov     edi, eax
        xor     eax, eax
        mov     ecx, 0x40
        mov     dword ptr [ebx], edi
        rep     stosd

        mov     ecx, dword ptr [DAT_007dab44]   ; mov ecx, [0x007dab44]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [DAT_007dab40]   ; mov edx, [0x007dab40]
        xor     eax, edx
        mov     esi, dword ptr [eax + 0xc]
        xor     esi, 0x85739531
        cmp     byte ptr [esi + 0x17], 0x0
        jz      use_alt_name

        mov     esi, dword ptr [eax + 0x14]
        xor     esi, 0x85739531
        cmp     byte ptr [esi + 0x17fc], 0x0
        jz      use_alt_name

        ; Use primary name path
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        add     eax, 0x3f8
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x10]     ; param_1 (string)
        test    edi, edi
        jz      done

        ; strlen + memcpy for primary name
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb

        ; refcount decrement
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      done
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     done
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8

use_alt_name:
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     edi, dword ptr [eax + 0xa8]     ; pcVar7
        test    edi, edi
        jz      done
        mov     al, byte ptr [edi - 0x1]
        lea     edx, [edi - 0x1]
        or      ecx, 0xffffffff
        inc     al
        mov     byte ptr [edx], al
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        dec     byte ptr [edx]
        jnz     done
        push    edx
        call    FUN_004084e0
        add     esp, 0x4

done:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret     0x8
    }


}
