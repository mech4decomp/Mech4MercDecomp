/*
 * MW4Stats.dll - FUN_10001680 (0x10001680, 44 B, __thiscall)
 * Assign a wide string: wcslen then copy (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001680 (44 B, __thiscall, ECX = this, RET 4) -- Assign a wide string:
 * if (str && str[0]) append(str, wcslen(str) * 2);
 * where append = FUN_100016b0 (__thiscall, ECX = this, RET 8, 2 stack args).
 * CFLAGS: /G6 /O2  (needs /G6 Pentium-Pro scheduling to defer the `this`
 * register ops to match the ref; plain /O2 hoists them -> 69.44%)
 */
extern void *g_100210f4; /* IAT: wcslen */
extern void __cdecl FUN_100016b0(void);

__declspec(naked) void FUN_10001680(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x8]
        test esi, esi
        push edi
        mov edi, ecx
        jz done
        cmp word ptr [esi], 0x0
        jz done
        push esi
        call dword ptr [g_100210f4]
        add esp, 0x4
        shl eax, 0x1
        push eax
        push esi
        mov ecx, edi
        call FUN_100016b0
    done:
        pop edi
        pop esi
        ret 0x4
    }
}
