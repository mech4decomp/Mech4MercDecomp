/*
 * FUN_00413ad0 — directory-entry re-insertion for the #VBD archive.
 *
 * Removes the previous entry (param_1[7]) from the hash chains via
 * FUN_00413990, then allocates and constructs a new entry (via
 * entry_ctor_00413360) and links it into the context (param_1). The old
 * entry (and its name buffer) is freed via archive_free (FUN_004084E0).
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413990 — entry_remove (__thiscall, 1 stack param)
 *   FUN_00413500 — entry_name_hash (__cdecl, 1 param)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *   FUN_00413360 — entry_ctor (__thiscall, 4 stack params)
 *   FUN_004084E0 — archive_free (__cdecl, 1 param)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void func_00413990(void);                                            /* FUN_00413990 */
extern void *__cdecl archive_alloc(unsigned long size, unsigned long param); /* FUN_004084C0 */
extern void __cdecl archive_free(void);                                     /* FUN_004084E0 */
extern unsigned long __cdecl entry_name_hash(const char *name);              /* FUN_00413500 */
extern void *__cdecl entry_ctor_00413360(void);                              /* FUN_00413360 */

__declspec(naked) void func_00413ad0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        mov     eax, [esi]          ; eax = *param_1
        mov     ecx, [esi+0x1c]     ; ecx = param_1[7] (old entry)
        push    edi
        push    esi                 ; stack arg = param_1
        mov     byte ptr [eax+0x28], 1
        call    func_00413990       ; entry_remove(old_entry, param_1)
        mov     edi, [esi+8]        ; edi = param_1[2] (name)
        test    edi, edi
        jz      name_empty
        push    edi
        call    entry_name_hash     ; eax = uVar3 (name hash)
        or      ecx, 0xffffffff     ; ecx = -1
        mov     ebx, eax            ; ebx = uVar3
        xor     eax, eax
        add     esp, 4
        repne   scasb               ; scan for NUL
        not     ecx
        dec     ecx
        mov     byte ptr [esp+0xc], cl  ; bVar5 = name length
        jmp     alloc
    name_empty:
        xor     ebx, ebx
        mov     byte ptr [esp+0xc], bl
    alloc:
        mov     edi, [esp+0xc]      ; edi = bVar5
        mov     ecx, [esi]          ; ecx = *param_1
        mov     edx, [ecx+0x24]     ; edx = *(*param_1+0x24)
        mov     eax, edi
        and     eax, 0xff
        push    edx
        add     eax, 0x2c
        push    eax
        call    archive_alloc       ; eax = archive_alloc(bVar5+0x2c, ...)
        add     esp, 8
        test    eax, eax
        jz      alloc_failed
        mov     ecx, [esi+0x1c]     ; ecx = param_1[7]
        push    ecx
        push    edi
        push    ebx
        push    esi
        mov     ecx, eax
        call    entry_ctor_00413360 ; eax = entry_ctor(param_1, uVar3, bVar5, param_1[7])
        mov     edi, eax            ; edi = piVar4
        jmp     done_alloc
    alloc_failed:
        xor     edi, edi
    done_alloc:
        mov     eax, [esi+8]
        test    eax, eax
        mov     edx, [edi+8]
        mov     [esi+0x18], edx     ; param_1[6] = piVar4[2]
        jz      no_name
        lea     eax, [edi+0x28]
        mov     [esi+8], eax        ; param_1[2] = piVar4 + 10
    no_name:
        mov     ecx, [edi]          ; ecx = *piVar4
        mov     ebx, [esi+0x1c]     ; ebx = param_1[7] (iVar6)
        test    ebx, ebx
        mov     edx, [edi+4]        ; edx = piVar4[1]
        mov     [esi+0xc], ecx      ; param_1[3] = *piVar4
        mov     [esi+0x10], edx     ; param_1[4] = piVar4[1]
        jz      free_done
        mov     al, [ebx+0x26]      ; al = *(char*)(iVar6+0x26)
        test    al, al
        jz      free_self
        mov     eax, [ebx+8]        ; eax = *(int*)(iVar6+8)
        test    eax, eax
        jz      free_self
        push    eax
        call    archive_free        ; archive_free(*(int*)(iVar6+8))
        add     esp, 4
    free_self:
        push    ebx
        call    archive_free        ; archive_free(iVar6)
        add     esp, 4
    free_done:
        mov     [esi+0x1c], edi     ; param_1[7] = piVar4
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
