/*
 * FUN_00522050 (701 B) — Linked-list processing function.
 *
 * Processes a linked list of entries, allocating buffers and copying
 * string data. Uses obfuscated global pointers (0x007DAB44, 0x007DAB40)
 * with XOR key 0x85739531 for indirect call dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

/* External function declarations */
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

__declspec(naked) void FUN_00522050(void)
{
    
__asm {
sub     esp, 0x74
        mov     eax, [esp + 0x78]

        ; Load fields from input struct
        mov     ecx, [eax + 0x14]
        mov     edx, [eax + 0x1c]
        push    ebx
        mov     ebx, [eax + 0x18]
        push    ebp
        mov     ebp, [eax + 0x10]
        mov     [esp + 0x08], ecx
        mov     ecx, [eax + 0x20]
        mov     [esp + 0x10], edx
        mov     edx, dword ptr [DAT_007dab44]
        push    esi
        mov     esi, [eax + 0x0c]
        mov     [esp + 0x18], ecx
        mov     ecx, [edx]
        mov     edx, dword ptr [DAT_007dab40]
        push    edi
        mov     edi, [eax + 0x08]
        mov     eax, [eax + 0x04]
        xor     ecx, edx
        mov     edx, [eax]
        mov     eax, [ecx + 0x44]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x34]
        push    edx
        call    FUN_00595b60
        push    0x01
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_fail

        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     [esp + 0x14], eax
        jmp     alloc_done

    alloc_fail:
        mov     dword ptr [esp + 0x14], 0x00

    alloc_done:
        mov     ecx, [esp + 0x10]
        mov     edx, [esp + 0x14]
        mov     eax, [edx + 0x10]
        sub     ecx, esi
        mov     [esp + 0x28], ecx
        mov     ecx, [esp + 0x18]
        sub     ecx, ebx
        sub     edi, esi
        sub     ebp, esi
        mov     [esp + 0x18], ecx
        mov     ecx, [esp + 0x1c]
        sub     esi, ebx
        sub     ecx, ebx
        mov     [esp + 0x24], edi
        mov     [esp + 0x2c], ebp
        mov     [esp + 0x20], esi
        mov     [esp + 0x30], ecx
        jmp     loop_check

    loop_next:
        mov     eax, [esp + 0x3c]

    loop_check:
        test    eax, eax
        jz      loop_end

        mov     ebp, [eax]
        test    ebp, ebp
        mov     eax, [eax + 0x04]
        mov     [esp + 0x3c], eax
        jz      loop_end

        ; Process entry
        mov     ecx, [esp + 0x20]
        mov     edx, [ebp + 0x14]
        lea     eax, [ecx + ebx*1]
        mov     ecx, [esp + 0x24]
        mov     [eax + ecx*1], edx
        mov     edx, [ebp + 0x18]
        mov     ecx, [ebp + 0x1c]
        mov     [eax], edx
        mov     edx, [esp + 0x28]
        mov     [eax + edx*1], ecx
        mov     ecx, [ebp + 0x20]
        mov     edx, [esp + 0x2c]
        mov     [eax + edx*1], ecx

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
        mov     [esp + 0x1c], eax
        mov     [ebx], eax

        ; Obfuscated dispatch: load from 0x007dab44, XOR with 0x007dab40
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x0c]
        mov     eax, [ebp + 0x24]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570

        ; strlen + memcpy (string copy)
        mov     edi, [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, [esp + 0x1c]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        ; Second buffer: free old at [esi+ebx*1]
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
        mov     [esp + 0x1c], eax
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
        mov     edi, [esp + 0x1c]
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb

        ; Third buffer: free old at [esp+0x30 + ebx*1]
        mov     esi, [esp + 0x30]
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
        mov     edx, dword ptr [DAT_007dab40]
        mov     [esp + 0x1c], eax
        mov     [esi + ebx*1], eax

        ; Third obfuscated dispatch
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        mov     eax, [ebp + 0x2c]
        xor     ecx, edx
        mov     ecx, [ecx + 0x0c]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780

        ; strlen + memcpy (third string copy)
        mov     edi, [esp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, [esp + 0x1c]
        rep movsd
        mov     ecx, edx
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

        mov     eax, [ecx]
        push    0x01
        call    dword ptr [eax]

    skip_release:
        lea     ecx, [esp + 0x30]
        call    FUN_004d21c0
        mov     eax, 0x01
        add     esp, 0x74
        ret     0x08
    }


}
