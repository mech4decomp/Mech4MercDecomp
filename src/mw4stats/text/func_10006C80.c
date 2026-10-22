/*
 * MW4Stats.dll - FUN_10006c80 (0x10006C80, 53 B, __thiscall)
 * Free *this, malloc((param_1+1)*this[1]), store, return success. this in ECX.
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10006c80 (53 B, __thiscall, ECX = this, one stack param, RET 0x4) --
 * CFLAGS: /O2
 */
extern void *g_100210ec; /* IAT: free */
extern void *g_100210f8; /* IAT: malloc */

__declspec(naked) void FUN_10006c80(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        test eax, eax
        jz L_c93
        push eax
        call dword ptr [g_100210ec]
        add esp, 0x4
    L_c93:
        mov eax, dword ptr [esp+0x8]
        inc eax
        imul eax, dword ptr [esi+0x4]
        push eax
        call dword ptr [g_100210f8]
        add esp, 0x4
        xor ecx, ecx
        test eax, eax
        setnz cl
        mov dword ptr [esi], eax
        mov al, cl
        pop esi
        ret 0x4
    }
}
