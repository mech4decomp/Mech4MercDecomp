/*
 * FUN_00522310 (242 B) — Linked-list string copy function.
 *
 * Iterates a linked list, allocating 0x100-byte buffers and copying
 * string data from each entry's +0x34 field. Uses obfuscated global
 * pointer dispatch (0x007DAB44 ^ 0x007DAB40).
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
extern void __cdecl FUN_004d21c0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void FUN_00522310(void)
{
    
__asm {
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        mov     ecx, [esp + 0x04]
        sub     esp, 0x48
        push    ebx
        mov     ebx, [ecx + 0x08]
        mov     ecx, [ecx + 0x04]
        mov     edx, [ecx]
        push    ebp
        push    esi
        push    edi
        xor     eax, dword ptr [DAT_007dab40]
        mov     eax, [eax + 0x44]
        xor     eax, 0x85739531
        mov     ecx, [eax + 0x34]
        push    edx
        call    FUN_00595b60
        push    0x01
        add     eax, 0x34
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 0x04
        cmp     eax, esi
        jz      alloc_fail

        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     [esp + 0x5c], eax
        jmp     alloc_done

    alloc_fail:
        mov     [esp + 0x5c], esi
        mov     eax, esi

    alloc_done:
        mov     ebp, [eax + 0x30]
        mov     [esp + 0x10], esi
    loop_check:
        test    ebp, ebp
        jz      loop_end

        mov     esi, [ebp]
        test    esi, esi
        mov     ebp, [ebp + 0x04]
        jz      loop_end

        ; Free old buffer at [ebx] if non-null
        mov     eax, [ebx]
        test    eax, eax
        jz      skip_free
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0

    skip_free:
        push    0x00
        push    0x100
        call    FUN_006f3c80
        mov     edi, [esi + 0x34]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, [esp + 0x5c]
        and     ecx, 3
        rep movsb
        inc     dword ptr [esp + 0x10]
        add     ebx, 4
        jmp     loop_check

    loop_end:
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      skip_release

        mov     edx, [eax]
        push    0x01
        mov     ecx, eax
        call    dword ptr [edx]

    skip_release:
        lea     ecx, [esp + 0x04]
        call    FUN_004d21c0
        /* __emit: mov eax, [esp] — MSVC6 encodes as 8B 04 24 instead of 8B 44 24 00 */
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        add     esp, 0x48
        ret     0x08
    }


}
