/*
 * FUN_005224E0 (791 B) — Linked-list processing function (variant 2).
 *
 * Processes a linked list of entries, allocating buffers and copying
 * string data. Similar to FUN_00522050 but with different field offsets
 * and an extra 0x100-byte buffer copy from entry+0x30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_00595b60(int param);
extern void __cdecl FUN_004d1f80(void *param1, int param2);
extern void *__stdcall FUN_004084d0(int size);
extern void *__cdecl FUN_00592a70(void *param);
extern void __cdecl FUN_006f4230(void *ptr);
extern void *__cdecl FUN_006f3c80(int size, int flags);
extern void __cdecl FUN_00412570(int param);
extern void __cdecl FUN_00412780(int param);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004d21c0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;

/* MOV [ESP], ECX — MSVC6 encodes as 89 0C 24 (3B) instead of 89 4C 24 00 (4B) */
#define EMIT_MOV_ESP_ECX() \
    __asm _emit 0x89 \
    __asm _emit 0x4C \
    __asm _emit 0x24 \
    __asm _emit 0x00

__declspec(naked) void FUN_005224E0(void)
{
    
__asm {
sub     esp, 0x78
        mov     eax, [esp + 0x7c]

        ; Load fields from input struct
        mov     ecx, [eax + 0x14]
        mov     edx, [eax + 0x1c]
        EMIT_MOV_ESP_ECX()                  ; __emit: mov [esp], ecx (MSVC6 uses 89 0C 24)
        mov     ecx, [eax + 0x20]
        mov     [esp + 0x0c], ecx
        mov     ecx, dword ptr [DAT_007dab44]
        mov     ecx, [ecx]
        push    ebx
        mov     ebx, [eax + 0x18]
        mov     [esp + 0x0c], edx
        mov     edx, [eax + 0x24]
        push    ebp
        mov     ebp, [eax + 0x10]
        mov     [esp + 0x18], edx
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x44]
        mov     edx, [eax + 0x04]
        push    esi
        mov     esi, [eax + 0x0c]
        push    edi
        mov     edi, [eax + 0x08]
        mov     eax, [edx]
        xor     ecx, 0x85739531
        mov     ecx, [ecx + 0x34]
        push    eax
        call    FUN_00595b60
        push    0x01
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail

        lea     edx, [esp + 0x44]
        push    edx
        mov     ecx, eax
        call    FUN_00592a70
        mov     [esp + 0x14], eax
        jmp     alloc_done

    alloc_fail:
        mov     dword ptr [esp + 0x14], 0x00

    alloc_done:
        mov     eax, [esp + 0x14]
        mov     ecx, [eax + 0x20]
        mov     eax, [esp + 0x10]
        sub     eax, esi
        mov     [esp + 0x2c], eax
        mov     eax, [esp + 0x18]
        sub     eax, ebx
        mov     [esp + 0x18], eax
        mov     eax, [esp + 0x1c]
        sub     eax, ebx
        sub     edi, esi
        sub     ebp, esi
        mov     [esp + 0x1c], eax
        mov     eax, [esp + 0x20]
        sub     esi, ebx
        sub     eax, ebx
        mov     [esp + 0x28], edi
        mov     [esp + 0x30], ebp
        mov     [esp + 0x24], esi
        mov     [esp + 0x34], eax
        jmp     loop_check

    loop_next:
        mov     ecx, [esp + 0x40]

    loop_check:
        test    ecx, ecx
        jz      loop_end

        mov     ebp, [ecx]
        test    ebp, ebp
        mov     ecx, [ecx + 0x04]
        mov     [esp + 0x40], ecx
        jz      loop_end

        ; Process entry
        mov     edx, [esp + 0x24]
        mov     ecx, [ebp + 0x14]
        lea     eax, [edx + ebx*1]
        mov     edx, [esp + 0x28]
        mov     [eax + edx*1], ecx
        mov     ecx, [ebp + 0x18]
        mov     edx, [ebp + 0x1c]
        mov     [eax], ecx
        mov     ecx, [esp + 0x2c]
        mov     [eax + ecx*1], edx
        mov     edx, [ebp + 0x20]
        mov     ecx, [esp + 0x30]
        mov     [eax + ecx*1], edx

        ; Free old buffer at [ebx] if non-null
        mov     eax, [ebx]
        test    eax, eax
        jz      skip_free1
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0

    skip_free1:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     [esp + 0x20], eax
        mov     [ebx], eax
        mov     eax, [edx]
        xor     eax, ecx
        mov     ecx, [eax + 0x0c]
        mov     eax, [ebp + 0x24]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570

        ; strlen + memcpy
        mov     edi, [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        ; Second buffer
        mov     esi, [esp + 0x18]
        mov     eax, [esi + ebx*1]
        test    eax, eax
        jz      skip_free2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx*1], 0

    skip_free2:
        push    0x00
        push    0x200
        call    FUN_006f3c80
        mov     [esp + 0x20], eax
        mov     [esi + ebx*1], eax

        ; Second obfuscated dispatch
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x0c]
        mov     eax, [ebp + 0x28]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780

        ; strlen + memcpy
        mov     edi, [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        ; Third buffer
        mov     esi, [esp + 0x1c]
        mov     eax, [esi + ebx*1]
        test    eax, eax
        jz      skip_free3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx*1], 0

    skip_free3:
        push    0x00
        push    0x200
        call    FUN_006f3c80
        mov     [esp + 0x20], eax
        mov     [esi + ebx*1], eax

        ; Third obfuscated dispatch
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x0c]
        mov     eax, [ebp + 0x2c]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780

        ; strlen + memcpy
        mov     edi, [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, [esp + 0x20]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        ; Fourth buffer (0x100 bytes, from entry+0x30)
        mov     esi, [esp + 0x34]
        mov     eax, [esi + ebx*1]
        test    eax, eax
        jz      skip_free4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + ebx*1], 0

    skip_free4:
        push    0x00
        push    0x100
        call    FUN_006f3c80
        mov     edi, [ebp + 0x30]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     [esi + ebx*1], edx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb

        ; Check refcount
        mov     eax, [esp + 0x10]
        add     ebx, 4
        test    eax, eax
        jz      loop_next

        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jnz     loop_next

        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     loop_next

    loop_end:
        mov     ecx, [esp + 0x14]
        test    ecx, ecx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      skip_release

        mov     edx, [ecx]
        push    0x01
        call    dword ptr [edx]

    skip_release:
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        mov     eax, 0x01
        add     esp, 0x78
        ret     0x08
    }


}
