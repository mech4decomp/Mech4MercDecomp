/*
 * MW4Stats.dll - FUN_100011a0 (0x100011A0, 48 B, __fastcall)
 * Frees a buffer and clears fields of a small struct (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * Alias thunks (former cpp/ translation, deleted 2026-08; byte-identical jmp
 * thunks, no .c scaffold): FUN_10001190 jumps here; FUN_10004060 jumps to
 * FUN_10001190 (i.e. chains to this function).
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100011a0 (48 B) -- __fastcall cleanup/free helper:
 * if (f3 > 0 && f0) IAT free(f0);  f0 = f4 = f3 = 0.
 * Note: f3 is unsigned int compared with '> 0' (JBE form), f0 is a pointer
 * (JZ form) -- mixed comparison types.
 */
extern void *g_100210ec; /* IAT: free */

__declspec(naked) void FUN_100011a0(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        jbe done
        mov eax, dword ptr [esi]
        test eax, eax
        jz done
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
    done:
        mov dword ptr [esi], 0x0
        mov dword ptr [esi + 0x10], 0x0
        mov dword ptr [esi + 0xc], 0x0
        pop esi
        ret
    }
}
