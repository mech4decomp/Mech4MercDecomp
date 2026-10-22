/*
 * FUN_004143d0 — #VBD archive writer (variant): serialize directory + entries.
 *
 * Twin of FUN_00414260 but iterates the entries in two passes: first from
 * uVar7 (FUN_00415040 result) up to the entry count, then from 0 up to
 * uVar7. Serializes each entry via FUN_00413700.
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_0041EE70 — stream ctor
 *   FUN_0041E690 — stream_init
 *   FUN_00415040 — entry-count helper
 *   FUN_00413BE0 — entry_find_by_index
 *   FUN_00413700 — entry_serialize
 *   FUN_004149C0 — writer finalize
 *   FUN_0041E710 — stream_base_cleanup
 *   FUN_0041EF60 — stream dtor helper
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void __cdecl stream_init(void *buf, unsigned long size, int zero); /* FUN_0041E690 */
extern void __cdecl stream_base_cleanup(void *stream);                    /* FUN_0041E710 */
extern void __cdecl entry_find_by_index(void);                            /* FUN_00413BE0 */
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00413700(void);
extern void __cdecl FUN_004149c0(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void func_004143d0(void)
{
    __asm {
        sub     esp, 0x90
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx            ; esi = param_1
        mov     ecx, 0x14           ; ecx = puVar5 = 0x14
        push    edi
        xor     edi, edi            ; edi = puVar9 = 0
        mov     [esp+0x10], ecx     ; local_90 = 0x14
        lea     ebp, [esi+0x18]     ; ebp = param_1 + 6
        mov     edx, 0x3fd          ; edx = iVar6 = 0x3fd
    bucket_loop:
        mov     eax, [ebp]          ; eax = *piVar4 (iVar1)
        test    eax, eax
        jz      next_bucket
    entry_loop:
        xor     ebx, ebx
        mov     bl, [eax+0x27]      ; bl = *(byte*)(iVar1+0x27)
        lea     ecx, [ecx+ebx*1+0x17]  ; ecx += bl + 0x17
        mov     [esp+0x10], ecx     ; local_90 = ecx
        mov     ebx, [eax+0x1c]     ; ebx = *(int*)(iVar1+0x1c)
        mov     eax, [eax+0xc]      ; eax = *(int*)(iVar1+0xc) (next)
        add     edi, ebx            ; edi += ebx (puVar9)
        test    eax, eax
        jnz     entry_loop
    next_bucket:
        add     ebp, 4              ; piVar4++
        dec     edx                 ; iVar6--
        jnz     bucket_loop
        add     ecx, edi            ; ecx = puVar5 + puVar9 (iStack_a4)
        push    ecx
        lea     ecx, [esp+0x7c]
        call    FUN_0041ee70
        mov     eax, [esp+0x10]     ; eax = local_90
        mov     ecx, [esp+0x8c]
        push    0
        push    eax
        push    ecx
        lea     ecx, [esp+0x24]
        call    stream_init
        mov     edx, [esp+0x10]     ; edx = local_90
        mov     eax, [esp+0x8c]
        push    0
        push    edi                 ; push puVar9
        add     eax, edx
        push    eax
        lea     ecx, [esp+0x64]
        call    stream_init
        mov     edx, [esp+0x18]
        push    4
        lea     ecx, [esi+4]        ; ecx = param_1 + 1
        push    ecx
        lea     ecx, [esp+0x20]
        call    dword ptr [edx+0x24]  ; vtable write
        mov     edx, [eax]
        push    4
        lea     ecx, [esi+8]        ; ecx = param_1 + 2
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]  ; vtable write
        mov     edx, [eax]
        push    4
        lea     ecx, [esi+0xc]      ; ecx = param_1 + 3
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]  ; vtable write
        mov     eax, [esp+0x18]
        push    4
        lea     edx, [esp+0x14]
        push    edx
        lea     ecx, [esp+0x20]
        call    dword ptr [eax+0x24]  ; vtable write
        mov     edx, [eax]
        push    2
        lea     edi, [esi+0x14]     ; edi = param_1 + 5
        push    edi
        mov     ecx, eax
        call    dword ptr [edx+0x24]  ; vtable write
        mov     edx, [eax]
        push    2
        lea     ecx, [esi+0x16]     ; ecx = param_1 + 0x16
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]  ; vtable write
        mov     di, [edi]           ; di = *(ushort*)(param_1+5) (uVar8)
        mov     edx, edi
        and     edx, 0xffff
        push    edx
        call    FUN_00415040        ; eax = FUN_00415040(uVar8)
        mov     ebp, [esi]          ; ebp = *param_1 (uVar2)
        mov     ebx, eax            ; ebx = iVar6 (uVar7)
        add     esp, 4
        cmp     bx, di              ; cmp uVar7 vs uVar8
        mov     [esp+0x38], ebp
        mov     [esp+0x14], ebx
        jnc     loop2_setup
    loop1:
        mov     ax, [esp+0x14]      ; ax = uVar7
        push    1
        lea     ecx, [esp+0x3c]
        mov     word ptr [esp+0x40], ax
        call    entry_find_by_index ; FUN_00413BE0(1)
        lea     ecx, [esp+0x58]
        push    ecx
        mov     ecx, [esp+0x58]
        lea     edx, [esp+0x1c]
        push    edx
        push    ebp
        call    FUN_00413700        ; FUN_00413700(uVar2, ...)
        mov     eax, [esp+0x14]     ; eax = uVar7
        inc     eax
        cmp     ax, di
        mov     [esp+0x14], eax
        jc      loop1
    loop2_setup:
        xor     edi, edi            ; edi = 0 (uVar8)
        test    bx, bx              ; test uVar7
        jbe     entries_done
    loop2:
        push    1
        lea     ecx, [esp+0x3c]
        mov     word ptr [esp+0x40], di
        call    entry_find_by_index ; FUN_00413BE0(1)
        lea     eax, [esp+0x58]
        push    eax
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, [esp+0x5c]
        push    ebp
        call    FUN_00413700        ; FUN_00413700(uVar2, ...)
        inc     edi
        cmp     di, bx
        jc      loop2
    entries_done:
        mov     eax, [esp+0x68]     ; eax = iStack_68
        mov     edx, [esp+0x6c]     ; edx = iStack_64
        mov     ebx, [esp+0x10]     ; ebx = local_90
        sub     edx, eax
        mov     eax, [esp+0x8c]
        add     edx, ebx
        push    edx
        push    eax
        mov     ecx, ebp            ; ecx = uVar2
        call    FUN_004149c0
        mov     ecx, [esp+0x10]     ; ecx = local_90
        mov     [esi+0x10], ecx     ; param_1[4] = local_90
        lea     ecx, [esp+0x58]
        call    stream_base_cleanup
        lea     ecx, [esp+0x18]
        call    stream_base_cleanup
        lea     ecx, [esp+0x78]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x90
        ret
    }
}
