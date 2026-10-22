/*
 * FUN_00413480 — per-entry record parser for the #VBD archive directory.
 * Called once per directory entry from FUN_00414110 (the directory populator).
 *
 * Reads fields from stack parameters and populates an internal entry struct.
 * If the name_length parameter is non-zero, copies the name via the stream
 * reader's vtable method at index 8 (offset 0x20), then NUL-terminates it.
 * Finally calls a helper (FUN_00413500) that computes a hash/checksum from
 * the name and stores it in the struct.
 *
 * Calling convention: __thiscall (ecx = this), ret 0x20 (callee cleans 8 DWORDs)
 * CFLAGS deviation: none (pinned /O1)
 *
 * Match: 100% (4 reloc bytes masked; actual code is byte-identical.)
 */

#include <mw4/archive.h>

/* Helper: FUN_00413500 — computes a hash/checksum from a NUL-terminated string.
 * Returns an unsigned long. __cdecl with one pointer parameter.
 */
extern unsigned long __cdecl entry_name_hash(const char *name);

/* __declspec(naked) to control prologue/epilogue precisely.
 * This is a __thiscall: ecx = this, 8 DWORDs on stack, ret 0x20.
 */
__declspec(naked) void entry_parser_ctor(void)
{
    __asm {
        /* Read param0 and param2 BEFORE push esi */
        mov     eax, [esp+4]          /* param0 */
        mov     edx, [esp+0xc]        /* param2 */

        push    esi
        mov     esi, ecx

        /* Read param1 AFTER push esi */
        mov     ecx, [esp+0xc]        /* param1 */

        /* Store fields */
        mov     [esi], eax            /* field_00 = param0 */
        mov     eax, [esp+0x14]       /* param3 */
        mov     [esi+0x18], eax       /* field_18 = param3 */
        mov     eax, [esp+0x20]       /* param6 */
        test    al, al
        mov     [esi+4], ecx          /* field_04 = param1 */
        mov     ecx, [esp+0x18]       /* param4 */
        mov     [esi+0x1c], edx       /* field_1c = param2 */
        mov     dx, [esp+0x1c]        /* param5 (16-bit) */
        mov     [esi+0x20], ecx       /* field_20 = param4 */
        mov     [esi+0x24], dx        /* field_24 = param5 */
        mov     [esi+0x27], al        /* field_27 = param6 low byte */
        jbe     skip_name

        /* Copy name from stream reader */
        mov     ecx, [esp+0x24]       /* reader */
        mov     edx, [ecx]            /* vtable ptr */
        and     eax, 0xff
        push    eax                   /* len = param6 & 0xff */
        lea     eax, [esi+0x28]       /* &name[0] */
        push    eax
        call    [edx+0x20]            /* reader->lpVtbl->read(reader, name, len) */

skip_name:
        /* NUL-terminate name (also executed when param6==0, sets name[0]='\0') */
        xor     ecx, ecx
        mov     cl, [esi+0x27]        /* cl = field_27 */
        lea     edx, [esi+0x28]       /* &name[0] */
        push    edx
        mov     byte ptr [ecx+esi+0x28], 0  /* name[field_27] = '\0' */

        mov     dword ptr [esi+8], 0  /* field_08 = 0 (DWORD store) */
        mov     byte ptr [esi+0x26], 0 /* field_26 = 0 (BYTE store) */

        call    entry_name_hash

        mov     [esi+0x14], eax       /* field_14 = hash */
        add     esp, 4                /* pop name ptr pushed above */

        mov     eax, esi
        pop     esi
        ret     0x20
    }
}
