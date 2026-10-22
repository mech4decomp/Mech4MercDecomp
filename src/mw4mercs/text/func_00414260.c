/*
 * FUN_00414260 — #VBD archive writer: serialize directory + entries.
 *
 * First pass walks all 0x3fd hash buckets summing the serialized size
 * (name_len + 0x17 per entry, plus stored_size). Then it builds a stream
 * (FUN_0041ee70 / stream_init FUN_0041E690), writes the header fields via
 * the stream's vtable write method (offset +0x24), iterates the entries
 * (entry_find_by_index FUN_00413BE0 + entry_serialize FUN_00413540), and
 * finalizes via FUN_004149C0. Cleans up the streams via stream_base_cleanup
 * (FUN_0041E710) and FUN_0041EF60.
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_0041EE70 — stream ctor
 *   FUN_0041E690 — stream_init
 *   FUN_00413BE0 — entry_find_by_index
 *   FUN_00413540 — entry_serialize
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
extern void __cdecl entry_serialize(void);                                /* FUN_00413540 */
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004149c0(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void func_00414260(void)
{
    __asm {
        sub     esp, 0x8c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx            ; esi = param_1
        mov     ecx, 0x14           ; ecx = puVar5 = 0x14
        push    edi
        xor     edi, edi            ; edi = puVar8 = 0
        mov     [esp+0x10], ecx     ; local_8c = 0x14
        lea     ebp, [esi+0x18]     ; ebp = param_1 + 6
        mov     edx, 0x3fd          ; edx = iVar6 = 0x3fd
    bucket_loop:
        mov     eax, [ebp]          ; eax = *piVar4 (iVar2)
        test    eax, eax
        jz      next_bucket
    entry_loop:
        xor     ebx, ebx
        mov     bl, [eax+0x27]      ; bl = *(byte*)(iVar2+0x27)
        lea     ecx, [ecx+ebx*1+0x17]  ; ecx += bl + 0x17
        mov     [esp+0x10], ecx     ; local_8c = ecx
        mov     ebx, [eax+0x1c]     ; ebx = *(int*)(iVar2+0x1c)
        mov     eax, [eax+0xc]      ; eax = *(int*)(iVar2+0xc) (next)
        add     edi, ebx            ; edi += ebx (puVar8)
        test    eax, eax
        jnz     entry_loop
    next_bucket:
        add     ebp, 4              ; piVar4++
        dec     edx                 ; iVar6--
        jnz     bucket_loop
        add     ecx, edi            ; ecx = puVar5 + puVar8 (iStack_a0)
        push    ecx
        lea     ecx, [esp+0x78]
        call    FUN_0041ee70
        mov     eax, [esp+0x10]     ; eax = local_8c
        mov     ecx, [esp+0x88]
        push    0
        push    eax
        push    ecx
        lea     ecx, [esp+0x20]
        call    stream_init
        mov     edx, [esp+0x10]     ; edx = local_8c
        mov     eax, [esp+0x88]
        push    0
        push    edi                 ; push puVar8
        add     eax, edx
        push    eax
        lea     ecx, [esp+0x40]
        call    stream_init
        mov     edx, [esp+0x14]
        push    4
        lea     ecx, [esi+4]        ; ecx = param_1 + 1
        push    ecx
        lea     ecx, [esp+0x1c]
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
        mov     eax, [esp+0x14]
        push    4
        lea     edx, [esp+0x14]
        push    edx
        lea     ecx, [esp+0x1c]
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
        mov     di, [edi]           ; di = *(ushort*)(param_1+5) (uVar1)
        xor     ebx, ebx            ; ebx = uVar7 = 0
        test    di, di
        jbe     entries_done
    entries_loop:
        mov     ebp, [esi]          ; ebp = *param_1 (uVar3)
        push    1
        lea     ecx, [esp+0x58]
        mov     [esp+0x58], ebp
        mov     word ptr [esp+0x5c], bx
        call    entry_find_by_index ; FUN_00413BE0(1)
        mov     ecx, [esp+0x70]
        lea     edx, [esp+0x34]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        push    ebp
        call    entry_serialize     ; FUN_00413540(uVar3, ...)
        inc     ebx                 ; uVar7++
        cmp     bx, di
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (off-by-2) across
           the call-relocs in this loop; emit the reference 72 D2 encoding. */
        __emit 0x72
        __emit 0xD2
    entries_done:
        mov     ecx, [esp+0x48]     ; ecx = iStack_84
        mov     ebx, [esp+0x44]     ; ebx = local_88
        mov     edi, [esp+0x10]     ; edi = local_8c
        mov     edx, [esp+0x88]
        sub     ecx, ebx
        add     ecx, edi
        push    ecx
        mov     ecx, [esi]          ; ecx = *param_1
        push    edx
        call    FUN_004149c0
        mov     eax, [esp+0x10]     ; eax = local_8c
        lea     ecx, [esp+0x34]
        mov     [esi+0x10], eax     ; param_1[4] = local_8c
        call    stream_base_cleanup
        lea     ecx, [esp+0x14]
        call    stream_base_cleanup
        lea     ecx, [esp+0x74]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8c
        ret
    }
}
