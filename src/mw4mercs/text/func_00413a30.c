/*
 * FUN_00413a30 — directory-entry insertion for the #VBD archive.
 *
 * Allocates and constructs a new entry (via entry_ctor_00413260) and links it
 * into the caller's context (param_1). Computes the name length (bVar6) by
 * scanning the name string, and the name hash via entry_name_hash
 * (FUN_00413500). Allocation size = name_len + 0x2c via archive_alloc
 * (FUN_004084C0).
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Callees (reloc-masked in diff):
 *   FUN_00413500 — entry_name_hash (__cdecl, 1 param)
 *   FUN_004084C0 — archive_alloc (__cdecl, 2 params)
 *   FUN_00413260 — entry_ctor (__thiscall, 3 stack params)
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

extern void *__cdecl archive_alloc(unsigned long size, unsigned long param); /* FUN_004084C0 */
extern unsigned long __cdecl entry_name_hash(const char *name);              /* FUN_00413500 */
extern void *__cdecl entry_ctor_00413260(void);                              /* FUN_00413260 */

__declspec(naked) void func_00413a30(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx            ; esi = param_1 (this)
        mov     ebx, [esi]          ; ebx = *param_1 (piVar3)
        mov     byte ptr [ebx+0x28], 1
        mov     eax, [ebx]          ; eax = *ebx (iVar7)
        xor     ecx, ecx
        mov     cx, word ptr [eax+0x16]  ; cx = *(short*)(iVar7+0x16)
        push    edi
        mov     edi, [esi+8]        ; edi = param_1[2] (piVar8 = name)
        mov     word ptr [esi+4], cx    ; *(short*)(param_1+1) = sVar2
        inc     ecx
        test    edi, edi
        mov     word ptr [eax+0x16], cx ; *(short*)(iVar7+0x16) = sVar2+1
        jz      name_empty
        ; name != NULL
        push    edi
        call    entry_name_hash     ; eax = uVar4 (name hash)
        or      ecx, 0xffffffff     ; ecx = -1
        mov     ebp, eax            ; ebp = uVar4
        xor     eax, eax
        add     esp, 4
        repne   scasb               ; scan for NUL terminator
        not     ecx
        dec     ecx
        mov     byte ptr [esp+0x10], cl  ; bVar6 = name length
        jmp     alloc
    name_empty:
        xor     ebp, ebp
        mov     byte ptr [esp+0x10], 0
    alloc:
        mov     edi, [esp+0x10]     ; edi = bVar6 (zero-extended)
        mov     eax, [ebx+0x24]     ; eax = piVar3[9]
        mov     ecx, edi
        and     ecx, 0xff
        push    eax
        add     ecx, 0x2c
        push    ecx
        call    archive_alloc       ; eax = archive_alloc(bVar6+0x2c, piVar3[9])
        add     esp, 8
        test    eax, eax
        jz      alloc_failed
        push    edi
        push    ebp
        push    esi
        mov     ecx, eax
        call    entry_ctor_00413260 ; eax = entry_ctor(param_1, uVar4, bVar6)
        jmp     done_alloc
    alloc_failed:
        xor     eax, eax
    done_alloc:
        mov     ecx, [esi+8]
        test    ecx, ecx
        mov     edx, [eax+8]
        mov     [esi+0x18], edx     ; param_1[6] = ppiVar5[2]
        jz      no_name
        lea     ecx, [eax+0x28]
        mov     [esi+8], ecx        ; param_1[2] = ppiVar5 + 10
    no_name:
        mov     edx, [eax]
        mov     ecx, [eax+4]
        pop     edi
        mov     [esi+0xc], edx      ; param_1[3] = *ppiVar5
        mov     [esi+0x10], ecx     ; param_1[4] = ppiVar5[1]
        mov     [esi+0x1c], eax     ; param_1[7] = ppiVar5
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
