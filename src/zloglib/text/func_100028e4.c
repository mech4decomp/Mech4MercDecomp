/*
 * ZlogLib.dll - FUN_100028e4 (0x100028E4, 30 B, __cdecl)
 * Byte copy: copies count bytes from src to dst (overlap-safe forward copy).
 * Transcribed from ZlogLib.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100028e4 (30 B) -- forward byte copy (count bytes src->dst).
 * 56 8B742410 85F6 7613 8B4C2408 8B44240C 2BC1
 * L1: 8A1408 8811 41 4E 75F7  5E C3
 */

__declspec(naked) void FUN_100028e4(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp + 0x10]
        test esi, esi
        jbe L2
        mov ecx, dword ptr [esp + 0x8]
        mov eax, dword ptr [esp + 0xc]
        sub eax, ecx
L1:
        mov dl, byte ptr [eax + ecx]
        mov byte ptr [ecx], dl
        inc ecx
        dec esi
        jnz L1
L2:
        pop esi
        ret
    }
}
