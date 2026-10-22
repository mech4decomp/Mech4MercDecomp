/*
 * FUN_00413500 — entry-name hash for the #VBD archive directory.
 * Called by entry_parser.c (FUN_00413480) once per archive entry.
 *
 * This is a modified ELF hash: it folds only the low nibble of each
 * character (making it case-insensitive for ASCII letters), XOR-folds
 * the high nibble (bits 28-31) into the low nibble when set, and
 * forces bit 31 on in the final result.
 *
 * Calling convention: __cdecl (one stack arg, caller cleans up).
 * CFLAGS: pinned /O1 (no deviation).
 *
 * NOTE: Uses __declspec(naked) + inline asm to match the exact
 * register allocation and loop structure that VC6 /O1 produces.
 */

__declspec(naked) unsigned long __cdecl entry_name_hash(const char *name)
{
    __asm {
        mov     edx, [esp+4]        ; edx = name
        xor     ecx, ecx            ; ecx = 0
        mov     cl, [edx]           ; cl = *name
        xor     eax, eax            ; hash = 0
        test    cl, cl
        jz      finish

    loop_start:
        shl     eax, 4              ; hash <<= 4
        and     ecx, 0x0f           ; cl &= 0x0f
        add     ecx, eax            ; ecx = hash + (cl & 0x0f)
        mov     eax, ecx            ; hash = ecx
        test    eax, 0xf0000000
        jz      skip_fold
        shr     ecx, 0x1c           ; ecx = hash >> 28
        xor     eax, ecx            ; hash ^= ecx

    skip_fold:
        mov     cl, [edx+1]         ; cl = next char
        inc     edx                 ; advance pointer
        test    cl, cl
        jnz     loop_start

    finish:
        or      eax, 0x80000000
        ret
    }
}
